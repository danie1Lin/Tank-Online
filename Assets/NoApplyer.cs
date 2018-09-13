using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoApplyer : InteractionApplyer
{

    private void Start()
    {

    }
    public new Msg.Interaction Collide(GameObject go)
    {
        return null;
    }

    private void OnTriggerEnter(Collider other)
    {

    }

    private void OnCollisionEnter(Collision collision)
    {

    }

    private void DestroyOnCollide()
    {

    }
}
