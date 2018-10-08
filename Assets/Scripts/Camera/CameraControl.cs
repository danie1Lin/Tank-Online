using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityStandardAssets.CrossPlatformInput;
public class CameraControl : MonoBehaviour
{
    public float m_DampTime = 0.2f;                 
    public float m_ScreenEdgeBuffer = 100f;           
    public float m_MinSize = 6.5f;                  
    [HideInInspector]
    public List<Transform> m_Targets;
    public Transform centerTarget;
    public GameObject playerFace;
    private Camera m_Camera;                        
    private float m_ZoomSpeed;                      
    private Vector3 m_MoveVelocity;                 


    private GameObject target;

    public float distanceBetweenTarget;

    public float m_CameraHeight;

    private Quaternion m_Q;
    private Vector2 v2;
    private Vector2 preV2;
    public bool IsTurningEnd;
    public float angleScalar;
    public float max_VisionDergee;
    public float min_VisionDegree;
    private void Awake()
    {
        m_Camera = GetComponentInChildren<Camera>();
        m_Targets = new List<Transform>();
        enabled = false;
        v2= new Vector2();
        preV2 = new Vector2();
        IsTurningEnd = true;
    }

    private void Start()
    {

    }

    private void FixedUpdate()
    {
        Move();
        //Zoom();
    }

    private void OnEnable()
    {
        target = EntityManager.instance.MainCharacter.gameObject;
        playerFace = target.GetComponent<Entity>().GetFace();

    }

    public void CharacterMoving(){

    }

    public void Turning(){
        IsTurningEnd = true;
    }

    private void Move()
    {
        //Debug.Log("Get x" + CrossPlatformInputManager.GetAxis("Mouse X") + ",y" + CrossPlatformInputManager.GetAxis("Mouse Y"));
        //Debug.Log("x raw" + CrossPlatformInputManager.GetAxis("Mouse X") + ",y raw" + CrossPlatformInputManager.GetAxis("Mouse Y"));

        var a = new Vector2(-CrossPlatformInputManager.GetAxis("Mouse X"), -CrossPlatformInputManager.GetAxis("Mouse Y"));
        if (IsTurningEnd) {
            IsTurningEnd = false;
            preV2 = v2;
            //v2 = preV2 + a;
        } else {
            v2 = preV2 + a;
        }
        if (v2.y * angleScalar > max_VisionDergee){
            v2.y = max_VisionDergee / angleScalar;
        }
        else if (v2.y *angleScalar < min_VisionDegree ){
            v2.y = min_VisionDegree / angleScalar;
        }
        /*
        if (a.magnitude != 0){

        } else {
            //v3 = target.transform.forward;
        }
        */
        var offset = Vector3.Normalize(new Vector3 (Mathf.Cos(v2.x * angleScalar * Mathf.Deg2Rad),  Mathf.Sin(v2.y * angleScalar * ((max_VisionDergee-min_VisionDegree)/180) * Mathf.Deg2Rad), Mathf.Sin(v2.x * angleScalar * Mathf.Deg2Rad)))*distanceBetweenTarget;
        transform.position = target.transform.position - offset;
        transform.LookAt(target.transform);

        if (playerFace != null){
            playerFace.transform.rotation = Quaternion.LookRotation(target.transform.position-(transform.position + new Vector3(0, offset.y, 0)));
        }



        /*
        turnXY += new Vector3();
        target = EntityManager.instance.MainCharacter.gameObject;
        m_CameraToTarget = target.transform.forward * distanceBetweenTarget + new Vector3(0, -m_CameraHeight, 0);
        m_DesiredPosition = target.transform.position - m_CameraToTarget;


        transform.position = Vector3.SmoothDamp(transform.position, m_DesiredPosition, ref m_MoveVelocity, m_DampTime);
        transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(m_CameraToTarget), 1f);
        */
    }



}