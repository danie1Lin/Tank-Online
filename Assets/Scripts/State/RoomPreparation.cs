using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RoomPreparation : StateBase {
    public AgentRpc agent;
    public RoomPrepare roomPrepare;
    public Text ReadyButtonText;
    // Use this for initialization
    private void Awake()
    {
        agent = AgentRpc.Instance;
        roomPrepare.onReadyGame += ReadyToEnterGameplay;
        roomPrepare.onChangeCharacterColor += agent.SettingCharacter;
        roomPrepare.RoomContentQueue = AgentRpc.RoomContentQueue;
    }
    void Start () {
        state = Msg.SessionInfo.Types.SessionState.UserInRoom;
        PreStart();

        roomPrepare.enabled = true;
        agent.UpdateRoomContent();
	}
	
	// Update is called once per frame
    void ReadyToEnterGameplay(){
        if (agent.ReadyRoom()){
            agent.AquireGameServer();
            ReadyButtonText.text = "Cancel";
        }
        else {
            if (agent.AcquireGameServerToken != null)
            {
                agent.AcquireGameServerToken.Cancel();
                ReadyButtonText.text = "Ready";
            }
        }
    }

}
