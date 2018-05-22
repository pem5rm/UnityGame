using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController : MonoBehaviour {
    public float rangeTime;
    //public AudioClip bulletHitClip;
    //public AudioSource bulletHitSource;
    bool soundPlayed = false, hit = false;
    float spawnTime;
    Rigidbody2D myBody;
    // Use this for initialization
    void Start () {
        //bulletHitSource.clip = bulletHitClip;
        myBody = GetComponent<Rigidbody2D>();
        spawnTime = Time.time;
	}
	
	// Update is called once per frame
	void Update () {

        if (Time.time > spawnTime + rangeTime)
        {
            Destroy(this.gameObject);
        }

        //if (hit)
        //{
        //    if (!soundPlayed)
        //    {
        //        bulletHitSource.Play();
        //        soundPlayed = true;
        //    }

        //    if (!bulletHitSource.isPlaying)
        //    {
        //        Destroy(this.gameObject);
        //    }
        //}
	}


    void OnTriggerEnter2D(Collider2D other)
    {

        //Debug.Log(other.tag);
        if (other.tag == "ground")
        {
            RockController rockController = other.GetComponent<RockController>();
            if (rockController != null)
            {
                if (rockController.charge < rockController.maxCharge) { 
                    rockController.charge += 1;
                    rockController.PlaySound("rockHit");

                    if (rockController.charge == rockController.maxCharge)
                        rockController.GetComponent<SpriteRenderer>().sprite = rockController.rockFireSprite;
                }

                else if (!rockController.beginLaunch && myBody != null){
                    rockController.launchDirection = myBody.velocity;
                    rockController.beginLaunch = true;

                    rockController.PlaySound("rockLaunch");
                }
                rockController.lastHit = Time.time;
            }
            Destroy(this.gameObject);

            //hit = true;
            //this.gameObject.SetActive(false);
        }
    }
}
