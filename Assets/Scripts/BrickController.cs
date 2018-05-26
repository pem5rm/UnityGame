using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BrickController : MonoBehaviour {


    public AudioClip rockHitClip;
    public AudioSource rockSource;

    Rigidbody2D myBody;
    int direction;

    void Start()
    {
        myBody = GetComponent<Rigidbody2D>();

    }

    public void PlaySound(string name)
    {
        if (name == "rockHit")
        {
            rockSource.clip = rockHitClip;
            rockSource.Play();
        }
    }

    void FixedUpdate()
    {

    }


}
