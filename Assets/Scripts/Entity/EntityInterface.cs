using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using System.Collections.Concurrent;
public interface IMove
{
    void Move(Vector3 pos,Quaternion q,Vector3 vel);
}

public interface IAppearance
{
    void SetupAllColor(Color32 color);
    void SetupColor(string instanceComponent, Color32 color);
}

public abstract class MoveBase : MonoBehaviour {
    public float m_qStep;
    public float m_pStep;
    public bool m_Interpolation;
    Vector3 Vel;
    Quaternion Orientation;
    Vector3 NewPos;
    Vector3 TargetPos;
    private bool IsMainPlayer;
    public bool IsSyncToServer;
    public ConcurrentQueue<Msg.Input> InputQ;
    public float m_inputThres;
    public Entity entity;

    private void Awake()
    {
        enabled = false;
    }
    private void Start()
    {
        InputQ = EntityManager.instance.InputQ;
        entity = gameObject.GetComponent<Entity>();
    }
    public virtual void Move(Vector3 pos, Quaternion q, Vector3 vel)
    {
        if (!IsMainPlayer)
        {
            Vel = vel;
            TargetPos = pos;
            NewPos = Vector3.Lerp(pos, gameObject.transform.position, 0.5f);
            gameObject.transform.position = NewPos;
            MoveAnimation();
        }
    }

    public virtual void MoveAnimation()
    {
        //Adjust animation;
    }

    public virtual void Input()
    {
        if (IsMainPlayer)
        {
            var h = CrossPlatformInputManager.GetAxisRaw("Horizontal");
            var v = CrossPlatformInputManager.GetAxisRaw("Vertical");
            var axis = new Vector3(h, 0, v);
            if (axis.magnitude > m_inputThres)
            {
                gameObject.transform.rotation = Quaternion.AngleAxis(Mathf.Atan2(-h, v) * Mathf.Rad2Deg, new Vector3(0f, -1f, 0f));
                //gameObject.transform.Translate(gameObject.transform.forward *axis.magnitude* Time.deltaTime * m_pStep);
                GetComponent<Rigidbody>().velocity = axis * m_pStep;
                //Debug.Log((v * m_qStep).ToString()+"   "+ (h * Time.deltaTime * m_pStep).ToString());
                //entity.state.Speed = new Msg.Vector3 { X = (axis * m_pStep).x, Y = (axis * m_pStep).y, Z = (axis * m_pStep).z };
            }
        }
        entity.state.Transform = new Msg.Transform
        {
            Position = new Msg.Vector3
            {
                X = gameObject.transform.position.x,
                Y = gameObject.transform.position.y,
                Z = gameObject.transform.position.z
            },
            Rotation = new Msg.Quaternion
            {
                X = gameObject.transform.rotation.x,
                Y = gameObject.transform.rotation.y,
                Z = gameObject.transform.rotation.z,
                W = gameObject.transform.rotation.w
            }
        };
        entity.state.Speed = new Msg.Vector3 { X = (GetComponent<Rigidbody>().velocity).x, Y = (GetComponent<Rigidbody>().velocity).y, Z = (GetComponent<Rigidbody>().velocity).z };
    }
    private void FixedUpdate()
    {
    
    }

    private void Update()
    {
        if (IsSyncToServer)
        {
            Input();
        }
        else
        {
            SyncFromServer();
        }
    }
    public virtual void SyncFromServer()
    {
        if (m_Interpolation)
        {
        }
        else
        {
            gameObject.transform.position = Vector3.Lerp(new Vector3 { x = entity.state.Transform.Position.X, y = entity.state.Transform.Position.Y, z = entity.state.Transform.Position.Z }, gameObject.transform.position, 0.5f);
            gameObject.transform.rotation = Quaternion.Lerp(new Quaternion { x = entity.state.Transform.Rotation.X, y = entity.state.Transform.Rotation.Y, z = entity.state.Transform.Rotation.Z, w = entity.state.Transform.Rotation.W}, gameObject.transform.rotation, 0.5f);
            gameObject.GetComponent<Rigidbody>().velocity = new Vector3 { x = entity.state.Speed.X,y= entity.state.Speed.Y,z= entity.state.Speed.Z };
            //Debug.Log("SyncFromeServer" + entity.state);
        }
    }
    public void SetAsMainPlayer(bool isMainPlayer)
    {
        
        this.IsMainPlayer = isMainPlayer;
        this.IsSyncToServer = isMainPlayer;
        GetComponent<Rigidbody>().isKinematic = !isMainPlayer;
    }
}

//public abstract class PlayerInteract

public abstract class Appearance : MonoBehaviour
{

    public GameObject m_Instance;

    // Use this for initialization
    void Awake()
    {
        m_Instance = gameObject;
    }

    // Update is called once per frame
    public virtual void Update()
    {

    }

