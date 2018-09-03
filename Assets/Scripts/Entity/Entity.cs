using System;
using UnityEngine;
using Msg;
using System.Collections.Concurrent;

public class Entity : MonoBehaviour
{
    public MoveBase m_move;
    public Appearance m_appearance;
    public AttackBase[] m_Attacks;
    public InteractionAcceptor m_acceptor;
    public InteractionApplyer m_applyer;
    public Msg.EntityState state;
    public EntityHealth m_Health;
    public long InputNo;
    public bool IsMainPlayer;
    public Msg.Character character;
    public bool IsSyncToServer;
    // Use this for initialization
    void Awake()
    {
        InputNo = 1;
        enabled = false;
        m_move.enabled = false;
        m_move.entity = this;
        m_acceptor.entity = this;
        m_applyer.entity = this;
    }

    private void OnEnable()
    {
        m_move.enabled = true;
        m_Health.enabled = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (IsSyncToServer)
        {
            if (EntityManager.instance.SyncMainPlayerState(state))
            {
                InputNo++;
            }
        }
        
    }

    public void UpdateState(EntityState state)
    {
        if (!IsSyncToServer)
        {
            this.state = state;
        }
        //m_move.Move();
    }

    public void SetAsMainPlayer(bool isMainPlayer)
    {
        m_move.SetAsMainPlayer(isMainPlayer);
        IsMainPlayer = isMainPlayer;
        IsSyncToServer = isMainPlayer;
    }

    
}
