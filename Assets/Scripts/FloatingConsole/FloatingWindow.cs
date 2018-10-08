using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
public class FloatingWindow : MonoBehaviour, IDragHandler
{
    public GameObject m_window;
    // Use this for initialization
    void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    
    void IDragHandler.OnDrag(PointerEventData d)
    {
        m_window.transform.position = d.position;
    }
}
