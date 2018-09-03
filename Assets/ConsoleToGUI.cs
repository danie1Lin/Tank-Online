using UnityEngine;
using UnityEngine.UI;
namespace DebugStuff
{
    public class ConsoleToGUI : MonoBehaviour
    {
        
        static string myLog = "";
        private string output;
        private string stack;
        public Text m_Text;
        void Awake()
        {
            Application.logMessageReceived += Log;
        }

        void OnDisable()
        {
            Application.logMessageReceived -= Log;
        }

        public void Log(string logString, string stackTrace, LogType type)
        {
            output = logString;
            stack = stackTrace;
            myLog = output + "\n" + myLog;
            if (myLog.Length > 5000)
            {
                myLog = myLog.Substring(0, 4000);
            }
        }

        /*
        void OnGUI()
        {
            //if (!Application.isEditor) //Do not display in editor ( or you can use the UNITY_EDITOR macro to also disable the rest)
            {
                myLog = GUI.TextArea(new Rect(Screen.width / 4, 0, Screen.width/2, Screen.height/5 ), myLog);
            }
        }
        */
        private void Update()
        {
            m_Text.text = myLog;
        }

    }
}