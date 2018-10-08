using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public delegate void OnCreateRoomHandler(Msg.RoomSetting setting);
public delegate void OnEnterRoomHandler(long uuid);

public class MatchGameMenu : StateBase {
    public AgentRpc agent;
    public RoomManager roomManager;
    public SelectRoom roomSelector;
    private void Start()
    {
        
        state = Msg.SessionInfo.Types.SessionState.UserIdle;
        PreStart();
        agent = AgentRpc.Instance;
        roomManager.onCreateRoom += CreateRoom;

        roomSelector.RoomListQueue = AgentRpc.RoomListQueue;
        roomManager.enabled = true;
        roomSelector.onEnterRoom += OnEnterRoom;
        roomSelector.enabled = true;
        agent.UpdateRoomList();

    }

    public void CreateRoom(Msg.RoomSetting setting){
        if (agent.CreatRoom(setting)) {
            //Enter next Scene
            GM.ChangeScence((int)Msg.SessionInfo.Types.SessionState.UserInRoom,"");
        }
    }

    public void OnEnterRoom(long uuid)
    {
        if (agent.EnterRoom(uuid))
        {
            GM.ChangeScence((int)Msg.SessionInfo.Types.SessionState.UserInRoom, "");
        }
    }
}
