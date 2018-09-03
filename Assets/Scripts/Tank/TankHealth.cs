using UnityEngine;
using UnityEngine.UI;

public class TankHealth : EntityHealth
{
    public float m_StartingHealth;          
    public Slider m_Slider;                        
    public Image m_FillImage;                      
    public Color m_FullHealthColor = Color.green;  
    public Color m_ZeroHealthColor = Color.red;    
    public GameObject m_ExplosionPrefab;


    private AudioSource m_ExplosionAudio;          
    private ParticleSystem m_ExplosionParticles;   
    private float m_CurrentHealth;  
    private bool m_Dead;            


    private void Awake()
    {
        m_ExplosionParticles = Instantiate(m_ExplosionPrefab).GetComponent<ParticleSystem>();
        m_ExplosionAudio = m_ExplosionParticles.GetComponent<AudioSource>();

        m_ExplosionParticles.gameObject.SetActive(false);
        enabled = false;
    }


    private void OnEnable()
    {
        m_StartingHealth = gameObject.GetComponent<Entity>().character.MaxHealth;
        m_CurrentHealth = m_StartingHealth;
        m_Dead = false;
        SetHealthUI();
    }

    private void Update()
    {
        m_CurrentHealth = gameObject.GetComponent<Entity>().state.Health;
        if (gameObject.GetComponent<Entity>().IsSyncToServer)
        {
            if (m_CurrentHealth <= 0)
            {
                OnDeath();
            }
        }
        
        SetHealthUI();
    }

    private void SetHealthUI()
    {
        // Adjust the value and colour of the slider.
		m_Slider.value = m_CurrentHealth;
		m_FillImage.color = Color.Lerp (m_ZeroHealthColor, m_FullHealthColor, m_CurrentHealth / m_StartingHealth);
    }


    public void OnDeath()
    {

        EntityManager.instance.DestoryEntityByClient(gameObject.GetComponent<Entity>().state.Uuid);
        // Play the effects for the death of the tank and deactivate it.
    }

    private void OnDestroy()
    {
        m_Dead = true;
        var e = Instantiate(m_ExplosionParticles, transform.position, transform.rotation);

        e.gameObject.SetActive(true);

        // Play the particle system of the tank exploding.
        e.Play();

        // Play the tank explosion sound effect.
        e.Play();
        Destroy(e, e.duration);
    }
}