    public virtual void SetupAllColor(Color32 color)
    {
        //Debug.Log("Color" + color);
        MeshRenderer[] renderers = m_Instance.GetComponentsInChildren<MeshRenderer>();
        for (int i = 0; i < renderers.Length; i++)
        {
            //Debug.Log("render" + renderers[i].name);
            var t_color = new Color { r = (float)color.r / 255, b = (float)color.b / 255, g = (float)color.g / 255 };
            renderers[i].material.color = t_color;
        }

    }

    public virtual void SetupColor(string instanceComponent, Color32 color)
    {

    }

    
}

public abstract class AttackBase : MonoBehaviour
{

    public virtual void Attack(float Value,Vector3 vector)
    {
        Debug.Log("Attack: " + Value +" , "+ vector);
    }
}

public abstract class InteractionAcceptor : MonoBehaviour
{

    public Entity entity;
    private void Start()
    {
        
        entity = gameObject.GetComponent<Entity>();

    }
    public void Accept(Msg.Interaction interact)
    {
        //接收自其他客戶端
        if (entity.IsSyncToServer)
        {
            switch (interact.Type)
            {
                case "Harm":
                    //gameObject.GetComponent<Entity>().state;
                    Harm(interact);
                    break;
                case "Force":
                    Force(interact);
                    break;
                case "Use":
                    Use(interact);
                    break;
                case "Torque":
                    Torque(interact);
                    break;

            }
        }
        else
        {
            interact.ToEntityId = gameObject.GetComponent<Entity>().state.Uuid;
            EntityManager.instance.t_Input.Interaction.Add(interact.Clone());
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        /*
        if (entity.IsSyncToServer) //To Server
        {
            if (collision.collider.gameObject.layer == LayerMask.NameToLayer("Applyer") && collision.collider.gameObject.GetComponent<Entity>().IsSyncToServer)
            {
                Debug.Log("Accept from Client ! : " + collision);
                var interaction = collision.collider.gameObject.GetComponent<Entity>().m_applyer.Collide(gameObject);
                if (interaction == null) return;
                
                Accept(interaction);
            }
            
        } else //From Server
        {
            if (collision.collider.gameObject.layer == LayerMask.NameToLayer("Applyer") && collision.collider.gameObject.GetComponent<Entity>().IsSyncToServer)
            {
                Debug.Log("Accept From Server ! : " + collision);
                var interaction = collision.collider.gameObject.GetComponent<Entity>().m_applyer.Collide(gameObject);
                if (interaction == null) return;
                interaction.ToEntityId = gameObject.GetComponent<Entity>().state.Uuid;
                EntityManager.instance.t_Input.Interaction.Add(interaction.Clone());
            }
        }
        */
    }
    public virtual void Harm(Msg.Interaction interact)
    {
        entity.state.Health -= interact.Direction.X;
    }

    public virtual void Force(Msg.Interaction interact)
    {

    }

    public virtual void Use(Msg.Interaction interact)
    {

    }

    public virtual void Torque(Msg.Interaction interact)
    {

    }

}

public abstract class InteractionApplyer : MonoBehaviour
{
    public Msg.Interaction interact;
    public Entity entity;
    public float explsionRadius;
    private void Start()
    {
        entity = gameObject.GetComponent<Entity>();
        interact = new Msg.Interaction
        {
            Type = "Harm",
            FromEntityId = entity.state.Uuid,
        };
    }
    public Msg.Interaction Collide(GameObject go)
    {
        Debug.Log("Collide");
        if (entity.IsSyncToServer)
        {
            interact.ApplyPoint = util.PosUnityToMsg(gameObject.transform.position);
            EntityManager.instance.t_Input.DestroyEntity.Add(entity.state.Uuid);
            interact.Direction = new Msg.Vector3();
            interact.Direction.X = 5 - (go.transform.position - gameObject.transform.position).magnitude;
            if (interact.Direction.X <= 0)
            {
                return null;
            }
            return interact.Clone();
        }
        else
        {
            return null;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Trigger");
    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("OnCollisionEnter");
        var colliders = Physics.OverlapSphere(transform.position, 5f);
        foreach (var collider in colliders)
        {
            if (collider.gameObject.layer == LayerMask.NameToLayer("Players"))
            {
                var interaction = Collide(collider.gameObject);
                if (interaction == null) continue;
                collider.GetComponent<Entity>().m_acceptor.Accept(interaction);

                Rigidbody rb = collider.GetComponent<Rigidbody>();
                rb.AddExplosionForce(1000F, transform.position, 50, 300.0F);
            }
        }
        DestroyOnCollide();
        //Destroy(gameObject);
    }

    private void DestroyOnCollide()
    {
        EntityManager.instance.DestoryEntityByClient(GetComponent<Entity>().state.Uuid);
    }
}


public abstract class EntityHealth: MonoBehaviour
{

}