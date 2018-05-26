using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunController : MonoBehaviour {

    public float x, y;
    public Vector3 mousePos;
    // Use this for initialization
    void Start () {
		
	}

    // Update is called once per frame
    void FixedUpdate()
    {
        x = Input.GetAxis("Horizontal2");
        y = Input.GetAxis("Vertical2");
        //if (x != 0.0 || y != 0.0)
        //{
            var angle = Mathf.Atan2(y, x) * Mathf.Rad2Deg;
            transform.rotation = Quaternion.AngleAxis(angle, Vector3.back);
        //}

        //else
        //{
            transform.rotation = GetComponentInParent<Transform>().rotation;
        //}


        ////Mouse controls
        //mousePos = Camera.main.WorldToScreenPoint(transform.position);

        //if (mousePos != null)
        //{
        //    var dir = Input.mousePosition - mousePos;
        //    var angle1 = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;

        //    transform.rotation = Quaternion.AngleAxis(angle1, Vector3.forward);
        //}


    }

}
