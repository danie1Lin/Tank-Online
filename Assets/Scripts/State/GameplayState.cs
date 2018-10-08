using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;

public class GameplayState : StateBase {
    GameRpc game;
    EntityManager EM;
    Task<bool> Isconnected;
    private void Awake()
    {
        GM = GameManager.Instance;
        game = GameRpc.Instance;
        if (GM.gameServerInfo == null) GM.ChangeScence((int)Msg.SessionInfo.Types.SessionState.NoSession, "");
        Isconnected = game.ConnectServer(GM.gameServerInfo, GM.metadata);

    }
    private async void Start()
    {
        EM = EntityManager.instance;
        EM.gameFrameQ = GameRpc.GameFrameQ;
        EM.InputQ = GameRpc.InputQ;
        state = Msg.SessionInfo.Types.SessionState.OnStart;
        PreStart();
        EM.enabled = true;
        gameStart();
    }

    async void gameStart(){
        if (await Isconnected)
        {
            game.GetGameFrame();
            game.Input();
        }
    }

    
}
