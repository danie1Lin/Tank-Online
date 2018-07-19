
using System;
using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;
using Msg;
using System.Collections.Concurrent;

public class SelectRoomCanvas : MonoBehaviour 
{
	public Button CreateRoomButton;
	public Button ReadyRoomButton;
	public ScrollRect RoomScrollList;
	public Text RoomInfoText;
	public GameManager Gm;
	public ConcurrentQueue<RoomInfo> addRoomQueue;
	// Use this for initialization
	private Button[] buttonList;
	private RoomInfo tempRoomInfo;
	void Start () {

	}

	// Update is called once per frame
	void Update () {
		if (addRoomQueue.TryDequeue (out tempRoomInfo)) {
			addButton (tempRoomInfo);

		}
	}

	public void addButton(RoomInfo roomInfo) {
		//create gameobject
		GameObject obj = new GameObject(roomInfo.Name);
		Button button = obj.AddComponent<Button> ();

		//button.Text = bText;
		obj.transform.SetParent (RoomScrollList.content,false);
		button.onClick.AddListener (() => {
			ReviewRoomInfo(roomInfo);
		});
		//add component button
		//add listener

	}
	void ReviewRoomInfo(RoomInfo roomInfo){
		RoomInfoText.text = "Room Name: " + roomInfo.Name +
			"\nRoom ID: " + roomInfo.Uuid.ToString() +
			"\nOwner ID: " + roomInfo.OwnerUuid.ToString() + "\n Users In Room :\n";
		foreach (KeyValuePair<long,UserInfo> u in roomInfo.UserInRoom) {
			RoomInfoText.text += "\t[" + u.Key.ToString() + "]" + u.Value.UserName;
		}
		CallFuncInfo f = new CallFuncInfo{ Func = "RoomReady",FromId = Gm.m_UserInfo.Uuid,TargetId = roomInfo.Uuid };
		ReadyRoomButton.onClick.AddListener (() => {
			//Gm.AddOutFuncQueue(f);
		});
	}
}