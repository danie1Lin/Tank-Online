using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatingUserName : MonoBehaviour {
    public GameObject m_camera;
    public GameObject m_text3D;
    public GameObject m_tank;
    public Vector3 m_offset;
	// Use this for initialization
	void Start () {
        m_camera = GameObject.Find("CameraRig");
    }
	
	// Update is called once per frame
	void Update () {
        m_text3D.transform.position = m_tank.transform.position + m_offset;
        m_text3D.transform.rotation = m_camera.transform.rotation;
	}
}
