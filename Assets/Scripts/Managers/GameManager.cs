

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
    
    //Rpc
    public AgentRpc agentServer;
    public GameRpc gameServer;
	//Game State
	public bool IsLogin ;
    public bool IsRoomEnter;
    public bool IsRoomStart;
	public bool IsRoomEnd;
	public bool	IsPlayerCreated;
    
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

	private UnityEngine.Quaternion m_q;
	private UnityEngine.Vector3 m_p;

	private Character t_entityInfo;

    public void RestartGame()
    {
        
        //gameServer.Stop();
        agentServer.Stop();
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
        
        m_joystick.enabled = true;

        //GameObj
        RoomCanvas.enabled = false;
        IndexCanvas.enabled = true;
        GamePlayCanvas.enabled = false;
        RoomPrepareCanvas.enabled = false;

        StartCoroutine(GameLoop());
    }

    private void Update()
    {
        if (UnityEngine.Input.GetKeyDown(KeyCode.Escape))
        {
            RestartGame();
        }
    }

    void FixedUpdate(){
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
    private IEnumerator ConnectingAgnet()
    {
        var ReconnectFreq = new WaitForSeconds(0.01f);
        while (agentServer == null)
        {
            try
            {
                agentServer = new AgentRpc(agentServeAddr);
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

    }

	private IEnumerator Login(){
		//wait login suceed	
		LoginPanel.SetActive(true);
		//
		m_CameraControl.SetStartPositionAndSize ();
		while ( ! IsLogin ) {
			yield return null;
		}
		LoginPanel.SetActive (false);
		IndexCanvas.enabled = false;
        agentServer.UpdateRoomList();
        //隱藏LoginPanel
    }
	/// <summary>
	/// Chooses the room.
	/// </summary>
	/// <returns>The room.</returns>
	private IEnumerator ChooseRoom(){
		RoomCanvas.enabled = true;
        var t = new WaitForSeconds(1);
        while ( ! IsRoomEnter ) {
            yield return t;
		}
		RoomCanvas.enabled = false;
        GamePlayCanvas.enabled = true;
    }
    private IEnumerator RoomPreparing()
    {
        RoomPrepareCanvas.enabled = true;
        while (!IsRoomStart)
        {
            yield return null;
        }
        roomPrepare.Clean();
        RoomPrepareCanvas.enabled = false;
    }

    /// <summary>
    /// Main Loop   
    /// </summary>
    /// <returns>The loop.</returns>
    private IEnumerator GameLoop()
    {
        yield return StartCoroutine(ConnectingAgnet());
        yield return StartCoroutine(Login());
		yield return StartCoroutine (ChooseRoom ());
        yield return StartCoroutine(RoomPreparing());
        yield return StartCoroutine(RoundStarting());
        
        yield return StartCoroutine(RoundPlaying());

        if (m_GameWinner != null)
        {
            //SceneManager.LoadScene(0);
			Application.LoadLevel(Application.loadedLevel);
        }
        else
        {
            StartCoroutine(GameLoop());
        }
    }

    private IEnumerator RoundStarting()
    {
        //SceneManager.LoadScene("Gameplay-01");
        GameRpc.instance.TimeCalibrate();
        //GameRpc.instance.TimeCalibrate();
        
        GameRpc.instance.InputQ = EntityManager.instance.InputQ;
        GameRpc.instance.GameFrameQ = EntityManager.instance.gameFrameQ ;
        EntityManager.instance.enabled = true;
        GameRpc.instance.GetGameFrame();
        GameRpc.instance.Input();
        
        while (!IsPlayerCreated) {
			yield return null;
		}
		//SetCameraTargets();
		//ResetAllTanks ();
		m_CameraControl.SetStartPositionAndSize ();
        
    }

    private IEnumerator RoundPlaying()
    {
		while( !IsRoomEnd ){
			yield return null;
		}
    }

    private IEnumerator RoundEnding()
    {

        yield return m_EndWait;
    }

	void OnApplicationQuit() {
		Debug.Log ("Exit !");
        if (agentServer != null)
		agentServer.Stop();
        if (gameServer != null)
        gameServer.Stop();
	}
}