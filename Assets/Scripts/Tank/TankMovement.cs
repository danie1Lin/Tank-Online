using UnityEngine;
using System.Collections.Concurrent;
using System;
using UnityEngine.UI;
using Google.Protobuf.WellKnownTypes;

public interface IEntity
{
    void SetMoveQ(ConcurrentQueue<UnityEngine.Vector3> CV, ConcurrentQueue<UnityEngine.Quaternion> CQ);
    void SetControll(bool controll, int playerNumber);
    void OnDeath();
}

public interface IHealthView
{
    void SetHealthQ(ConcurrentQueue<float> HealthQ);
    void SetMaxHealth(float blood);
}
public class TankMovement : MonoBehaviour , IEntity, IHealthView
{
    public float m_StartingHealth = 100f;
    public Slider m_Slider;
    public Image m_FillImage;
    public Color m_FullHealthColor = Color.green;
    public Color m_ZeroHealthColor = Color.red;
    public GameObject m_ExplosionPrefab;
    private AudioSource m_ExplosionAudio;
    private ParticleSystem m_ExplosionParticles;
    private float m_CurrentHealth;
    private bool m_Dead;

    public int m_PlayerNumber = 1;         
    public float m_Speed = 12f;            
    public float m_TurnSpeed = 180f;       
    public AudioSource m_MovementAudio;    
    public AudioClip m_EngineIdling;       
    public AudioClip m_EngineDriving;      
    public float m_PitchRange = 0.2f;
	public GameManager gm;
	public EntityManager em;
    public bool controllable;
	public float step;
	public Msg.Input m_input;
    public Rigidbody m_Shell;

    public Slider m_AimSlider;
    public AudioSource m_ShootingAudio;
    public AudioClip m_ChargingClip;
    public AudioClip m_FireClip;
    public float m_MinLaunchForce = 15f;
    public float m_MaxLaunchForce = 30f;
    public float m_MaxChargeTime = 0.75f;

    public ConcurrentQueue<Quaternion> CQuaternion;
    public ConcurrentQueue<Vector3> CPosition;
    public ConcurrentQueue<float> CHealth;

    private Transform m_FireTransform;

    private string m_FireButton;
    private float m_CurrentLaunchForce;
    private float m_ChargeSpeed;
    private bool m_Fired;

    private Quaternion m_q;
	private Vector3 m_p;
	private Vector3 t_p;
	private Quaternion t_q;
    private string m_MovementAxisName;     
    private string m_TurnAxisName;         
    private Rigidbody m_Rigidbody;         
    private float m_MovementInputValue;
    private float m_TurnInputValue;   
	private float Last_MovementInputValue;
	private float Last_TurnInputValue; 
    private float m_OriginalPitch;
    private bool isDead;
    void IHealthView.SetHealthQ(ConcurrentQueue<float> HealthQ)
    {
        CHealth = HealthQ;
    }

    void IEntity.SetMoveQ(ConcurrentQueue<Vector3> CV, ConcurrentQueue<Quaternion> CQ)
    {
        CPosition = CV;
        CQuaternion = CQ;
    }
    void IHealthView.SetMaxHealth(float blood)
    {
        m_StartingHealth = blood;
    }

    void IEntity.SetControll(bool controll, int playerNumber)
    {
        controllable = controll;
        m_PlayerNumber = playerNumber;
    }
    void IEntity.OnDeath()
    {
        isDead = true;
    }
    private void Awake()
    {
        m_ExplosionParticles = Instantiate(m_ExplosionPrefab).GetComponent<ParticleSystem>();
        m_ExplosionAudio = m_ExplosionParticles.GetComponent<AudioSource>();

        m_ExplosionParticles.gameObject.SetActive(false);
        //Debug.Log(GetChildRendererBounds (gameObject));
        m_Rigidbody = GetComponent<Rigidbody>();
		var obj = GameObject.Find("GameManager");
		gm = obj.GetComponent<GameManager> ();
		m_input = new Msg.Input ();
		m_input.UserId = gm.m_UserInfo.Uuid;

		step = 10f;
		m_q = transform.rotation;
		m_p = transform.position;

        CQuaternion = new ConcurrentQueue<Quaternion>() ;
        CPosition = new ConcurrentQueue<Vector3> ();
        CHealth = new ConcurrentQueue<float>();
        isDead = false;
}


    private void OnEnable ()
    {
        m_CurrentHealth = m_StartingHealth;
        m_Dead = false;
        SetHealthUI();
        m_Rigidbody.isKinematic = false;
        m_MovementInputValue = 0f;
        m_TurnInputValue = 0f;

        m_CurrentLaunchForce = m_MinLaunchForce;
        m_AimSlider.value = m_MinLaunchForce;
    }
    private void OnDisable ()
    {
        m_Rigidbody.isKinematic = true;
    }


    private void Start()
    {
        m_MovementAxisName = "Vertical" + m_PlayerNumber;
        m_TurnAxisName = "Horizontal" + m_PlayerNumber;

        m_OriginalPitch = m_MovementAudio.pitch;

        m_FireButton = "Fire" + m_PlayerNumber;
        m_ChargeSpeed = (m_MaxLaunchForce - m_MinLaunchForce) / m_MaxChargeTime;

        m_Fired = false;
    }
    

