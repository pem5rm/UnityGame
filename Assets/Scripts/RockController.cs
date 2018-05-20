using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RockController : MonoBehaviour {

    public float maxCharge, chargeLossDelay, lastHit, charge, launchSpeed, launchMaxSpeed;
    public Vector2 launchDirection;
    public bool beginLaunch;

    public AudioClip rockHitClip, rockLaunchClip;
    public AudioSource rockSource;

    Rigidbody2D myBody;
    int direction;
    //float charge;
	// Use this for initialization
	void Start () {
        myBody = GetComponent<Rigidbody2D>();
        direction = Random.Range(0, 2);
        charge = 0;

	}
	
    public void PlaySound(string name)
    {
        if(name == "rockHit")
        {
            rockSource.clip = rockHitClip;
            rockSource.Play();
        }
        else if (name == "rockLaunch")
        {
            rockSource.clip = rockLaunchClip;
            rockSource.Play();
        }
    }

	// Update is called once per frame
	void FixedUpdate () {
        if (direction == 0)
            myBody.rotation += 0.15f * (charge * 20 + 1);
        else if (direction == 1)
            myBody.rotation -= 0.15f * (charge * 20 + 1);

        //if(Time.time > lastHit + chargeLossDelay && charge > 0)
        //{
        //    charge -= 1;
        //}

        if (beginLaunch && myBody.velocity.magnitude < launchMaxSpeed)
                myBody.AddForce(launchDirection * launchSpeed);


    }


}
