using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Collections.Concurrent;
using Msg;
using UnityStandardAssets.CrossPlatformInput;

public class EntityManager:MonoBehaviour{
    public static EntityManager instance;
    public Dictionary<long, Entity> Entitys;
    public ConcurrentQueue<GameFrame> gameFrameQ;
    public GameRpc gameRpc;
    public Queue<GameFrame> gameFrameLagecy;
    public ConcurrentQueue<Msg.Input> InputQ;
    public GameFrame t_gameFrame;
    public long FrameNo;
    public long FrameTimeStamp;

    public long InputNo;
    public long UpdatedInputNo;
    public Msg.Input t_Input;

    public AgentRpc agent;
    public GameObject[] m_prefabs;
    public Dictionary<string,int> prefabsNameList;
    public Dictionary<long,bool> UsableId;
    public Entity MainCharacter;
    public List<long> SyncIdList;
    public List<long> DestoryIdList;
    private void Awake()
    {
        instance = this;
        gameFrameQ = new ConcurrentQueue<GameFrame>();
        gameFrameLagecy = new Queue<GameFrame>();
        InputQ = new ConcurrentQueue<Msg.Input>();
        prefabsNameList = new Dictionary<string, int>();
        Entitys = new Dictionary<long, Entity>();
        var i = 0;
        foreach (var prefab in m_prefabs)
        {

            prefabsNameList[prefab.name] = i;
            i++;
        }
        enabled = false;
        UsableId = new Dictionary<long, bool>();
        for (int a = 1; a < 100; a++)
        {
            UsableId.Add(a,true);
        }
        SyncIdList = new List<long>();
        DestoryIdList = new List<long>();
        //SyncIdList.SetValue(1,0);
    }

    long GetUsableId()
    {
        foreach (var id in UsableId)
        {
            if (id.Value)
            {
                UsableId[id.Key] = false;
                Debug.Log("GetUsableId");
                return id.Key;
            }
        }
        return 0;
    }

    public void DestoryEntityByClient(long uuid)
    {
        Entity e;
        if (!SyncIdList.Exists( (id) => { return id == uuid; } ) ) return;
        if (Entitys.TryGetValue(uuid, out e)) e.enabled = false;
        if (uuid - MainCharacter.state.Uuid != 0)
        {
            UsableId[uuid - MainCharacter.state.Uuid] = true;
        }
        
        t_Input.EntityStates.Remove(uuid);
        SyncIdList.Remove(uuid);
        //Entitys.Remove(uuid);
        t_Input.DestroyEntity.Add(uuid);
        DestoryIdList.Add(uuid);
    }

    public void CreateEntityByClient(EntityState state, Character character)
    {
        var uuid = GetUsableId();
        if (uuid!= 0)
        {
            int i;
            GameObject instance;
            if (prefabsNameList.TryGetValue(state.PrefabName, out i))
            {
                state.Uuid = uuid + MainCharacter.state.Uuid;
                character.Uuid = state.Uuid;
                //Debug.Log("CreateEntityByClient");
                var pos = new UnityEngine.Vector3 { x = state.Transform.Position.X, y = state.Transform.Position.Y, z = state.Transform.Position.Z };
                var q = new UnityEngine.Quaternion { x = state.Transform.Rotation.X, y = state.Transform.Rotation.Y, z = state.Transform.Rotation.Z, w = state.Transform.Rotation.W };
                SyncIdList.Add(state.Uuid);
                instance = Instantiate(m_prefabs[i], pos, q);
                var entity = instance.GetComponent<Entity>();
                Entitys[state.Uuid] = entity;
                entity.UpdateState(state);
                var color = character.Color;
                entity.m_appearance.SetupAllColor(new Color32 { r = (byte)color.R, b = (byte)color.B, g = (byte)color.G });
                entity.IsSyncToServer = true;
                entity.m_move.IsSyncToServer = true;
                entity.character = character;
                
                instance.GetComponent<Rigidbody>().isKinematic = false;
                instance.GetComponent<Rigidbody>().velocity = new UnityEngine.Vector3 { x = state.Speed.X, y = state.Speed.Y, z = state.Speed.Z };

                t_Input.NewEntityCharacters.Add(character.Uuid,character);
                entity.enabled = true;
                entity.m_move.entity = entity;
                /* Debug.Log("Create " + state.PrefabName);
                var pos = new UnityEngine.Vector3 { x = state.Transform.Position.X, y = state.Transform.Position.Y, z = state.Transform.Position.Z };
                var q = new UnityEngine.Quaternion { x = state.Transform.Rotation.X, y = state.Transform.Rotation.Y, z = state.Transform.Rotation.Z, w = state.Transform.Rotation.W };

                instance = Instantiate(m_prefabs[i], pos, q);
                var entity = instance.GetComponent<Entity>();

                Entitys[state.Uuid] = entity;
                entity.UpdateState(state);
                instance.GetComponent<Rigidbody>().velocity = new UnityEngine.Vector3 { x = entity.state.Speed.X, y = entity.state.Speed.Y, z = entity.state.Speed.Z };
                var color = character.Color;
                entity.m_appearance.SetupAllColor(new Color32 { r = (byte)color.R, b = (byte)color.B, g = (byte)color.G });

                entity.character = character;
                if (character.Uuid == GameManager.instance.m_UserInfo.UsedCharacter)
                {
                    MainCharacter = entity;
                    SyncIdList.Add(state.Uuid);
                }
                entity.SetAsMainPlayer(character.Uuid == GameManager.instance.m_UserInfo.UsedCharacter);
                entity.enabled = true;
                */
            }
            else
            {
                UsableId[uuid] = true;
            }

        }else
        {

        }
        return;
    }

