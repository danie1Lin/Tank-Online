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

	// Use this for initialization
	public string password;

	void Start () {
		LoginButton.onClick.AddListener (LoginClick);
		RegisterButton.onClick.AddListener (RegistClick);
		//password = "";
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void LoginClick(){
		string u = UserNameInput.text;
		string pswd = PasswordInput.text;
		Gm.IsLogin = Gm.Client.Login (u, pswd);
	}
	public void RegistClick(){
		string u = UserNameInput.text;
		string pswd = PasswordInput.text;
		Gm.Client.CreateAccount(u, pswd, "");
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

