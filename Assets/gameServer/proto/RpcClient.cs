using System;
using Msg;
using System.Collections;
using System.Threading;
using System.Collections.Generic;
using unity = UnityEngine;
using System.Threading.Tasks;
using Grpc.Core;
using Google.Protobuf;
using System.Collections.Concurrent;

using UnityEngine.SceneManagement;


public class util{
    private static Int64 timeOffset = 0;

    public static long TimeOffset
    {
        get
        {
            return timeOffset;
        }

        set
        {
            timeOffset = value;
        }
    }

    public static Int64 GetTimeStamp(){
		var timeStamp = Convert.ToInt64 ((DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0)).TotalMilliseconds) + timeOffset;
		return timeStamp;
	}

    public static unity.Vector3 PosMsgToUnity(Msg.Vector3 p)
    {
        return new unity.Vector3 {x=p.X,y=p.Y,z=p.Z};
    }
    public static unity.Quaternion QMsgToUnity(Msg.Quaternion q)
    {
        return new unity.Quaternion { x = q.X, y = q.Y, z = q.Z , w=q.W};
    }

    public static Quaternion QUnityToMsg(unity.Quaternion q)
    {
        return new Quaternion { X = q.x, Y = q.y, Z = q.z, W = q.w };
    }
    public static Vector3 PosUnityToMsg(unity.Vector3 q)
    {
        return new Vector3 { X = q.x, Y = q.y, Z = q.z};
    }
}


public class AgentRpc
{

    public string Addr;
    private unity.WaitForFixedUpdate fixedUpdate;
    private ClientToAgent.ClientToAgentClient client;
    //Queue
    private CancellationTokenSource rpcStopSignal;
    public CancellationTokenSource roomContentToken;
    public CancellationTokenSource AcquireGameServerToken;
    private Msg.Input m_Input;
    private Metadata metadata;
    private ServerInfo gameServerInfo;
    public static ConcurrentQueue<RoomList> RoomListQueue = new ConcurrentQueue<RoomList>();
    public static ConcurrentQueue<HomeView> HomeViewQueue = new ConcurrentQueue<HomeView>();
    public static ConcurrentQueue<RoomContent> RoomContentQueue = new ConcurrentQueue<RoomContent>();

    public Channel channel;
    public GameManager GM;
    private static AgentRpc instance;
    public static AgentRpc Instance {
        get {
            if (instance == null) {
                AgentRpc.instance = new AgentRpc();
            }
            return AgentRpc.instance;
        }
    }

    public static bool ReconnectAgent()
    {
        instance.Stop();
        return true;
    }

    protected AgentRpc()
    {
        GM = GameManager.Instance;
        rpcStopSignal = new CancellationTokenSource();
        roomContentToken = new CancellationTokenSource();
        metadata = GM.metadata;
        unity.Debug.Log("Reload Agent");

    }

    public SessionCache GetSessionCache(){
        SessionCache cache = null;
        try
        {
            cache = client.GetSessionCache(new Empty(), GM.metadata);

        }
        catch (RpcException e)
        {
            if (HandleError(e)) cache = GetSessionCache();
        }
        return cache;
    }
    
    public async Task<bool> ConnectServer(string addr)
    {
        this.Addr = addr;
        try {
            channel = new Channel(Addr, ChannelCredentials.Insecure);
            client = new ClientToAgent.ClientToAgentClient(channel);
            await channel.ConnectAsync();
            return true;
        }
        catch (RpcException e) {

            if (HandleError(e)) 
                return  await ConnectServer(addr);
        }
        return false;
    }

    public bool GetSession(string sessionid)
    {
        if (sessionid != "")
        {
            unity.Debug.Log("Using old session" + sessionid);
            return true;
        }
        else
        {
            try
            {
                var sessionkey = client.AquireSessionKey(new Empty(), cancellationToken: rpcStopSignal.Token);
                unity.Debug.Log("GetNewSession" + sessionkey.Value);
                GM.SessionId = sessionkey.Value;
                metadata.Add("session-id", sessionkey.Value);

                return true;
            }
            catch (RpcException e) {
                return HandleError(e);
            }
        }
        return false;
    }

    public async void Stop()
    {
        if (instance == null) return;
        rpcStopSignal.Cancel();
        if (!roomContentToken.IsCancellationRequested) roomContentToken.Cancel();
        await GrpcEnvironment.ShutdownChannelsAsync();
        await channel.ShutdownAsync();
    }

    /// <summary>
    /// Blocking unary call example.  Calls GetFeature and prints the response.
    /// </summary>
    public UserInfo Login(string name, string pwsd)
    {
        LoginInput user = new LoginInput { UserName = name, Pswd = pwsd };
        UserInfo userInfo = client.Login(user, metadata, cancellationToken: rpcStopSignal.Token);
        unity.Debug.Log("Login :" + userInfo);
        metadata.Add("uname", userInfo.UserName);
        return userInfo;
    }