    void OnEnable()
    {
        gameRpc = GameRpc.instance;
        gameRpc.GameFrameQ = gameFrameQ;
        t_Input = new Msg.Input();

        t_Input.TimeStamp = util.GetTimeStamp();
        
    }

    void FixedUpdate()
    {
        if (gameFrameQ.TryDequeue(out t_gameFrame))
        {
            FrameNo = t_gameFrame.RunnigNo;
            FrameTimeStamp = t_gameFrame.TimeStamp;
            UpdateFrame(t_gameFrame);
            gameFrameLagecy.Enqueue(t_gameFrame);
        }
        if (SyncIdList.Count== t_Input.EntityStates.Count)
        {
            
            //Debug.Log(t_Input);
            InputQ.Enqueue(t_Input);
            t_Input = new Msg.Input ();
            t_Input.TimeStamp = util.GetTimeStamp();
            UpdatedInputNo = InputNo;
        }
    }



    void UpdateFrame(GameFrame frame) {
        Entity t_Entity;
        foreach (KeyValuePair<long,EntityState> v in frame.EntityStates)
        {
            if (Entitys.TryGetValue(v.Key, out t_Entity))
            {
                //Update
                t_Entity.UpdateState(v.Value);
            }
            else
            {
                Character c;
                if (frame.Characters.TryGetValue(v.Key, out c))
                {
                    if (!DestoryIdList.Exists((id) => { return v.Key == id; }))
                    {
                        CreateNewEntity(v.Value, c);
                    }
                    //CreateEntity
                }
            }
        }


        HandleInteraction(frame.Interaction);
        // entitys;
        List<long> keys = new List<long>(Entitys.Keys);

        foreach (var a in keys)
        {
            EntityState state;
            if (!frame.EntityStates.TryGetValue(a, out state) && !SyncIdList.Exists((id) => { return id == a; }))
            {
                //Destory id
                DestroyEntityByServer(a);
            }
        }

    }

    void DestroyEntityByServer(long uuid)
    {
        Entity e;
        if (!Entitys.TryGetValue(uuid, out e) ) return;
        DestoryIdList.Remove(uuid);
        Destroy(e.gameObject);
        Entitys.Remove(uuid);
        Destroy(e.gameObject);
    }
    void HandleInteraction(Google.Protobuf.Collections.RepeatedField<Interaction> interactions)
    {
        foreach (var i in interactions)
        {
            Entity entity;
            if (Entitys.TryGetValue(i.ToEntityId, out entity))
            {

                if (SyncIdList.Exists(
                    (long id) => {
                        return i.ToEntityId == id;
                    }))
                {
                    entity.m_acceptor.Accept(i);
                }
                
            }
            else
            {
                Debug.Log("HandleInteraction: no entity");
            }
        }
    }

    public void DestroyEntity(long id)
    {

    }
    public void CreateNewEntity(EntityState state,Character character)
    {
        int i;
        GameObject instance;
        if (prefabsNameList.TryGetValue(state.PrefabName,out i) ){

            Debug.Log("Create "+ state.PrefabName);
            var pos = new UnityEngine.Vector3 { x = state.Transform.Position.X,y = state.Transform.Position.Y,z= state.Transform.Position.Z };
            var q = new UnityEngine.Quaternion { x = state.Transform.Rotation.X, y= state.Transform.Rotation.Y, z= state.Transform.Rotation.Z,w = state.Transform.Rotation.W};
            
            instance = Instantiate(m_prefabs[i],pos,q );
            var entity = instance.GetComponent<Entity>();
            
            Entitys[state.Uuid] = entity;
            entity.UpdateState(state);
            instance.GetComponent<Rigidbody>().velocity = new UnityEngine.Vector3 { x = entity.state.Speed.X, y = entity.state.Speed.Y, z = entity.state.Speed.Z };
            var color = character.Color;
            entity.m_appearance.SetupAllColor(new Color32 { r = (byte)color.R, b = (byte)color.B, g = (byte)color.G });

            entity.character = character;
            if (character.Uuid == GameManager.instance.m_UserInfo.UsedCharacter)
            {
                MainCharacter = entity;
                SyncIdList.Add(state.Uuid);
            }
            entity.SetAsMainPlayer(character.Uuid == GameManager.instance.m_UserInfo.UsedCharacter);
            entity.enabled = true;
        }
    }

    public bool SyncMainPlayerState(EntityState state)
    {
        EntityState x;
        if (!t_Input.EntityStates.TryGetValue(state.Uuid ,out x))
        {
            //Debug.Log(state);
            t_Input.EntityStates.Add(state.Uuid,state);
            return true;
        }
        return false;
        //Debug.Log(t_Input);
        
    }

    public void Skill(int idx, float Value, UnityEngine.Vector3 vector)
    {
        if (MainCharacter.m_Attacks.Length >= idx)
        {
            MainCharacter.m_Attacks[idx].Attack(Value,vector);
        }
    }
    public void Skill(string axisName)
    {
        var v = CrossPlatformInputManager.GetAxis(axisName);
        Skill(0, v, new UnityEngine.Vector3());
    }
}
