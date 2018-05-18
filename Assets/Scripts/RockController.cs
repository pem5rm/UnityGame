using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RockController : MonoBehaviour {

    Rigidbody2D myBody;
    int direction;
	// Use this for initialization
	void Start () {
        myBody = GetComponent<Rigidbody2D>();
        direction = Random.Range(0, 2);

	}
	
	// Update is called once per frame
	void FixedUpdate () {
        if (direction == 0)
            myBody.rotation += 0.1f;
        else if (direction == 1)
            myBody.rotation -= 0.1f;

    }
}
