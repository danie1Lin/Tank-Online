using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Threading.Tasks;


public class PreStartGame : StateBase {

    public Button startButton;
    public Slider LoadingProgressBar;
    public Msg.SessionInfo.Types.SessionState NextState;
    public Tuple<string, string,string> cookie;
    public InputField ServerIpInput;
    //const string agentServeAddr = "35.237.171.46:50051";
    public string AgentIp;
    public bool IpGot;
    bool IsLogin;
    
    // Use this for initialization
    void Start () {
        state = Msg.SessionInfo.Types.SessionState.NoSession;
        NextState = Msg.SessionInfo.Types.SessionState.Guest;
        startButton.interactable = false;
        PreStart();
        LoadCookie();
        CheckCookie();
        var s = ConnectingAgentServer();
        LoadDataOnServer();
        ReadyToStart(s);
	}
	
    
	// Update is called once per frame
	void Update () {
		
	}

    public void GetIpFromCache(){
        AgentIp = PlayerPrefs.GetString("Agent Ip", "");
        AgentIp = CheckIpFormat(AgentIp);
        if (AgentIp != ""){
            IpGot = true;
        }
    }

    private string CheckIpFormat(string ip){
        ip = ip.Trim();
        if (!ip.Contains(":")){
            return "";
        }
        Debug.Log("Agent Ip:"+ip);
        return ip;
    }

    public void GetAgentIp(string ip){
        ip = CheckIpFormat(ip);
        if (ip!= ""){
            IpGot = true;
            AgentIp = ip;
        } else {
            GetIpFromCache();
        }
        Debug.Log("Input"+ip);
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
        GM.ChangeScence((int)NextState,"");
    }

    void LoadCookie(){
        cookie = GM.LoadCookie();

    }

    void CheckCookie(){
        if (GM.VerifyCookie(cookie))
        {
            GM.SessionId = cookie.Item1;
            GM.metadata.Add("session-id", GM.SessionId);
            if (cookie.Item3 != "") {
                GM.metadata.Add("uname", cookie.Item3);
            }
        }
    }

    async Task<bool> ConnectingAgentServer(){
        var agent = AgentRpc.Instance;
        while (!IpGot){
            await Task.Delay(100);
        }
        await Task.Delay(100);
        if (!await agent.ConnectServer(AgentIp)){
            return false;
        }
        PlayerPrefs.SetString("Agent Ip", AgentIp);
        await Task.Delay(100);
        agent.GetSession(GM.SessionId);
        await Task.Delay(100);
        Msg.SessionCache cache = agent.GetSessionCache();
        if (cache != null)
        {
            switch (cache.SessionInfo.State)
            {
                case Msg.SessionInfo.Types.SessionState.NoSession:
                    cache.SessionInfo.State = Msg.SessionInfo.Types.SessionState.Guest;
                    break;
                case Msg.SessionInfo.Types.SessionState.Guest:
                    cache.SessionInfo.State = Msg.SessionInfo.Types.SessionState.Guest;
                    break;
                case Msg.SessionInfo.Types.SessionState.UserIdle:
                    break;
                case Msg.SessionInfo.Types.SessionState.UserInRoom:
                    break;
                case Msg.SessionInfo.Types.SessionState.ConnectingGame:
                    break;
                case Msg.SessionInfo.Types.SessionState.AgentServerWaitReconnect:
                    break;
                case Msg.SessionInfo.Types.SessionState.OnStart:
                    break;
                case Msg.SessionInfo.Types.SessionState.Playing:
                    break;
                case Msg.SessionInfo.Types.SessionState.GameServerWaitReconnect:
                    break;
                case Msg.SessionInfo.Types.SessionState.GameOver:
                    break;
            }
            NextState = cache.SessionInfo.State;
            GM.sessionCache = cache;
            if (cache.SessionInfo != null) GM.m_UserInfo = cache.SessionInfo.UserInfo;
            if (cache.GameServerInfo != null) GM.gameServerInfo = cache.GameServerInfo;
        }
        return true;

    }

    void LoadDataOnServer()
    {
        var IsNeedUpdate = false;
        if (IsNeedUpdate) {
            GM.CleanAllCookies();
        }
    }

    async void ReadyToStart(Task<bool> s){
        if (await s) startButton.interactable = true;
    }


}
