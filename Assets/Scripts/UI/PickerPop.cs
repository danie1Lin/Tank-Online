using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
public class PickerPop : MonoBehaviour {

    public Animation m_popAnim;
    public Toggle m_checkBox;
    public AnimationClip m_popUp;
    public AnimationClip m_pushBack;

	// Use this for initialization
	void Start () {
        m_checkBox.onValueChanged.AddListener((isChecked) => {
            if (isChecked)
            {
                m_popAnim.clip = m_popUp;
                m_popAnim.Play();
            }
            else
            {
                m_popAnim.clip = m_pushBack;
                m_popAnim.Play();
            }
        });

	}

	
	// Update is called once per frame
	void Update () {


	}
}
