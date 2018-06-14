using System;
using UnityEngine;
using Msg;
using System.Collections.Concurrent;



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
}
