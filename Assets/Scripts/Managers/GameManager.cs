

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;

using System;
using System.Reflection;

using System.Collections.Concurrent;

using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Grpc.Core;
using Google.Protobuf.WellKnownTypes;
using Msg;
using UnityStandardAssets.CrossPlatformInput;
using System.IO;

using Google.Protobuf;
public class Room {
	public RoomInfo m_roomInfo;
}
public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    const string agentServeAddr = "35.201.150.218:50051";

    //Object
    public CameraControl m_CameraControl;

    public Canvas RoomPrepareCanvas;
    public RoomPrepare roomPrepare;
    //View
    public GameObject LoginPanel;
	public Canvas RoomCanvas;
	public Canvas IndexCanvas;
    public Canvas GamePlayCanvas;
    public string SessionId;
    //Rpc
    public AgentRpc agentServer;
    public GameRpc gameServer;
	//Game State
	public bool IsLogin ;
    public bool IsRoomEnter;
    public bool IsRoomStart;
	public bool IsRoomEnd;
	public bool	IsPlayerCreated;
    
    public int gameState;

    public Joystick m_joystick;

	//player's info
	public UserInfo m_UserInfo;
	public RoomInfo m_RoomInfo;



    private int m_RoundNumber;              
    private WaitForSeconds m_StartWait;     
    private WaitForSeconds m_EndWait;       
    private EntityManager m_RoundWinner;
    private EntityManager m_GameWinner;
	private SelectRoom selectRoomCanvas;
    private RoomManager RoomMaster;
    private Msg.Position m_pos;
    public Msg.ServerInfo gameServerInfo;
    public Metadata metadata;

	private UnityEngine.Quaternion m_q;
	private UnityEngine.Vector3 m_p;

	private Character t_entityInfo;

    public void RestartGame()
    {

        //gameServer.Stop();
        if (agentServer != null) agentServer.Stop();
        if (gameServer != null) gameServer.Stop();

        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    /// <summary>
    /// Adds the out func queue.
    /// </summary>
    /// <returns>The out func queue.</returns>
    /// <param name="f">F.</param>

    private void Awake()
    {
        instance = this;
    }
    private void Start()
    {
        //DontDestroyOnLoad(this.gameObject);
        gameState = 0;
        SessionId = "";
        var cookie = LoadCookie();
        if (VerifyCookie(cookie))
        {
            gameState = cookie.Item1;
            SessionId = cookie.Item2;
            string uname;
            if (m_UserInfo == null) uname = "";
            else uname = m_UserInfo.UserName;
            metadata = new Metadata();
            metadata.Add("session-id", SessionId);
            metadata.Add("uname", uname);
        }

        m_joystick.enabled = true;

        //GameObj
        RoomCanvas.enabled = false;
        IndexCanvas.enabled = false;
        GamePlayCanvas.enabled = false;
        RoomPrepareCanvas.enabled = false;
        EntityManager.instance.enabled = false;
        StartCoroutine(GameLoop());
    }

    private void Update()
    {
        if (UnityEngine.Input.GetKeyDown(KeyCode.Escape))
        {
            RestartGame();
        }
    }

	public void SetUser(UserInfo userInfo, bool isLocalPlayer){
		if (isLocalPlayer && m_UserInfo == null) {
			m_UserInfo = userInfo;
		}
		Debug.Log ("[m_UserInfo]"+m_UserInfo);
	}

    /*private void SetCameraTargets()
    {
		for (int i = 0; i < m_Players.Count; i++)
        {
            m_CameraControl.m_Targets.Add(m_Players[i].m_Instance.transform);
        }
		Debug.Log ("[SetCameraTargets]"+ m_CameraControl.m_Targets);
   
    }
    */

    #region GameLoop
    private IEnumerator ConnectingAgnet()
    {
        var ReconnectFreq = new WaitForSeconds(0.01f);
        while (agentServer == null)
        {
            try
            {
                string uname; 
                if (m_UserInfo == null) uname = "";
                else uname = m_UserInfo.UserName;
                agentServer = new AgentRpc(agentServeAddr);
                agentServer.GetSession(uname, SessionId);
            }
            catch (RpcException e)
            {
                Debug.Log("Reconnecting");
            }
            yield return ReconnectFreq;
        
        }

        LoginPanel.GetComponent<Login>().Enable();
        RoomMaster = RoomCanvas.GetComponentInChildren<RoomManager>();
        RoomMaster.agent = agentServer;
        
        roomPrepare.agent = agentServer;
        agentServer.RoomContentQueue = roomPrepare.RoomContentQueue;
        selectRoomCanvas = RoomCanvas.GetComponent<SelectRoom>();
        selectRoomCanvas.agent = agentServer;
        agentServer.RoomListQueue = selectRoomCanvas.RoomListQueue;
        //state
        IsLogin = false;
        IsRoomStart = false;
        IsRoomEnd = false;
        IsPlayerCreated = false;
        IsRoomEnter = false;
        //

        m_UserInfo = null;
        gameState += 1;
    }

	private IEnumerator Login(){
        //wait login suceed	
        RoomCanvas.enabled = false;
        IndexCanvas.enabled = true;
        GamePlayCanvas.enabled = false;
        RoomPrepareCanvas.enabled = false;
        EntityManager.instance.enabled = false;

        LoginPanel.SetActive(true);
		//
		m_CameraControl.SetStartPositionAndSize ();
		while ( ! IsLogin ) {
			yield return null;
		}
        agentServer.UpdateRoomList();
        gameState += 1;
        //隱藏LoginPanel
    }
	/// <summary>
	/// Chooses the room.
	/// </summary>
	/// <returns>The room.</returns>
	private IEnumerator ChooseRoom(){
		RoomCanvas.enabled = true;
        
        IndexCanvas.enabled = false;
        GamePlayCanvas.enabled = false;
        RoomPrepareCanvas.enabled = false;
        EntityManager.instance.enabled = false;
        var t = new WaitForSeconds(1);
        while ( ! IsRoomEnter ) {
            yield return t;
		}
        gameState += 1;
    }
    private IEnumerator RoomPreparing()
    {
        
        RoomCanvas.enabled = false;
        IndexCanvas.enabled = false;
        GamePlayCanvas.enabled = false;
        EntityManager.instance.enabled = false;
        RoomPrepareCanvas.enabled = true;

        while (!IsRoomStart)
        {
            yield return null;
        }
        roomPrepare.Clean();

        gameState += 1;
    }

    private IEnumerator RoundStarting()
    {
        AgentRpc.instance.roomContentToken.Cancel();
        RoomCanvas.enabled = false;
        IndexCanvas.enabled = false;
        GamePlayCanvas.enabled = true;
        RoomPrepareCanvas.enabled = false;
        EntityManager.instance.enabled = false;

        while (gameServerInfo == null)
        {
            yield return null;
        }

        GameManager.instance.gameServer = new GameRpc(gameServerInfo, metadata);
        
        GameRpc.instance.TimeCalibrate();
        GameRpc.instance.InputQ = EntityManager.instance.InputQ;
        GameRpc.instance.GameFrameQ = EntityManager.instance.gameFrameQ;
        EntityManager.instance.enabled = true;
        GameRpc.instance.GetGameFrame();
        GameRpc.instance.Input();

        while (!IsPlayerCreated)
        {
            yield return null;
        }
        //SetCameraTargets();
        //ResetAllTanks ();
        m_CameraControl.SetStartPositionAndSize();
        gameState += 1;
    }

    private IEnumerator RoundPlaying()
    {
        RoomCanvas.enabled = false;
        IndexCanvas.enabled = false;
        GamePlayCanvas.enabled = true;
        RoomPrepareCanvas.enabled = false;
        //EntityManager.instance.enabled = true;

        while (!IsRoomEnd)
        {
            yield return null;;
        }
        gameState = 2;
    }
    /// <summary>
    /// Main Loop   
    /// </summary>
    /// <returns>The loop.</returns>
    private IEnumerator GameLoop()
    {
        switch (gameState)
        {
            case 0:
                yield return StartCoroutine(ConnectingAgnet());
                break;
            case 1:
                yield return StartCoroutine(Login());
                break;
            case 2:
                yield return StartCoroutine(ChooseRoom());
                break;
            case 3:
                yield return StartCoroutine(RoomPreparing());
                break;
            case 4:
                yield return StartCoroutine(RoundStarting());
                break;
            case 5:
                yield return StartCoroutine(RoundPlaying());
                break;
            default:
                break;
        }

        StartCoroutine(GameLoop());
    }

    #endregion GameLoop

    public void ResetCookie()
    {
        m_UserInfo = null;
        SessionId = "";
        gameServerInfo = null;
        gameState = 0;
    }
    public void RestartGameLoop()
    {
        StopAllCoroutines();
        StartCoroutine(GameLoop());
    }

    void OnApplicationQuit() {
		Debug.Log ("Exit !");
        SaveCookie();
        if (agentServer != null)agentServer.Stop();
        if (gameServer != null)gameServer.Stop();
	}

    void SaveCookie()
    {
        if (gameState < 3)
        {
            gameState = 0;
        }
        using (var output = File.Create(Application.persistentDataPath + "/UserInfo.dat"))
        {
            if (m_UserInfo != null) m_UserInfo.WriteTo(output);

        }
        using (var output = File.Create(Application.persistentDataPath + "/ServerInfo.dat"))
        {
            if(gameServerInfo != null) gameServerInfo.WriteTo(output);
        }

        PlayerPrefs.SetInt("State", gameState);
        PlayerPrefs.SetString("SessionId", SessionId);

        PlayerPrefs.SetString("Time", DateTime.UtcNow.ToString());
            
    } 

    Tuple<int,string,string> LoadCookie()
    {
        if (!File.Exists(Application.persistentDataPath + "/UserInfo.dat"))
        {
            
        }
        else
        {
            using (var file = File.OpenRead(Application.persistentDataPath + "/UserInfo.dat"))
            {
                var userInfo = UserInfo.Parser.ParseFrom(file);
                if (userInfo != null) m_UserInfo = userInfo;
                //Debug.Log(m_UserInfo);
            }
        }

        if (!File.Exists(Application.persistentDataPath + "/ServerInfo.dat"))
        {

        }
        else
        {
            using (var file = File.OpenRead(Application.persistentDataPath+ "/ServerInfo.dat"))
            {
                var serverInfo = ServerInfo.Parser.ParseFrom(file);
                if (serverInfo != null) gameServerInfo = serverInfo;
                //Debug.Log(m_UserInfo);
            }
        }
        return new Tuple<int, string, string> (PlayerPrefs.GetInt("State", gameState), PlayerPrefs.GetString("SessionId", SessionId), PlayerPrefs.GetString("Time", DateTime.UtcNow.ToString()));
    }

    bool VerifyCookie(Tuple<int, string, string> cookie)
    {
        DateTime cookieTime;
        if (cookie == null) return false;
        if (DateTime.TryParse(cookie.Item3,out cookieTime))
        {
            if (TimeSpan.FromMinutes(10) > (DateTime.UtcNow - cookieTime))
            {
                return true;
            }
        }
        else
        {
            throw new Exception("Parse Cookie DateTime Error");
        }
        return false;
    }
}