using System.Collections;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using Google.Protobuf.WellKnownTypes;
using Google.Protobuf.Collections;
using Google.Protobuf;
using UnityEngine.UI;
using Msg;
using System.Collections.Concurrent;

public delegate void OnReadyToStartGameHandler();
public delegate bool OnChangeCharacterColor(CharacterSetting setting);
public class RoomPrepare : MonoBehaviour {
    public AgentRpc agent;
    public ConcurrentQueue<RoomContent> RoomContentQueue;
    public float playerInterval;
    public GameObject m_camera;
    public GameObject m_DefaultCharacter;
    public Dictionary<long, GameObject> m_CharacterPrefab;
    public Button m_LeaveButton;
    public Button m_ReadyButton;
    private RoomContent TempRoomConent;
    private Dictionary<string, PlayerInfoItem> playerMap;
    public UnityAction ReadyRoomAction;
    public UnityAction CancelRoomAction;
    public ColorPicker picker;
    public GameManager GM;
    public event OnReadyToStartGameHandler onReadyGame;
    public event OnChangeCharacterColor onChangeCharacterColor;

    private void Awake()
    {
        enabled = false;
        GM = GameManager.Instance;
    }


    // Use this for initialization
    void Start () {
        playerMap = new Dictionary<string, PlayerInfoItem>();
        m_CharacterPrefab = new Dictionary<long, GameObject>();
        picker.onValueChanged.AddListener((color) => {
            Debug.Log("Change color" + color);
            var info = playerMap[GM.m_UserInfo.UserName].info.Character;
            CharacterSetting setting = new CharacterSetting();
            setting.Color = new Msg.Color();
            setting.Color.R = (int)(255*color.r);
            setting.Color.G = (int)(255*color.g);
            setting.Color.B = (int)(255*color.b);
            setting.Equipments.AddRange(info.Equipments);
            setting.Uuid = info.Uuid;
            if (onChangeCharacterColor(setting))
            {
                Debug.Log("Change color" + color);
            }
        });
        ReadyRoomAction = () =>
        {
            onReadyGame();
        };

        m_ReadyButton.onClick.AddListener(ReadyRoomAction);
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

    public void Clean()
    {
        foreach(KeyValuePair<string,PlayerInfoItem> player in playerMap)
        {
            Destroy(player.Value.Character);
            
            //Destroy(player.Value);
        }
        playerMap.Clear();
    }
}

public class PlayerInfoItem
{
    public PlayerInfo info;
    public GameObject Character;
    public int Index;
    public ParticleSystem p;
    public PlayerInfoItem(PlayerInfo info,GameObject Character,int Index)
    {
        this.info = info;
        this.Character = Character;
        this.Character.transform.Find("UserName").GetComponent<TextMesh>().text = info.UserName;
        p = this.Character.transform.Find("ReadySign").GetComponent<ParticleSystem>();
        var color = this.info.Character.Color;
        this.Character.GetComponent<Entity>().m_appearance.SetupAllColor(new Color32 { r = (byte)color.R, b = (byte)color.B, g = (byte)color.G });
    }

    public void Update(PlayerInfo info)
    {
        Debug.Log("Update player Info"+info);
        if (info.Character.Uuid != this.info.Character.Uuid)
        {
            //Change Character
            
        }
        if (info.IsReady != this.info.IsReady)
        {
            if (info.IsReady)
            {
                p.Play();
            } else
            {
                p.Stop();
            }   
        }
        this.info = info;
        var color = info.Character.Color;
        Character.GetComponent<Entity>().m_appearance.SetupAllColor(new Color32 {r=(byte)color.R,b= (byte)color.B,g= (byte)color.G });
    }

    
}