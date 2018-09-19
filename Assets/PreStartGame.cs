using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PreStartGame : StateBase {

	// Use this for initialization
	void Start () {
        state = GameState.PRESTART;
        PreStart();
	}
	
    
	// Update is called once per frame
	void Update () {
		
	}

    public override void OnLoadState(){
        Debug.Log("New onLoadState");
        base.OnLoadState();
    }

    public override void OnNextState(){
        Debug.Log("New onNextSate");
        base.OnNextState();
    }

    public void OnPressStartButton(){
        SceneManager.LoadScene("Login");
    }

    void LoadCookie(){

    }

    void CheckCookie(){

    }

    void LoadDataOnServer(){

    }

    void ConnectingServer(){

    }
    
}
