using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.SceneManagement;
using UnityEditor;
using UnityEditor.SceneManagement;
using System.Collections;

class PlayFromFristScene : EditorWindow
{
    public static string ScencePath = "";
    //public static SceneAsset scence;
    [MenuItem("Play/PlayMe _%h")]
    public static void RunMainScene()
    {
        //OpenedSence = EditorSceneManager.
        //EditorSceneManager.SaveOpenScenes();
        //EditorSceneManager.OpenScene("Assets/PreStartGame.unity");

        //EditorApplication.isPlaying = true;
        if (ScencePath == "")
        {
            ScencePath = EditorUtility.OpenFilePanel("Choose your first scence", "./Assets", "unity");
            ScencePath = "Assets/"+Path.GetFileName(ScencePath);
            
            Debug.Log(ScencePath);

        }
        EditorSceneManager.playModeStartScene = AssetDatabase.LoadAssetAtPath<SceneAsset>(ScencePath);
        EditorApplication.isPlaying = true;
    }

    [MenuItem("Play/ChangeScence _%h")]
    public static void LoadSenceOpenedBefore(){
        //EditorSceneManager.OpenScene("Assets/"+ OpenedSence +".unity");
        ScencePath = EditorUtility.OpenFilePanel("Choose your first scence", "./Assets", "unity");
        ScencePath = "Assets/" + Path.GetFileName(ScencePath);
        Debug.Log(ScencePath);
    }

}
