using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Msg;
using System.Threading;
public class Login : MonoBehaviour {
	public InputField UserNameInput;
	public InputField PasswordInput;
	public Button RegisterButton;
	public Button LoginButton;
	public GameManager Gm;

    public AgentRpc agentServer;
	// Use this for initialization
	public string password;
    //public event 


	void Start () {
		
        LoginButton.interactable = false;
        RegisterButton.interactable = false;
		//password = "";
	}

    public void Enable()
    {
        agentServer = AgentRpc.instance;
        LoginButton.interactable = true;
        RegisterButton.interactable = true;
        LoginButton.onClick.AddListener(LoginClick);
        RegisterButton.onClick.AddListener(RegistClick);
    }
    // Update is called once per frame
    void Update () {
	}

	public void LoginClick(){
		string u = UserNameInput.text;
		string pswd = PasswordInput.text;
		var userInfo = agentServer.Login (u, pswd);
        if( userInfo != null ){
            Gm.IsLogin = true;
            Gm.m_UserInfo = userInfo;
        }
	}
	public void RegistClick(){
		string u = UserNameInput.text;
		string pswd = PasswordInput.text;
		agentServer.RegistAccount(u, pswd, "");
	}


	public void HidePassword(string s){
		Debug.Log (s[s.Length-1]);
		password.Insert(password.Length-1, s.Substring (s.Length - 1, 1));
		string HideText = "";
		for (int i = 0; i < password.Length; i++) {
			HideText += "*";
		}
		PasswordInput.text = HideText; 
		/*
		password += PasswordInput.text[PasswordInput.text.Length-1];
		string HideText = "";
		for (int i = 0; i < password.Length ; i++) {
			HideText += "*";
		}
		PasswordInput.text = HideText;
		*/
		Debug.Log (password);
	}
}

