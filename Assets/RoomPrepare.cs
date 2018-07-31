using System.Collections;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Google.Protobuf.WellKnownTypes;
using Google.Protobuf.Collections;
using Google.Protobuf;
using UnityEngine.UI;
using Msg;
using System.Collections.Concurrent;

public class RoomPrepare : MonoBehaviour {
    public AgentRpc agent;
    public ConcurrentQueue<RoomContent> RoomContentQueue;
    public float playerInterval;
    public GameObject m_camera;
    public GameObject m_DefaultCharacter;
    public Dictionary<long, GameObject> m_CharacterPrefab;
    private RoomContent TempRoomConent;
    private Dictionary<string, PlayerInfoItem> playerMap;
    
	// Use this for initialization
	void Start () {
        RoomContentQueue = new ConcurrentQueue<RoomContent>();
        playerMap = new Dictionary<string, PlayerInfoItem>();
        m_CharacterPrefab = new Dictionary<long, GameObject>();
        agent.RoomContentQueue = RoomContentQueue;
    }
	
	// Update is called once per frame
	void Update () {
        if (RoomContentQueue.TryDequeue(out TempRoomConent)){
            Debug.Log("Get"+ TempRoomConent);
            foreach (KeyValuePair<string,PlayerInfo> player in TempRoomConent.Players)
            {
                bool Enter = true;
                foreach (KeyValuePair<string, PlayerInfoItem> oldPlayer in playerMap)
                {
                    if (oldPlayer.Key == player.Key)
                    {
                        oldPlayer.Value.Update(player.Value);
                        Enter = false;
                    }
                }
                if (Enter)
                {
                    AddPlayer(player.Value);

                }
            }

        }
	}

    void AddPlayer(PlayerInfo info)
    {
        Debug.Log("Add player" +info);
        //UnityEngine.Vector3 axis = new UnityEngine.Vector3();
        //float angle;
        UnityEngine.Vector3 v = new UnityEngine.Vector3(0, 0, (playerMap.Count * playerInterval));
        GameObject instance;
        GameObject playerInstance;
        if (m_CharacterPrefab.TryGetValue(info.Character.Uuid,out instance))
        {
            playerInstance = Instantiate(m_CharacterPrefab[info.Character.Uuid]);
        }
        else
        {
            playerInstance = Instantiate(m_DefaultCharacter);
            
        }
        
        playerInstance.transform.position = v;
        playerMap[info.UserName] = new PlayerInfoItem(info,playerInstance, playerMap.Count);
        //place avartar in sequence
        
    }
}

public class PlayerInfoItem
{
    public PlayerInfo info;
    public GameObject Character;
    public int Index;
    public PlayerInfoItem(PlayerInfo info,GameObject Character,int Index)
    {
        this.info = info;
        this.Character = Character;
        this.Character.transform.Find("UserName").GetComponent<TextMesh>().text = info.UserName;
    }

    public void Update(PlayerInfo info)
    {
        if (info.Character.Uuid != this.info.Character.Uuid)
        {
            //Change Character
            Debug.Log("Update player Info");
        }
        this.info = info;
        
    }
}