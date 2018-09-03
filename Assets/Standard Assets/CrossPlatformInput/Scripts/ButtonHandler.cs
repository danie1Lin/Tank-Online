using System;
using UnityEngine;

namespace UnityStandardAssets.CrossPlatformInput
{
    public class ButtonHandler : MonoBehaviour
    {

        public string Name;
        public float AccumuteValue;
        public Vector3 vector;
        private bool isPressed;
        void OnEnable()
        {

        }

        public void SetDownState()
        {
            CrossPlatformInputManager.SetButtonDown(Name);
            AccumuteValue = Time.time;
        }


        public void SetUpState()
        {
            AccumuteValue = Time.time - AccumuteValue;
            CrossPlatformInputManager.SetAxis(Name, AccumuteValue);
        }
        public void SetAxisPositiveState()
        {
            CrossPlatformInputManager.SetAxisPositive(Name);
        }


        public void SetAxisNeutralState()
        {
            CrossPlatformInputManager.SetAxisZero(Name);
        }


        public void SetAxisNegativeState()
        {
            CrossPlatformInputManager.SetAxisNegative(Name);
        }

        public void Dragging()
        {

        }
        public void Update()
        {

        }
    }
}
