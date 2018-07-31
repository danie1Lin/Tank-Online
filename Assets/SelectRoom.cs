


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
    public AgentRpc agent;

    public Button CreateRoomButton;
	public Button ReadyRoomButton;
	public Button EnterRoomButton;
	public Button LeaveRoomButton;
    public GameObject m_buttonPrefab;

    public ScrollRect RoomScrollList;
	public Text RoomInfoText;
	public GameManager Gm;
	public Sprite buttonSprite;
	public float buttonH;
	public float Offset;
	public Font textFont;
	private int state;

    public ConcurrentQueue<RoomList> RoomListQueue; 

    private Dictionary<Int64,RoomListItem> roomMap;
	//0 not 
	// Use this for initialization
	static ReaderWriterLock rwl = new ReaderWriterLock();
	private Button[] buttonList;
	public RoomList tempRoomList;
	private int buttonNum;
    private UnityAction LeaveRoomAction;
    private UnityAction EnterRoomAction;
    private UnityAction ReadyRoomAction;

    public void Func()
    {

    }

    void Start () {
        LeaveRoomAction = new UnityAction(Func);
        EnterRoomAction = new UnityAction(Func);
        ReadyRoomAction = new UnityAction(Func);
        tempRoomList = new RoomList();
        RoomListQueue = new ConcurrentQueue<RoomList>();
        agent.RoomListQueue = RoomListQueue;
        roomMap = new Dictionary<long, RoomListItem>();
		LeaveRoomButton.interactable = false;
		ReadyRoomButton.interactable = false;
        LeaveRoomButton.onClick.AddListener(LeaveRoomAction);
        ReadyRoomButton.onClick.AddListener(ReadyRoomAction);
		state = 0;
	}

	// Update is called once per frame
	void Update () {
		if (RoomListQueue.TryDequeue (out tempRoomList)) {
            
            foreach (var NewRoomItem in tempRoomList.Item) {
                bool add = true;
                foreach (KeyValuePair<Int64, RoomListItem> lastRoomItem in roomMap)
                {
                    if (lastRoomItem.Key == NewRoomItem.Uuid)
                    {
                        //Update button
                        roomMap[lastRoomItem.Key].Update(NewRoomItem);
                        add = false;
                    }
                }
                if (add)
                {
                    addButton(NewRoomItem);
                }
                
            }
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
    public void addButton(RoomReview roomReview) {
        var Item = new RoomListItem(Instantiate(m_buttonPrefab, RoomScrollList.content),roomReview,agent);
        roomMap[roomReview.Uuid] = Item;
        var rect = RoomScrollList.content.rect;
        var buttonNum = roomMap.Count;
        var im = Item.Item.GetComponent<Image>();
        im.rectTransform.sizeDelta = new Vector2(rect.width - 5, buttonH);
        Item.Item.transform.localPosition = new UnityEngine.Vector3 { y = -Offset - (buttonNum) * buttonH + buttonH / 2, x = 0 + (rect.width - 5) / 2 };
        roomMap[roomReview.Uuid] = Item;
        /*
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
        */
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

public class RoomListItem {
    public Button DetailButton;
    public Text RoomName;
    public Text RoomMode;
    public Text PlayerCount;
    public Button EnterButton;
    public GameObject Item;
    public long Uuid;
    public UnityAction EnterRoomAction;
    public AgentRpc agent;
    public RoomListItem(GameObject Item,RoomReview review,AgentRpc agent)
    {
        this.Item = Item;
        this.agent = agent;
        DetailButton = Item.GetComponent<Button>();
        EnterButton = Item.transform.Find("EnterButton").gameObject.GetComponent<Button>();
        
        RoomMode = Item.transform.Find("RoomMode").gameObject.GetComponent<Text>();
        RoomName = Item.transform.Find("RoomName").gameObject.GetComponent<Text>();
        PlayerCount = Item.transform.Find("PlayerCount").gameObject.GetComponent<Text>();
        Uuid = review.Uuid;
        RoomName.text = review.Name;
        RoomMode.text = review.GameType;
        PlayerCount.text = review.InRoomPlayer.ToString()+" / " + review.MaxPlayer.ToString();
        EnterRoomAction = new UnityAction (() =>
        {
            if (agent.EnterRoom(review.Uuid))
            {
                Debug.Log("Enter Room[" + review.Name + "]");
            }
        });
        EnterButton.onClick.AddListener(EnterRoomAction);
    }

    public void Update(RoomReview review)
    {
        Uuid = review.Uuid;
        RoomName.text = review.Name;
        RoomMode.text = review.GameType;
        PlayerCount.text = review.InRoomPlayer.ToString() + " / " + review.MaxPlayer.ToString();
        EnterRoomAction = new UnityAction(() =>
        {
            if (agent.EnterRoom(review.Uuid))
            {
                Debug.Log("Enter Room[" + review.Name + "]");
            }
        });
    }

}

public class ListItem<T>
{
    public ListItem()
    {

    }
}