    public void RegistAccount(string name, string pwsd, string email)
    {
        RegistInput userReigister = new RegistInput { UserName = name, Pswd = pwsd, Email = email };
        Error err = client.CreateAccount(userReigister, metadata, cancellationToken: rpcStopSignal.Token);
        unity.Debug.Log("CreateAccount :" + err);
    }

    public async void UpdateRoomList()
    {
        if (roomContentToken.Token.IsCancellationRequested) roomContentToken = new CancellationTokenSource();
        using (var call = client.UpdateRoomList(new Empty(), metadata, cancellationToken: roomContentToken.Token))
        {
            // Recevice
            while ( await call.ResponseStream.MoveNext())
            {
                RoomList roomList = call.ResponseStream.Current;
                RoomListQueue.Enqueue(roomList);
                //Updata to 
            }
        };
    }

    public bool EnterRoom(long uuid) 
    {
        var success = client.JoinRoom(new ID { Value = uuid },metadata, cancellationToken: rpcStopSignal.Token);
        if (success.Ok){
            UpdateRoomContent();
            //GM.IsRoomEnter = true;
            return true;
        }
        return false;
    }

    public bool CreatRoom(RoomSetting setting)
    {
        try
        {
            var s = client.CreateRoom(setting, metadata, cancellationToken: rpcStopSignal.Token);
            if (s.Ok)
            {

                //Gm.IsRoomEnter = true;
                return true;
            }
        }
        catch (RpcException e)
        {
            if (HandleError(e)) return CreatRoom(setting);
        }
        return false;
    }

    public async void UpdateRoomContent()
    {
        try
        {
            using (var call = client.UpdateRoomContent(new Empty(), metadata, cancellationToken: rpcStopSignal.Token))
            {
                // Recevice
                while (!rpcStopSignal.Token.IsCancellationRequested && await call.ResponseStream.MoveNext())
                {
                    RoomContent roomContent = call.ResponseStream.Current;
                    RoomContentQueue.Enqueue(roomContent);
                    //Updata to 
                }
            };
        }
        catch (RpcException e)
        {
            if (HandleError(e))UpdateRoomContent();
        }
    }

    public bool ReadyRoom()
    {
        var success = client.RoomReady(new Empty(), metadata);
        if (success.Ok)
        {
            return true;
        }
        return false;
    }

    public bool CancelReady()
    {
        return false;
    }

    public bool SettingCharacter(CharacterSetting setting)
    {
        try
        {
            var s = client.SetCharacter(setting, metadata);
            return s.Ok;
        }
        catch (RpcException e)
        {
            if (HandleError(e))
            {
                return SettingCharacter(setting);
            }
        }
        return false;
    }

    public async void AquireGameServer()
    {
        AcquireGameServerToken = new CancellationTokenSource();
        unity.Debug.Log("Acquiring");
        ServerInfo serverInfo = null;
        try
        {
            serverInfo = await client.AquireGameServerAsync(new Empty(), metadata, cancellationToken: AcquireGameServerToken.Token);
        }
        catch (TaskCanceledException e) {
            unity.Debug.Log("Cancel Acquire Server");
            return;
        }
        if (serverInfo != null)
        {
            GM.gameServerInfo = serverInfo;
            GM.ChangeScence((int)Msg.SessionInfo.Types.SessionState.OnStart,"Desert");
        }
        
    }

    public bool HandleError(RpcException e)
    {
        unity.Debug.Log("Handle Error" + e);
        switch (e.Status.StatusCode)
        {
            case StatusCode.NotFound:
                //Session Not Found, require session key again
                //GM.ResetCookie();
                //GM.RestartGameLoop();

                //GM.ChangeScence((int)Msg.SessionInfo.Types.SessionState.NoSession,"");
                GM.metadata.Clear();
                return GetSession("");
                break;
            case StatusCode.Internal:
                //Reconnect or Change Server

                break;
            case StatusCode.Unavailable:
                if (e.Status.Detail == "Connect Failed")
                {
                    unity.GameObject.Destroy(GameManager.instance.gameObject);
                    SceneManager.LoadScene("PreStartGame");

                    return false;
                }
                else if (e.Status.Detail == "Endpoint read failed")
                {
                    return true;
                }
                break;
            case StatusCode.Unknown:

                break;
            case StatusCode.Cancelled:
            default:
                unity.Debug.Log("Server is dead");
                //GM.RestartGame();
                break;
        }
        return true;
    }

}


