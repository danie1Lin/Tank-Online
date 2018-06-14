using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;

using System;
using System.Reflection;

using System.Collections.Concurrent;

//using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Grpc.Core;
using Google.Protobuf.WellKnownTypes;
using Msg;


public class Room {
	public RoomInfo m_roomInfo;
}
public class GameManager : MonoBehaviour
{
	//Object
    public CameraControl m_CameraControl;
	public List<GameObject> m_entityPrefablist;
	public Dictionary<string,GameObject> m_entityPrefab;
	public EntityManager mainPlayer;
    public List<EntityManager> m_Players;

	public GameObject LoginPanel;
	public GameObject DebugPanel;
	public Canvas RoomCanvas;
	public Canvas IndexCanvas;
	public RpcClient Client;
	//Game State
	public bool IsLogin ;
	public bool IsRoomStart;
	public bool IsRoomEnd;
	public bool	IsPlayerCreated;

	public ConcurrentQueue<CallFuncInfo> OutFuncQueue;
	private ConcurrentQueue<CallFuncInfo> InFuncQueue;
	public ConcurrentQueue<Position> InPosQueue;
	public ConcurrentQueue<Msg.Input> OutInputQueue;
	private ConcurrentQueue<Error> OutErrQueue;
	private ConcurrentQueue<Error> InErrQueue;
	private ConcurrentQueue<CallFuncInfo> CreateEntityManagerQueue;
	private ConcurrentQueue<CallFuncInfo> DestroyEntityManagerQueue;
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
	private Msg.Position m_pos;

	private UnityEngine.Quaternion m_q;
	private UnityEngine.Vector3 m_p;

	private Character t_entityInfo;


	public async Task<CallFuncInfo> GetOutCallFunc(){
		var f = new CallFuncInfo ();
		bool getf = false;
		while ( !getf){
			if (OutFuncQueue.TryDequeue(out f)){
					getf = true;
			}
			await Task.Delay (1);
		}
		return f;
	}
	/// <summary>
	/// Adds the out func queue.
	/// </summary>
	/// <returns>The out func queue.</returns>
	/// <param name="f">F.</param>
	public Task AddOutFuncQueue(CallFuncInfo f){
		var T = Task.Run (async () => {
			OutFuncQueue.Enqueue (f);
		});
		return T;
	}

	public CallFuncInfo GetInCallFunc(){
		var f = new CallFuncInfo ();
		return f;
	}

	public void AddInFuncQueue(CallFuncInfo f){
		
	}
    private void Start()
    {
		m_Players = new List<EntityManager> ();
		m_entityPrefab = new Dictionary<string, GameObject> ();
		t_entityInfo = new Character ();
		IdMapUserInfo = new Dictionary<long,UserInfo> ();

		//init Queue
		OutFuncQueue = new ConcurrentQueue<CallFuncInfo>();
		InFuncQueue = new ConcurrentQueue<CallFuncInfo>();
		InPosQueue = new ConcurrentQueue<Position>();
		OutInputQueue = new ConcurrentQueue<Msg.Input>();
		OutErrQueue =  new ConcurrentQueue<Error>() ;
		InErrQueue = new ConcurrentQueue<Error>();
		CreateEntityManagerQueue = new ConcurrentQueue<CallFuncInfo> ();
		IdMapEntityManager = new Dictionary<long,EntityManager> ();

		//GameObj
		selectRoomCanvas = RoomCanvas.GetComponent<SelectRoom> ();

		//Reflection
		type = typeof(GameManager);

		//
		foreach (var x in m_entityPrefablist) {
			m_entityPrefab.Add (x.name, x);
		}
		Debug.Log ("Prefab :"+m_entityPrefab);

		//state
		IsLogin = false;
		IsRoomStart = false;
		IsRoomEnd = false;
		IsPlayerCreated = false;
		//
		RoomCanvas.enabled = false;
		IndexCanvas.enabled = true;
		DebugPanel.SetActive (false);
		m_UserInfo = null;
		m_EntityManagerInfo = null;



		var channel = new Channel("35.201.150.218:8080", ChannelCredentials.Insecure);
		Client = new RpcClient(new Msg.Rpc.RpcClient(channel), this);


		StartCoroutine(GameLoop());

    }

	void FixedUpdate(){



		createEntityManager ();
		syncAllPosition ();
	}

	void syncAllPosition(){
		if (InPosQueue.TryDequeue (out m_pos)) {
			var time = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
			var t1 = Convert.ToInt64 (time.TotalMilliseconds) - m_pos.TimeStamp;
			//Debug.Log("Position Get [Delay]"+t1+"(ms)");
			foreach (KeyValuePair<long,Msg.TransForm> p in m_pos.PosMap) {
				EntityManager entity;
				IdMapEntityManager.TryGetValue (p.Key, out entity);
				if (entity != null) {
                    var t = util.PraseTransform(p.Value);
					m_q = t.Item2;
					m_p = t.Item1;
					entity.CQ.Enqueue (m_q);
					entity.CV.Enqueue (m_p);
				} else {
					//Debug.Log ("Null?" + p.Key);
				}
			}
		}
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
		//隱藏LoginPanel
	}
	/// <summary>
	/// Chooses the room.
	/// </summary>
	/// <returns>The room.</returns>
	private IEnumerator ChooseRoom(){
		RoomCanvas.enabled = true;
		while ( ! IsRoomStart ) {
			yield return null;
		}
		RoomCanvas.enabled = false;
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
		Client.Stop();
	}
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

	void createEntityManager(){
		var f = new CallFuncInfo ();
		if (CreateEntityManagerQueue.TryDequeue (out f)) {
			var t_entityInfo = f.Param [0].Unpack<Character> ();
			var t = util.PraseTransform(f.FromPos);
			switch (t_entityInfo.CharacterType) {
			case "Shell":
                var shell_Instance = Instantiate(m_entityPrefab["Shell"], t.Item1, t.Item2) as GameObject;
                var shell = new EntityManager(t_entityInfo, shell_Instance, shell_Instance.GetComponent<ShellMovement>());
				IdMapEntityManager.Add (t_entityInfo.Uuid, shell);
				break;
			case "Player":
                var player_Instance = Instantiate(m_entityPrefab["Tank"], t.Item1, t.Item2) as GameObject;
                
                var player = new EntityManager (t_entityInfo, player_Instance, player_Instance.GetComponent<TankMovement>());
                player.SetPlayer(player_Instance.GetComponent<TankMovement>());
				foreach (KeyValuePair<long,Character> item in m_UserInfo.OwnCharacter) {
					if (item.Key == t_entityInfo.Uuid) {
						player.SetMainPlayer ();
						mainPlayer = player;
						IsPlayerCreated = true;
						Client.SyncPos (m_UserInfo.Uuid);
                        m_CameraControl.centerTarget = player.m_Instance.transform;
						break;
					}
				}
				m_Players.Add(player);
				IdMapEntityManager.Add (t_entityInfo.Uuid, player);
				break;
            case "Enemy":
                var enemy_Instance = Instantiate(m_entityPrefab["Tank"], t.Item1, t.Item2) as GameObject;
                var enemy = new EntityManager(t_entityInfo, enemy_Instance, enemy_Instance.GetComponent<TankMovement>());
                enemy.SetPlayer(enemy_Instance.GetComponent<TankMovement>());
                m_Players.Add(enemy);
                IdMapEntityManager.Add(t_entityInfo.Uuid, enemy);
                break;
			default:
				Debug.Log("No such entity type "+t_entityInfo.CharacterType);
				break;
			}
		}
	}
	/*
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