	private void Update()
    {
        // Move and turn the tank.
        EngineAudio ();
        float health;
        if (CHealth.TryDequeue(out health))
        {
            m_CurrentHealth = health;
            SetHealthUI();
        }
        if (controllable)
        {
            m_AimSlider.value = m_MinLaunchForce;
            if (m_CurrentLaunchForce >= m_MaxLaunchForce && !m_Fired)
            {
                m_CurrentLaunchForce = m_MaxLaunchForce;
                Fire();
            }
            else if (Input.GetButtonDown(m_FireButton))
            {
                m_Fired = false;
                m_CurrentLaunchForce = m_MinLaunchForce;
                m_ShootingAudio.clip = m_ChargingClip;
                m_ShootingAudio.Play();
            }
            else if (Input.GetButton(m_FireButton) && !m_Fired)
            {
                m_CurrentLaunchForce += m_ChargeSpeed * Time.deltaTime;
                m_AimSlider.value = m_CurrentLaunchForce;
            }
            else if (Input.GetButtonUp(m_FireButton) && !m_Fired)
            {
                Fire();
            }

            m_MovementInputValue = Input.GetAxis(m_MovementAxisName);
            m_TurnInputValue = Input.GetAxis(m_TurnAxisName);
            // Store the player's input and make sure the audio for the engine is playing.
            if (Last_MovementInputValue != m_MovementInputValue || Last_TurnInputValue != m_TurnInputValue)
            {
                m_input.HMovement = m_TurnInputValue;
                m_input.VMovement = m_MovementInputValue;
                m_input.TimeStamp = util.GetTimeStamp();
                gm.OutInputQueue.Enqueue(m_input);
                //Debug.Log(m_input);
            }
            Last_MovementInputValue = m_MovementInputValue;
            Last_TurnInputValue = m_TurnInputValue;
            //input.TimeStamp = 
            //input.RunningNo = 
        }
		m_Rigidbody.MovePosition( Vector3.Lerp (m_Rigidbody.position, m_p, step*Time.deltaTime));
		m_Rigidbody.MoveRotation( Quaternion.Lerp (m_Rigidbody.rotation, m_q, step*Time.deltaTime));

		//m_Rigidbody.MovePosition(m_p);
		//m_Rigidbody.MoveRotation(m_q);
        if (isDead)
        {

            m_ExplosionParticles.transform.position = transform.position;
            m_ExplosionParticles.gameObject.SetActive(true);
            // Play the particle system of the tank exploding.
            m_ExplosionParticles.Play();
            // Play the tank explosion sound effect.
            m_ExplosionAudio.Play();
            // Turn the tank off.
            gameObject.SetActive(false);

            Destroy(gameObject);
            // Play the effects for the death of the tank and deactivate it.
        }
    }

	private void FixedUpdate(){
		if (CQuaternion.TryDequeue (out t_q)) {
			m_q = t_q;
		}
		if (CPosition.TryDequeue (out t_p)) {
			m_p = t_p;
			//Debug.Log (t_p);
		}
	}

    private void EngineAudio()
    {
        // Play the correct audio clip based on whether or not the tank is moving and what audio is currently playing.
		m_MovementAudio.pitch = UnityEngine.Random.Range (m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
		if (Mathf.Abs (m_TurnInputValue) < 0.1f && Mathf.Abs (m_MovementInputValue) < 0.1f) {
			if (m_MovementAudio.clip == m_EngineDriving) {
				m_MovementAudio.clip = m_EngineIdling;
				m_MovementAudio.pitch =UnityEngine.Random.Range (m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
				m_MovementAudio.Play ();
			}
		} else {
			if (m_MovementAudio.clip == m_EngineIdling) {
				m_MovementAudio.clip = m_EngineDriving;
				m_MovementAudio.Play ();

			}
		}
    }


    private void SelfMove()
    {
        // Adjust the position of the tank based on the player's input.
		Vector3 movement = transform.forward * m_MovementInputValue * m_Speed * Time.deltaTime;
		m_Rigidbody.MovePosition (m_Rigidbody.position + movement);
    }

    private void Turn()
    {
        // Adjust the rotation of the tank based on the player's input.
		float turn = m_TurnInputValue * m_TurnSpeed *Time.deltaTime;

		Quaternion turnRotate = Quaternion.Euler (0f, turn, 0f);
		m_Rigidbody.MoveRotation (m_Rigidbody.rotation * turnRotate);
    }

    private void Fire()
    {
        m_Fired = true;
        Msg.CallFuncInfo F = new Msg.CallFuncInfo();
        F.Func = "Entity";
        F.TargetId = gm.mainPlayer.entityInfo.Uuid;
        F.TimeStamp = util.GetTimeStamp();
        Msg.CallFuncInfo f = new Msg.CallFuncInfo();
        f.Func = "Shoot";
        f.Value = m_CurrentLaunchForce;
        F.Param.Add(Any.Pack(f));
        gm.OutFuncQueue.Enqueue(F);

        m_CurrentLaunchForce = m_MinLaunchForce;
    }

    


    public void Shoot()
    {
        m_ShootingAudio.clip = m_FireClip;
        m_ShootingAudio.Play();
        Rigidbody shellInstance = Instantiate(m_Shell, m_FireTransform.position, m_FireTransform.rotation) as Rigidbody;
        // Instantiate and launch the shell.
        //shellInstance.velocity = m_CurrentLaunchForce * m_FireTransform.forward;
    }

    private void SetHealthUI()
    {
        // Adjust the value and colour of the slider.
        m_Slider.value = m_CurrentHealth;
        m_FillImage.color = Color.Lerp(m_ZeroHealthColor, m_FullHealthColor, m_CurrentHealth / m_StartingHealth);
    }
}