public class GameRpc
{
    private static GameRpc instance;
    private unity.WaitForFixedUpdate fixedUpdate;
	public ClientToGame.ClientToGameClient client;
	private CancellationTokenSource rpcStopSignal;
	private Msg.Input m_Input;
    private Metadata metadata;
    public static ConcurrentQueue<Msg.Input> InputQ = new ConcurrentQueue<Input>();
    public static ConcurrentQueue<GameFrame> GameFrameQ = new ConcurrentQueue<GameFrame>();
    public Channel channel;
    private ServerInfo info;
    public GameManager GM;
    private bool IsConnected;

    public static GameRpc Instance{
        get {
            if (instance == null){
                instance = new GameRpc();
            }
            return instance;
        }
    }


    protected GameRpc()
	{
		rpcStopSignal = new CancellationTokenSource ();
        IsConnected = false;
        GM = GameManager.Instance;
        instance = this;
	}

    public async Task<bool> ConnectServer(ServerInfo info, Metadata metadata)
    {
        if (!IsConnected)
        {
            this.metadata = metadata;
            this.info = info;
            try
            {
                channel = new Channel(info.Addr + info.Port, ChannelCredentials.Insecure);
                await channel.ConnectAsync();
                unity.Debug.Log("Connect Success!");
                this.client = new ClientToGame.ClientToGameClient(channel);
                
                IsConnected = true;
                return true;
            }
            catch (RpcException e)
            {
                if (HandleError(e)) return await ConnectServer(info,metadata);
            }
            return false;
        }
        return true;
    }

    public async void Input()
    {
        try {
            using (var stream = client.PlayerInput(metadata, cancellationToken: rpcStopSignal.Token))
            {
                var e = stream.ResponseAsync;
                Msg.Input t_input;
                while (!e.IsCompleted)
                {
                    if (InputQ.TryDequeue(out t_input))
                    {
                        t_input.TimeStamp = util.GetTimeStamp();
                        await stream.RequestStream.WriteAsync(t_input);
                    }
                    else
                    {
                        await Task.Delay(1);
                    }
                }
            }
        }
        catch (RpcException e) {
            await Task.Delay(10);
            if (HandleError(e)) Input();
        }
    }

    public async void TimeCalibrate()
    {
        try {
            var t1 = util.GetTimeStamp();
            var t2 = client.TimeCalibrate(new Empty(), cancellationToken: rpcStopSignal.Token).Value;
            var delay = (util.GetTimeStamp() - t2) / 2;
            var ServerT1 = t2 - delay;
            util.TimeOffset = ServerT1 - t1;
            unity.Debug.Log("Calibrate offset: " + util.TimeOffset + " ms, Delay: " + delay + " ms");
        }
        catch (RpcException e)
        {
            await Task.Delay(10);
            if (HandleError(e)) TimeCalibrate();
        }
    }

    public async void GetGameFrame()
    {
        try {
            using (var call = client.UpdateGameFrame(new Empty(), metadata,cancellationToken : rpcStopSignal.Token))
            {
                while (await call.ResponseStream.MoveNext())
                {
                    var t = call.ResponseStream.Current;
                    GameFrameQ.Enqueue(t);
                    //await Task.Delay(1);
                }
            }
        } 
        catch (RpcException e) {
            await Task.Delay(10);
            if (HandleError(e)) GetGameFrame();
        }
    }

    public async void Stop()
    {
        if (instance == null) return;
        rpcStopSignal.Cancel();
        await GrpcEnvironment.ShutdownChannelsAsync();
        await channel.ShutdownAsync();
    }

    public static bool HandleError(RpcException e)
    {
        unity.Debug.Log("Handle Error"+ e);
        switch (e.Status.StatusCode)
        {
            case StatusCode.NotFound:
                //Session Not Found, require session key again
                //GM.ResetCookie();
                //GM.RestartGameLoop();
                GameManager.Instance.ChangeScence((int)Msg.SessionInfo.Types.SessionState.NoSession,"");
                return false;
                break;
            case StatusCode.Internal:
                //Reconnect or Change Server
                break;
            case StatusCode.Unavailable:
                if (e.Status.Detail == "Connect Failed")
                {
                    return false;
                }
                else if (e.Status.Detail ==  "Endpoint read failed")
                {
                    return true;
                }
                break;
            case StatusCode.Unknown:
            case StatusCode.Cancelled:
            default:
                unity.Debug.Log("Server is dead");
                //GM.RestartGame();
                break;
        }
        return true;
    }

}



public static class AsyncEnumerator
{
    public static Task<bool> MoveNext<T>(this Grpc.Core.IAsyncEnumerator<T> enumerator)
	{
		if (enumerator == null) 
			throw new ArgumentNullException (nameof (enumerator));

		return enumerator.MoveNext (CancellationToken.None);
	}
} 