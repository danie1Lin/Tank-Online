using System;
using UnityEngine;
using Msg;
using System.Collections.Concurrent;

public class Entity
{

}

[Serializable]
public class EntityManager
{
	[HideInInspector] public UnityEngine.Color m_PlayerColor;            
	[HideInInspector] public Transform m_SpawnPoint;         
    [HideInInspector] public int m_PlayerNumber;             
    [HideInInspector] public string m_ColoredPlayerText;
    [HideInInspector] public GameObject m_Instance;
	[HideInInspector] public Character entityInfo;
    public TankMovement m_Movement;       
    private TankShooting m_Shooting;
    private TankHealth m_Health;
    private GameObject m_CanvasGameObject;

    public ConcurrentQueue<GameFrame> gameFrame;

	public ConcurrentQueue<UnityEngine.Quaternion> CQ;
	public ConcurrentQueue<UnityEngine.Vector3> CV;
    public ConcurrentQueue<float> HealthQ;


    public IEntity entityMoment;
    public IHealthView entityHealth;

    public EntityManager(Character c, GameObject instance, IEntity ientity )
    {
        m_Instance = instance;
		CV = new ConcurrentQueue<UnityEngine.Vector3> ();
		CQ = new ConcurrentQueue<UnityEngine.Quaternion> ();
        HealthQ = new ConcurrentQueue<float>();


		entityInfo = c;
        entityMoment = ientity;

        entityMoment.SetMoveQ(CV, CQ);
        entityMoment.SetControll(false, 1);


    }

	public void SetMainPlayer(){
        entityMoment.SetControll(true, 1);
    }

    public void SetPlayer(IHealthView ihealthView)
    {
        entityHealth = ihealthView;
        entityHealth.SetMaxHealth(entityInfo.MaxHealth);
        entityHealth.SetHealthQ(HealthQ);
        if (entityInfo.Color != null)
        {
            var m_PlayerColor = new UnityEngine.Color();
            m_PlayerColor.r = (float)entityInfo.Color.R;
            m_PlayerColor.b = (float)entityInfo.Color.B;
            m_PlayerColor.g = (float)entityInfo.Color.G;
            Debug.Log("Color" + entityInfo.Color);
            m_ColoredPlayerText = "<color=#" + ColorUtility.ToHtmlStringRGB(m_PlayerColor) + ">PLAYER " + m_PlayerNumber + "</color>";
            MeshRenderer[] renderers = m_Instance.GetComponentsInChildren<MeshRenderer>();

            for (int i = 0; i < renderers.Length; i++)
            {
                renderers[i].material.color = m_PlayerColor;
            }
        }
    }

    public void Reset()
    {
        //m_Instance.transform.position = m_SpawnPoint.position;
        //m_Instance.transform.rotation = m_SpawnPoint.rotation;

        m_Instance.SetActive(false);
        m_Instance.SetActive(true);
    }

    public void Destroy()
    {
        entityMoment.OnDeath();
    }

    public void Start()
    {
        m_Instance.SetActive(true);
    }

    public void Stop()
    {
        m_Instance.SetActive(false);
    }

    /*
    void createEntityManager()
    {
        var f = new CallFuncInfo();
        if (CreateEntityManagerQueue.TryDequeue(out f))
        {
            var t_entityInfo = f.Param[0].Unpack<Character>();
            var t = util.PraseTransform(f.FromPos);
            switch (t_entityInfo.CharacterType)
            {
                case "Shell":
                    var shell_Instance = Instantiate(m_entityPrefab["Shell"], t.Item1, t.Item2) as GameObject;
                    var shell = new EntityManager(t_entityInfo, shell_Instance, shell_Instance.GetComponent<ShellMovement>());
                    IdMapEntityManager.Add(t_entityInfo.Uuid, shell);
                    break;
                case "Player":
                    var player_Instance = Instantiate(m_entityPrefab["Tank"], t.Item1, t.Item2) as GameObject;

                    var player = new EntityManager(t_entityInfo, player_Instance, player_Instance.GetComponent<TankMovement>());
                    player.SetPlayer(player_Instance.GetComponent<TankMovement>());
                    foreach (KeyValuePair<long, Character> item in m_UserInfo.OwnCharacter)
                    {
                        if (item.Key == t_entityInfo.Uuid)
                        {
                            player.SetMainPlayer();
                            mainPlayer = player;
                            IsPlayerCreated = true;
                            Client.SyncPos(m_UserInfo.Uuid);
                            m_CameraControl.centerTarget = player.m_Instance.transform;
                            break;
                        }
                    }
                    m_Players.Add(player);
                    IdMapEntityManager.Add(t_entityInfo.Uuid, player);
                    break;
                case "Enemy":
                    var enemy_Instance = Instantiate(m_entityPrefab["Tank"], t.Item1, t.Item2) as GameObject;
                    var enemy = new EntityManager(t_entityInfo, enemy_Instance, enemy_Instance.GetComponent<TankMovement>());
                    enemy.SetPlayer(enemy_Instance.GetComponent<TankMovement>());
                    m_Players.Add(enemy);
                    IdMapEntityManager.Add(t_entityInfo.Uuid, enemy);
                    break;
                default:
                    Debug.Log("No such entity type " + t_entityInfo.CharacterType);
                    break;
            }
        }
    }
    */
}
