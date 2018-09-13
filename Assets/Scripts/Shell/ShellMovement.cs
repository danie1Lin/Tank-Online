using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Collections.Concurrent;



public class ShellMovement : MonoBehaviour , IEntity {


    public LayerMask m_TankMask;
    public GameObject m_ExplosionPrefab;

    public AudioSource m_ExplosionAudio;
    public float m_MaxDamage = 100f;
    public float m_ExplosionForce = 1000f;
    public float m_MaxLifeTime = 2f;
    public float m_ExplosionRadius = 5f;

    public ConcurrentQueue<Quaternion> CQuaternion;
    public ConcurrentQueue<Vector3> CPosition;

    public float step;
	public Msg.Input m_input;
	private Quaternion m_q;
	private Vector3 m_p;
	private Vector3 t_p;
	private Quaternion t_q;
	private Rigidbody m_Rigidbody;
    // Use this for initialization
    private ParticleSystem m_ExplosionParticles;
    private bool isDead;
    
    void IEntity.OnDeath()
    {
        isDead = true;
    }

    void IEntity.SetControll(bool controll, int playerNumber)
    {

    }

    void IEntity.SetMoveQ(System.Collections.Concurrent.ConcurrentQueue<Vector3> CV, System.Collections.Concurrent.ConcurrentQueue<Quaternion> CQ)
    {
        CQuaternion = CQ;
        CPosition = CV;
    }

    private void Awake()
    {
        isDead = false;
        CPosition = new ConcurrentQueue<Vector3>();
        CQuaternion = new ConcurrentQueue<Quaternion>();
        var ExplosionParticles = Instantiate(m_ExplosionPrefab, transform);
        m_ExplosionParticles = ExplosionParticles.GetComponent<ParticleSystem>();
    }


    void Start () {

		m_Rigidbody = GetComponent<Rigidbody>();
		step = 10f;
		m_q = transform.rotation;
		m_p = transform.position;

	}
	
	// Update is called once per frame
	void Update () {
		m_Rigidbody.MovePosition( Vector3.Lerp (m_Rigidbody.position, m_p, step*Time.deltaTime));
		m_Rigidbody.MoveRotation( Quaternion.Lerp (m_Rigidbody.rotation, m_q, step*Time.deltaTime));
        if (isDead)
        {
            StartCoroutine(ShellExplode());
        }
	}

    IEnumerator ShellExplode()
    {
        WaitForSeconds a = new WaitForSeconds(seconds: m_ExplosionParticles.main.duration);
        m_ExplosionAudio.Play();
        m_ExplosionParticles.Play();
        yield return a;
        Destroy(m_ExplosionParticles);
        Destroy(gameObject);
    }

	private void FixedUpdate(){
		if (CQuaternion.TryDequeue (out t_q)) {
			m_q = t_q;
		}
		if (CPosition.TryDequeue (out t_p)) {
			m_p = t_p;
			//Debug.Log ("Shell moving"+t_p);
		}
	}
}
