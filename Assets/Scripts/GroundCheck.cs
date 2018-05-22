using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundCheck : MonoBehaviour {


    public bool isGrounded = false;


    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}



    void OnTriggerEnter2D(Collider2D other)
    {
        //Debug.Log(other.tag);
        if (other.tag == "ground")
        {

            isGrounded = true;

        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.tag == "ground")
        {
            isGrounded = false;
        }
    }
}
