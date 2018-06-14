using UnityEngine;
using UnityEngine.UI;
using Google.Protobuf.WellKnownTypes;
public class TankShooting : MonoBehaviour
{
    public int m_PlayerNumber = 1;       
    public Rigidbody m_Shell;            
   
    public Slider m_AimSlider;           
    public AudioSource m_ShootingAudio;  
    public AudioClip m_ChargingClip;     
    public AudioClip m_FireClip;         
    public float m_MinLaunchForce = 15f; 
    public float m_MaxLaunchForce = 30f; 
    public float m_MaxChargeTime = 0.75f;
	public GameManager gm;


	private Transform m_FireTransform; 

    private string m_FireButton;         
    private float m_CurrentLaunchForce;  
    private float m_ChargeSpeed;         
    private bool m_Fired;                


    private void OnEnable()
    {
        m_CurrentLaunchForce = m_MinLaunchForce;
        m_AimSlider.value = m_MinLaunchForce;
		var obj = GameObject.Find("GameManager");
		gm = obj.GetComponent<GameManager> ();
    }


    private void Start()
    {
        m_FireButton = "Fire" + m_PlayerNumber;
        m_ChargeSpeed = (m_MaxLaunchForce - m_MinLaunchForce) / m_MaxChargeTime;

		m_Fired = false;
    }

    private void Update()
    {
		//press
		// hold
		//release
		//or exceed maximun
		m_AimSlider.value = m_MinLaunchForce;
		if (m_CurrentLaunchForce >= m_MaxLaunchForce && !m_Fired) {
			m_CurrentLaunchForce = m_MaxLaunchForce;
			Fire ();
		} else if (Input.GetButtonDown (m_FireButton)) {
			m_Fired = false;
			m_CurrentLaunchForce = m_MinLaunchForce;
			m_ShootingAudio.clip = m_ChargingClip;
			m_ShootingAudio.Play ();
		} else if (Input.GetButton (m_FireButton) && !m_Fired) {
			m_CurrentLaunchForce += m_ChargeSpeed * Time.deltaTime;
			m_AimSlider.value = m_CurrentLaunchForce;
		} else if (Input.GetButtonUp (m_FireButton) && !m_Fired) {
			Fire ();
		}
        // Track the current state of the fire button and make decisions based on the current launch force.
    }


    private void Fire()
    {
		m_Fired = true;
		Msg.CallFuncInfo F = new Msg.CallFuncInfo ();
		F.Func = "Entity";
		F.TargetId = gm.mainPlayer.entityInfo.Uuid;
		F.TimeStamp = util.GetTimeStamp ();
		Msg.CallFuncInfo f = new Msg.CallFuncInfo ();
		f.Func = "Shoot";
		f.Value = m_CurrentLaunchForce;
		F.Param.Add(Any.Pack(f));
		gm.OutFuncQueue.Enqueue (F);

		m_CurrentLaunchForce = m_MinLaunchForce;
    }

	public void Shoot(){
		m_ShootingAudio.clip = m_FireClip;
		m_ShootingAudio.Play ();
		Rigidbody shellInstance =  Instantiate(m_Shell, m_FireTransform.position, m_FireTransform.rotation ) as Rigidbody;
		// Instantiate and launch the shell.
		//shellInstance.velocity = m_CurrentLaunchForce * m_FireTransform.forward;
	}


}