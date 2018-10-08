using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellShooting : AttackBase {
    public Vector3 m_LaunchOffset;
    public float m_MinSpeed;
    public float m_MaxSpeed;
    public Msg.Character shellCharacter;
    public Msg.EntityState shellState;
    public Transform FireTransform;
    public float m_timeToSpeed;
    private void Awake()
    {
        shellState = new Msg.EntityState
        {
            PrefabName = "Shell"
        };
        
    }
    public override void Attack(float Value, Vector3 vector)
    {
        shellCharacter = new Msg.Character
        {
            Color = gameObject.GetComponent<Entity>().character.Color
        };
        if (Value > m_MaxSpeed) Value = m_MaxSpeed;
        var s = Value * m_timeToSpeed;
        if (s < m_MinSpeed) s = m_MinSpeed;
        base.Attack(s,vector);
        var v = FireTransform.forward * s;

        var p = FireTransform.position;
        var q = FireTransform.rotation;
        shellState.Speed = new Msg.Vector3 {X=v.x,Y=v.y,Z=v.z };
        shellState.Transform = new Msg.Transform
        {
            Position = new Msg.Vector3 { X = p.x, Y = p.y, Z = p.z },
            Rotation = new Msg.Quaternion { X = q.x, Y = q.y, Z = q.z, W = q.w }
        };
        EntityManager.instance.CreateEntityByClient(shellState.Clone(),shellCharacter.Clone());
    }
}
