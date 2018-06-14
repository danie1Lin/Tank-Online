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
	public GameManager Gm;
	public Dropdown gameType;

	// Use this for initialization
	void Start () {
		CreateButton.onClick.AddListener (createRoom);
	}

	void createRoom(){
		var name = RoomName.text;
		CallFuncInfo f = new CallFuncInfo ();
		f.FromId = Gm.m_UserInfo.Uuid;
		f.Func = "CreateNewRoom";

		var roomInfo = new RoomInfo ();
		roomInfo.Name = name;
		roomInfo.GameType = "room";
		f.Param.Add(Any.Pack(roomInfo));
		Gm.OutFuncQueue.Enqueue (f);

	}
	// Update is called once per frame
	void Update () {

	}
}
