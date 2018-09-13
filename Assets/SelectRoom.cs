


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


    void Start () {

        tempRoomList = new RoomList();
        RoomListQueue = new ConcurrentQueue<RoomList>();

        roomMap = new Dictionary<long, RoomListItem>();
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
	}
    public void addButton(RoomReview roomReview) {
        var Item = new RoomListItem(Instantiate(m_buttonPrefab, RoomScrollList.content),roomReview,agent);
        roomMap[roomReview.Uuid] = Item;
        var rect = RoomScrollList.content.rect;
        var buttonNum = roomMap.Count;
        
        roomMap[roomReview.Uuid] = Item;
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