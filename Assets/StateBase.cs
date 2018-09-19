using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public abstract class StateBase : MonoBehaviour
{
    public GameManager GM;
    public GameState state;
    // Use this for initialization
    public void PreStart()
    {
        GM = GameManager.Instance;
        GM.OnStateLoad += OnLoadState;
        GM.SetGameState(state);
        GM.OnStateNext += OnNextState;
    }

    // Update is called once per frame
    void Update()
    {

    }


    //Shoud be add at the last of child class's OnLoadState
    public virtual void OnLoadState(){
        GM.OnStateLoad -= OnLoadState;
        Debug.Log("Base on Load state");
    }
    //Shoud be add at the last of child class's OnNextState
    public virtual void OnNextState(){
        GM.OnStateNext -= OnNextState;
        Debug.Log("Base on next state");
    }
}
