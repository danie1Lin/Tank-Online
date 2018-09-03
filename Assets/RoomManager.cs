using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Google.Protobuf.WellKnownTypes;
using Google.Protobuf.Collections;
using Google.Protobuf;
using UnityEngine.UI;
using Msg;
using System.Collections.Concurrent;

public class RoomManager : MonoBehaviour {
	public Button CreateButton;
	public InputField RoomName;
    public Dropdown gameType;
    public Slider MaxPlayer;

    public AgentRpc agent;

	// Use this for initialization
	void Start () {
		CreateButton.onClick.AddListener (createRoom);
        var playerCountText = this.gameObject.transform.Find("SliderText").gameObject.GetComponent<Text>();
        MaxPlayer.onValueChanged.AddListener((num)=>{
            playerCountText.text = "Maximum Aoumt of Player " + ((int)num).ToString();
        });
	}

	void createRoom(){
        var roomsetting = new RoomSetting {
            Name = RoomName.text,
            MaxPlayer = (int)MaxPlayer.value,
            GameType = gameType.options[gameType.value].text
        };
        agent.CreatRoom(roomsetting);
	}
	// Update is called once per frame
	void Update () {

	}
}
