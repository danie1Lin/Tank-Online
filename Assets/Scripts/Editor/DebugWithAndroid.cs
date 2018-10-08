using System;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class BuildPlayer : MonoBehaviour
{
    [MenuItem("Build/Push To Android")]
    public static void PushToAndroid()
    {
        string apkLocation = PlayerPrefs.GetString("APK location");
        if (string.IsNullOrEmpty(apkLocation) || !File.Exists(apkLocation))
            apkLocation = EditorUtility.OpenFilePanel("Find APK", Environment.CurrentDirectory, "apk");
        if (string.IsNullOrEmpty(apkLocation) || !File.Exists(apkLocation))
        {
            Debug.LogError("Cannot find .apk file.");
            return;
        }
        PlayerPrefs.SetString("APK location", apkLocation);

        string adbLocation = PlayerPrefs.GetString("Android debug bridge location");
        if (string.IsNullOrEmpty(apkLocation) || !File.Exists(adbLocation))
            adbLocation = "/Users/linzhanwei/Library/Android/sdk/platform-tools/adb";
        if (string.IsNullOrEmpty(apkLocation) || !File.Exists(adbLocation))
        {
            Debug.LogError("Cannot find adb.exe.");
            return;
        }
        PlayerPrefs.SetString("Android debug bridge location", adbLocation);

        ProcessStartInfo info = new ProcessStartInfo
        {
            FileName = adbLocation,
            Arguments = string.Format("install -r \"{0}\"", apkLocation),
            WorkingDirectory = Path.GetDirectoryName(adbLocation),
        };
        Process.Start(info);

    }
}
