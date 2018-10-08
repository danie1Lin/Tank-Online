using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoginState : StateBase {
    public Canvas IndexCanvas;
    public GameObject LoginPanel;
    public Login m_login;
    public bool IsLogin;



    // Use this for initialization
    void Start () {
        state = Msg.SessionInfo.Types.SessionState.Guest;
        PreStart();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

}
