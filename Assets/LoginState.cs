using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoginState : MonoBehaviour {
    public Canvas IndexCanvas;
    public GameObject LoginPanel;
    public Login m_login;
    public bool IsLogin;
    GameManager GM;

    private void Awake()
    {
        GM = GameManager.Instance;
    }
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void OnLogin(){
        
    }


}
