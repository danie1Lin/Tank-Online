

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
    const string agentServeAddr = "35.201.150.218:8080";

    //Object
    public CameraControl m_CameraControl;
	public List<GameObject> m_entityPrefablist;
	public Dictionary<string,GameObject> m_entityPrefab;
	public EntityManager mainPlayer;
    public List<EntityManager> m_Players;
    public Canvas RoomPrepareCanvas;
    public RoomPrepare roomPrepare;
    //View
    public GameObject LoginPanel;
	public GameObject DebugPanel;
	public Canvas RoomCanvas;
	public Canvas IndexCanvas;
    public Canvas GamePlayCanvas;

    //Rpc
    public AgentRpc agentServer;
    public GameRpc gameServer;
	//Game State
	public bool IsLogin ;
	public bool IsRoomStart;
	public bool IsRoomEnd;
	public bool	IsPlayerCreated;
    public Joystick m_joystick;

	//player's info
	public UserInfo m_UserInfo;
	public RoomInfo m_RoomInfo;
	public Character m_EntityManagerInfo;
	private Dictionary<long,UserInfo> IdMapUserInfo;
	private MemberInfo type;
	private Dictionary<long,Room> IdMapRoom; 
	private Dictionary<long,EntityManager> IdMapEntityManager;


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
        m_joystick.enabled = true;

		m_Players = new List<EntityManager> ();
		m_entityPrefab = new Dictionary<string, GameObject> ();
		t_entityInfo = new Character ();
		IdMapUserInfo = new Dictionary<long,UserInfo> ();

		IdMapEntityManager = new Dictionary<long,EntityManager> ();
		//GameObj

		//Reflection
		type = typeof(GameManager);

		//
		foreach (var x in m_entityPrefablist) {
			m_entityPrefab.Add (x.name, x);
		}
		Debug.Log ("Prefab :"+m_entityPrefab);
        agentServer = new AgentRpc(agentServeAddr);
        selectRoomCanvas = RoomCanvas.GetComponent<SelectRoom>();
        selectRoomCanvas.agent = agentServer;
        RoomMaster = RoomCanvas.GetComponentInChildren<RoomManager>();
        RoomMaster.agent = agentServer;
        roomPrepare.agent = agentServer;
        //state
        IsLogin = false;
		IsRoomStart = false;
		IsRoomEnd = false;
		IsPlayerCreated = false;
		//
		RoomCanvas.enabled = false;
		IndexCanvas.enabled = true;
        GamePlayCanvas.enabled = false;

		DebugPanel.SetActive (false);
		m_UserInfo = null;
		m_EntityManagerInfo = null;

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
		IdMapUserInfo.Add (userInfo.Uuid, userInfo);
		Debug.Log ("[m_UserInfo]"+m_UserInfo);
	}

    private void SetCameraTargets()
    {
		for (int i = 0; i < m_Players.Count; i++)
        {
            m_CameraControl.m_Targets.Add(m_Players[i].m_Instance.transform);
        }
		Debug.Log ("[SetCameraTargets]"+ m_CameraControl.m_Targets);
   
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
        while ( ! IsRoomStart ) {
            yield return t;
		}
		RoomCanvas.enabled = false;
        GamePlayCanvas.enabled = true;
    }
	/// <summary>
	/// Main Loop
	/// </summary>
	/// <returns>The loop.</returns>
    private IEnumerator GameLoop()
    {
		yield return StartCoroutine(Login());
		yield return StartCoroutine (ChooseRoom ());
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
		while (!IsPlayerCreated) {

			yield return null;
		}
		SetCameraTargets();
		ResetAllTanks ();
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
		

    private void ResetAllTanks()
    {
        for (int i = 0; i < m_Players.Count; i++)
        {
            m_Players[i].Reset();
        }
    }

	void OnApplicationQuit() {
		Debug.Log ("Exit !");
		agentServer.Stop();

	}
    /*
	public void CallMathod (CallFuncInfo fInfo){
		System.Type type = this.GetType ();
		MethodInfo f = type.GetMethod (fInfo.Func);
		object[] param = new object[]{ fInfo };
		f.Invoke (this, param);
	}

	public void AddRoomInfo (CallFuncInfo f){
		Debug.Log ("[AddRoomInfo execute]: "+f);
		var roomInfo = f.Param [0].Unpack<RoomInfo> ();

		Debug.Log (roomInfo);
		selectRoomCanvas.addRoomQueue.Enqueue (roomInfo);
	}

	public void GetMyRoom(CallFuncInfo f){
		Debug.Log ("[GetMyRoom execute]: "+f);
		var roomInfo = f.Param[0].Unpack<RoomInfo> ();
		Debug.Log (roomInfo);

	}

	public void GetAllRoomInfo(CallFuncInfo f) {
		Debug.Log ("[GetMyRoom execute]: "+f);
		foreach (var param in f.Param) {
			var roomInfo = param.Unpack<RoomInfo> ();
			Debug.Log ("[Get Room]" + roomInfo);
			selectRoomCanvas.addRoomQueue.Enqueue (roomInfo);
		}
	}
	public void EnterRoom(CallFuncInfo f){
		Debug.Log ("[EnterRoom execute]: "+f);
		var roomInfo = f.Param [0].Unpack<RoomInfo> ();
		selectRoomCanvas.Enter(roomInfo);
	}

    public void LeaveRoom(CallFuncInfo f)
    {
        Debug.Log("[LeaveRoom execute]: " + f);
        selectRoomCanvas.Leave(f.TargetId);
    }

    public void StartRoom(CallFuncInfo f){
		Debug.Log ("[StartRoom execute]: "+f);
		IsRoomStart = true;
	}


	public void CreateEntity(CallFuncInfo f){
		Debug.Log ("[CreateEntityManager execute]: "+f);
		CreateEntityManagerQueue.Enqueue (f);
	}

	public void CreateShell(CallFuncInfo f){
		Debug.Log ("[CreateShell execute]: "+f);
		CreateEntityManagerQueue.Enqueue (f);
	}

	public void DestroyEntity(CallFuncInfo f){
        EntityManager entity;
        if (IdMapEntityManager.TryGetValue(f.TargetId, out entity))
        {
            Debug.Log("[DestroyEntity execute]:" + f);
            entity.Destroy();
        }
	}

    public void Health(CallFuncInfo f)
    {
        Debug.Log("[Health execute]"+f);
        var entity = IdMapEntityManager[f.TargetId];
        entity.HealthQ.Enqueue(f.Value);
    }

    public void Calibrate(CallFuncInfo f)
    {
        
        var ToServerTime = f.FromId - f.TargetId;
        var ToClientTime = util.GetTimeStamp() - f.TimeStamp;
        var timeOffset = (ToClientTime - ToServerTime) / 2;
        util.TimeOffset = (Int64)(timeOffset);
        var delay = (ToClientTime + ToServerTime) ;
        Debug.Log("Calibrate offset: " + util.TimeOffset+" ms, Delay: "+ delay+" ms");
    }

	
	
	void destroyEntityManager(){
		var t_entityInfo = new Character ();
		if (DestroyEntityManagerQueue.TryDequeue (out t_entityInfo)) {
			var t_entity = new EntityManager ();
			IdMapEntityManager.TryGetValue (t_entityInfo, out t_entity);
			IdMapEntityManager.Remove (t_entityInfo.Uuid);
			switch (t_entityInfo.CharacterType) {
			case "Shell":
				Debug.Log ("Shell destory");
				break;
			case "Player":
				m_Players.Remove(t_entity);
				foreach (KeyValuePair<long,Character> item in m_UserInfo.OwnCharacter) {
					if (item.Key == t_entityInfo.Uuid) {
						mainPlayer = null;
						IsPlayerCreated = false;
						break;
					}
				}
				break;
			default:
				Debug.Log("No such entity type "+t_entityInfo.CharacterType);
				break;
			}
		}
	}
	*/
}