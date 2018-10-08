using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.Events;
namespace UnityStandardAssets.CrossPlatformInput
{
	[RequireComponent(typeof(Image))]
	public class TouchPad : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
	{
		// Options for which axes to use
		public enum AxisOption
		{
			Both, // Use both
			OnlyHorizontal, // Only horizontal
			OnlyVertical // Only vertical
		}


		public enum ControlStyle
		{
			Absolute, // operates from teh center of the image
			Relative, // operates from the center of the initial touch
			Swipe, // swipe to touch touch no maintained center
		}


		public AxisOption axesToUse = AxisOption.Both; // The options for the axes that the still will use
		public ControlStyle controlStyle = ControlStyle.Absolute; // control style to use
		public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
        public UnityEvent handelePress;
		public float Xsensitivity = 1f;
		public float Ysensitivity = 1f;

		Vector3 m_StartPos;
		Vector2 m_PreviousDelta;
		Vector3 m_JoytickOutput;
		bool m_UseX; // Toggle for using the x axis
		bool m_UseY; // Toggle for using the Y axis
		CrossPlatformInputManager.VirtualAxis m_HorizontalVirtualAxis; // Reference to the joystick in the cross platform input
		CrossPlatformInputManager.VirtualAxis m_VerticalVirtualAxis; // Reference to the joystick in the cross platform input
		bool m_Dragging;
		int m_Id = -1;
		Vector2 m_PreviousTouchPos; // swipe style control touch
        Vector2 startPos;


        private Vector3 m_Center;
        private Image m_Image;
        private float hieght;
        private float width;
		Vector3 m_PreviousMouse;


		void OnEnable()
		{
			CreateVirtualAxes();
		}

        void Start()
        {

            m_Image = GetComponent<Image>();
            var rect = RectTransformUtility.PixelAdjustRect(m_Image.rectTransform, GetComponentInParent<Canvas>());
            Debug.Log(rect);
            width = rect.width;
            hieght = rect.height;
#if !UNITY_EDITOR
            m_Center = m_Image.transform.position;
#endif


        }

        void FristTouch(){

        }

        void CreateVirtualAxes()
		{
			// set axes to use
			m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
			m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);

			// create new axes based on axes to use
			if (m_UseX)
			{
				m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
				CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
			}
			if (m_UseY)
			{
				m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
				CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
			}
		}

		void UpdateVirtualAxes(Vector3 value)
		{
			
			if (m_UseX)
			{
				m_HorizontalVirtualAxis.Update(value.x);
			}

			if (m_UseY)
			{
				m_VerticalVirtualAxis.Update(value.y);
			}
		}


		public void OnPointerDown(PointerEventData data)
		{
            GetComponent<CanvasRenderer>().SetAlpha(0);
            foreach (var a in GetComponentsInChildren<Text>()){
                a.enabled = false;
            }
			m_Dragging = true;
			m_Id = data.pointerId;
            startPos = data.position;

#if !UNITY_EDITOR
        if (controlStyle != ControlStyle.Absolute )
            m_Center = data.position;
#endif
		}


		void Update()
		{
			if (!m_Dragging)
			{
				return;
			}

#if !UNITY_EDITOR
            if (Input.touchCount >= m_Id + 1 && m_Id != -1)
            {
            if (controlStyle == ControlStyle.Swipe)
            {
                m_Center = m_PreviousTouchPos;
                m_PreviousTouchPos = Input.touches[m_Id].position;
            }
            Vector2 pointerDelta = new Vector2((Input.touches[m_Id].position.x - m_Center.x )/width, (Input.touches[m_Id].position.y - m_Center.y)/hieght);
            pointerDelta.x *= Xsensitivity;
            pointerDelta.y *= Ysensitivity;

#else
            if (Input.touchCount >= m_Id + 1) //&& m_Id != -1)
            {
                Vector2 pointerDelta;
                pointerDelta.x = (Input.mousePosition.x - startPos.x)/width;
                pointerDelta.y = (Input.mousePosition.y - startPos.y)/hieght;
                //m_PreviousMouse = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0f);
                //Debug.Log("start"+startPos+"input mouse"+Input.mousePosition+"delta"+ pointerDelta);
#endif


                UpdateVirtualAxes(new Vector3(pointerDelta.x, pointerDelta.y, 0));

			}
		}


		public void OnPointerUp(PointerEventData data)
		{
			m_Dragging = false;
			m_Id = -1;
            handelePress.Invoke();
            UpdateVirtualAxes(Vector3.zero);

		}

		void OnDisable()
		{
			if (CrossPlatformInputManager.AxisExists(horizontalAxisName))
				CrossPlatformInputManager.UnRegisterVirtualAxis(horizontalAxisName);

			if (CrossPlatformInputManager.AxisExists(verticalAxisName))
				CrossPlatformInputManager.UnRegisterVirtualAxis(verticalAxisName);
		}
	}
}