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
    public static AgentRpc instance;
    public string Addr;
    private unity.WaitForFixedUpdate fixedUpdate;
    private ClientToAgent.ClientToAgentClient client;
    //Queue
    private CancellationTokenSource rpcStopSignal;
    public CancellationTokenSource roomContentToken;
    private Msg.Input m_Input;
    private Metadata metadata;
    private ServerInfo gameServerInfo;
    public GameManager gm;
    public ConcurrentQueue<RoomList> RoomListQueue;
    public ConcurrentQueue<HomeView> HomeViewQueue;
    public ConcurrentQueue<RoomContent> RoomContentQueue;

    public static bool ReconnectAgent()
    {
        instance.Stop();
        new AgentRpc(AgentRpc.instance.Addr);
        return true;
    }
    public AgentRpc(string addr)
    {
        this.Addr = addr;
        gm = unity.GameObject.Find("GameManager").GetComponent<GameManager>();
        rpcStopSignal = new CancellationTokenSource();
        roomContentToken = new CancellationTokenSource();
        fixedUpdate = new unity.WaitForFixedUpdate();
        var channel = new Channel(addr, ChannelCredentials.Insecure);
        client = new ClientToAgent.ClientToAgentClient(channel);

        metadata = new Metadata();
        instance = this;
    }

    public bool GetSession(string username, string sessionid)
    {
        if (username != "" && sessionid != "")
        {
            metadata.Add("session-id", sessionid);
            metadata.Add("uname", username);
            unity.Debug.Log("Using old session" + sessionid);
        }
        else
        {
            var sessionkey = client.AquireSessionKey(new Empty(), cancellationToken: rpcStopSignal.Token);
            unity.Debug.Log("GetNewSession" + sessionkey.Value);
            GameManager.instance.SessionId = sessionkey.Value;
            metadata.Add("session-id", sessionkey.Value);
        }
        return true;
    }

    public async void Stop()
    {
        rpcStopSignal.Cancel();
        if (!roomContentToken.IsCancellationRequested) roomContentToken.Cancel();
        await GrpcEnvironment.ShutdownChannelsAsync();
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
            gm.IsRoomEnter = true;
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
                UpdateRoomContent();
                gm.IsRoomEnter = true;
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
        unity.Debug.Log("Acquiring");
        var serverInfo = await client.AquireGameServerAsync(new Empty(), metadata);
        GameManager.instance.IsRoomStart = true;
        if (serverInfo != null)
        {
            //unity.Debug.Log(serverInfo);
            GameManager.instance.gameServerInfo = serverInfo;
            GameManager.instance.metadata = metadata;
            GameManager.instance.IsRoomStart = true;
        }
        
    }
    public bool HandleError(RpcException e)
    {
        unity.Debug.Log("Handle Error" + e);
        switch (e.Status.StatusCode)
        {
            case StatusCode.NotFound:
                //Session Not Found, require session key again
                GameManager.instance.ResetCookie();
                GameManager.instance.RestartGameLoop();
                return false;
                break;
            case StatusCode.Internal:
                //Reconnect or Change Server
                break;
            case StatusCode.Unavailable:
            case StatusCode.Unknown:

                break;
            case StatusCode.Cancelled:
            default:
                unity.Debug.Log("Server is dead");
                GameManager.instance.RestartGame();
                break;
        }
        return true;
    }
}


public class GameRpc
{
    public static GameRpc instance;
    private unity.WaitForFixedUpdate fixedUpdate;
	public ClientToGame.ClientToGameClient client;
	private CancellationTokenSource rpcStopSignal;
	private Msg.Input m_Input;
    private Metadata metadata;
    public ConcurrentQueue<Msg.Input> InputQ;
    public ConcurrentQueue<GameFrame> GameFrameQ;
	public GameRpc(ServerInfo info,Metadata metadata)
	{
		rpcStopSignal = new CancellationTokenSource ();
        this.metadata = metadata;
        var channel = new Channel(info.Addr+":8080" , ChannelCredentials.Insecure);
        this.client = new ClientToGame.ClientToGameClient(channel);
        instance = this;
	}


    public async void Input()
    {
        try
        {
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
        catch (RpcException e)
        {
            await Task.Delay(10);
            if (HandleError(e)) Input();
        }
    }

    public async void TimeCalibrate()
    {
        try
        {
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
        } catch (RpcException e)
        {
            await Task.Delay(10);
            if (HandleError(e)) GetGameFrame();
        }
    }


    public async void Stop()
    {
        rpcStopSignal.Cancel();
        await GrpcEnvironment.ShutdownChannelsAsync();
    }
    public bool HandleError(RpcException e)
    {
        unity.Debug.Log("Handle Error"+ e);
        switch (e.Status.StatusCode)
        {
            case StatusCode.NotFound:
                //Session Not Found, require session key again
                GameManager.instance.ResetCookie();
                GameManager.instance.RestartGameLoop();
                return false;
                break;
            case StatusCode.Internal:
                //Reconnect or Change Server
                break;
            case StatusCode.Unavailable:
                if (e.Status.Detail == "Connection Failed")
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
                GameManager.instance.RestartGame();
                break;
        }
        return true;
    }
}



public static class AsyncEnumerator
{
	public static Task<bool> MoveNext<T>(this IAsyncEnumerator<T> enumerator)
	{
		if (enumerator == null) 
			throw new ArgumentNullException (nameof (enumerator));

		return enumerator.MoveNext (CancellationToken.None);
	}
} 