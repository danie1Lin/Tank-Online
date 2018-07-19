


using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

using System.Collections.Generic;
using Msg;
using System.Collections.Concurrent;
using System.Threading;

public class SelectRoom : MonoBehaviour
{
	public Button CreateRoomButton;
	public Button ReadyRoomButton;
	public Button EnterRoomButton;
	public Button LeaveRoomButton;
	public ScrollRect RoomScrollList;
	public Text RoomInfoText;
	public GameManager Gm;
	public Sprite buttonSprite;
	public ConcurrentQueue<RoomInfo> addRoomQueue;
	public float buttonH;
	public float Offset;
	public Font textFont;
	private int state;

    private Dictionary<Int64,RoomInfo> roomMap;
	//0 not 
	// Use this for initialization
	static ReaderWriterLock rwl = new ReaderWriterLock();
	private Button[] buttonList;
	public RoomInfo tempRoomInfo;
	private int buttonNum;
    private UnityAction LeaveRoomAction;
    private UnityAction EnterRoomAction;
    private UnityAction ReadyRoomAction;

    void Func()
    {

    }

    void Start () {
        LeaveRoomAction = new UnityAction(Func);
        EnterRoomAction = new UnityAction(Func);
        ReadyRoomAction = new UnityAction(Func);
        tempRoomInfo = new RoomInfo ();
		addRoomQueue = new ConcurrentQueue<RoomInfo> ();
        roomMap = new Dictionary<long, RoomInfo>();
		buttonNum = 0;
		EnterRoomButton.interactable = false;
		LeaveRoomButton.interactable = false;
		ReadyRoomButton.interactable = false;
        EnterRoomButton.onClick.AddListener(EnterRoomAction);
        LeaveRoomButton.onClick.AddListener(LeaveRoomAction);
        ReadyRoomButton.onClick.AddListener(ReadyRoomAction);
		state = 0;

	}

	// Update is called once per frame
	void Update () {
		if (addRoomQueue.TryDequeue (out tempRoomInfo)) {
            foreach (KeyValuePair<Int64,RoomInfo> room in roomMap){
                if (room.Key == tempRoomInfo.Uuid) {
                    return;
                }
            }
			addButton (tempRoomInfo);
		}
		if (state == 1) {
            EnterRoomButton.interactable = true;
            LeaveRoomButton.interactable = false;
            ReadyRoomButton.interactable = false;
        } else if (state == 2) {
			EnterRoomButton.interactable = false;
			LeaveRoomButton.interactable = true;
			ReadyRoomButton.interactable = true;

		} else {
			ReadyRoomButton.interactable = false;
			LeaveRoomButton.interactable = false;
		}
	}

	public void addButton(RoomInfo roomInfo) {
		buttonNum += 1;
		//create gameobject
		GameObject obj = new GameObject(roomInfo.Uuid.ToString());
        roomMap.Add(roomInfo.Uuid, roomInfo);
		Image im = obj.AddComponent<Image> ();
		im.sprite = buttonSprite;
		im.type = Image.Type.Sliced;
		var rect = RoomScrollList.content.rect;
		im.rectTransform.sizeDelta = new Vector2 (rect.width - 5 , buttonH);

		var RoomTitle = new GameObject ("Text");
		var Title = RoomTitle.AddComponent<Text> ();
		Title.text = roomInfo.Name;
		Title.alignment = TextAnchor.MiddleCenter;
		Title.color = UnityEngine.Color.black;
		Title.font = textFont;
		RoomTitle.transform.SetParent (obj.transform, false);
		var TitlePos =	RoomTitle.GetComponent<RectTransform> ();
		TitlePos.anchorMax = new Vector2(1,1);
		TitlePos.anchorMin = new Vector2 (0, 0);
		TitlePos.offsetMin = new Vector2 (0, 0); //left buttom
		TitlePos.offsetMax = new Vector2 (0, 0); //right top

		obj.transform.SetParent (RoomScrollList.content, false);
		obj.transform.localPosition = new  UnityEngine.Vector3{y = - Offset - (buttonNum)* buttonH + buttonH/2 ,x = 0 + (rect.width - 5)/2};
		//button.Text = bText;
		Button button = obj.AddComponent<UnityEngine.UI.Button> ();
		button.onClick.AddListener (() => {
			ReviewRoomInfo(roomInfo);
		});
		//add component button
		//add listener

	}
	void ReviewRoomInfo(RoomInfo roomInfo){
		Debug.Log (roomInfo);
        state = 1;
		RoomInfoText.text = "Room Name: " + roomInfo.Name +
			"\nRoom ID: " + roomInfo.Uuid.ToString() +
			"\nOwner ID: " + roomInfo.OwnerUuid.ToString() + "\nUsers In Room :\n";
		foreach (KeyValuePair<long,UserInfo> u in roomInfo.UserInRoom) {
			RoomInfoText.text += "\t[" + u.Key.ToString() + "]" + u.Value.UserName;
		}

        EnterRoomButton.onClick.RemoveListener(EnterRoomAction);
        LeaveRoomButton.onClick.RemoveListener(LeaveRoomAction);
        ReadyRoomButton.onClick.RemoveListener(ReadyRoomAction);
        EnterRoomButton.interactable = true;
        LeaveRoomAction = () => {
            CallFuncInfo f = new CallFuncInfo { Func = "LeaveRoom", TargetId = roomInfo.Uuid, FromId = Gm.m_UserInfo.Uuid };
            //Gm.AddOutFuncQueue(f);
        };
        EnterRoomAction = () => {
            CallFuncInfo f = new CallFuncInfo { Func = "EnterRoom", TargetId = roomInfo.Uuid, FromId = Gm.m_UserInfo.Uuid };
            //Gm.AddOutFuncQueue(f);
        };
        ReadyRoomAction = () => {
            CallFuncInfo f = new CallFuncInfo { Func = "ReadyRoom", TargetId = roomInfo.Uuid, FromId = Gm.m_UserInfo.Uuid };
            //Gm.AddOutFuncQueue(f);
        };
        EnterRoomButton.onClick.AddListener(EnterRoomAction);
        LeaveRoomButton.onClick.AddListener(LeaveRoomAction);
        ReadyRoomButton.onClick.AddListener(ReadyRoomAction);
    }

	public bool Enter(RoomInfo roomInfo){
		var success = false;
		rwl.AcquireWriterLock (1000);
		if (state == 1){
			state = 2;

			success = true;
			//View Room Info 
			Debug.Log("[Get in Room]:"+roomInfo);
		}
		else {
			success = false;
		}
		rwl.ReleaseWriterLock();
		Gm.m_RoomInfo = roomInfo;
		return success;
	}

    public void Leave(Int64 id)
    {
        if (Gm.m_RoomInfo.Uuid == id) { 
            rwl.AcquireWriterLock(1000);
            state = 1;
            rwl.ReleaseWriterLock();
            Gm.m_RoomInfo = null;
        }
	}

	public bool Ready(){
		var success = false;
		rwl.AcquireWriterLock (1000);
		if (state == 2) {
			state = 3;

			success = true;
		} else {
			success = false;
		}
		rwl.ReleaseWriterLock ();
		return success;
	}


}