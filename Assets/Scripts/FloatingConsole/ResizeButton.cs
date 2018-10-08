using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
public class ResizeButton : MonoBehaviour,IDragHandler {
    public GameObject m_resizeButton;
    public GameObject m_window;
    public Canvas m_canvas;
    void IDragHandler.OnDrag(PointerEventData eventData)
    {
        m_resizeButton.transform.position = eventData.position;
        var ResizeButtonRect = m_resizeButton.GetComponent<RectTransform>();
        var rect = m_window.GetComponent<RectTransform>();
        
        var realPoint = new Vector2();
        RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, eventData.position, eventData.pressEventCamera, out realPoint);
        var size = new Vector2(x: (realPoint.x - ResizeButtonRect.sizeDelta.x/2- (rect.pivot.x)), y: ( realPoint.y - ResizeButtonRect.sizeDelta.y/2-(rect.pivot.y) ));
        rect.sizeDelta = size;
    }
        // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    
    
}
