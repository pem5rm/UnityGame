using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunController : MonoBehaviour {


    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
        var x = Input.GetAxis("Horizontal2");
        var y = Input.GetAxis("Vertical2");
        if (x != 0.0 || y != 0.0)
        {
            var angle = Mathf.Atan2(y, x) * Mathf.Rad2Deg;
            transform.rotation = Quaternion.AngleAxis(angle, Vector3.back);
        }

        else
        {
            transform.rotation = Quaternion.AngleAxis(0, Vector3.back);
        }



    }



}
