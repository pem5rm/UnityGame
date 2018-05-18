using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletController : MonoBehaviour {

    //public AudioClip bulletHitClip;
    //public AudioSource bulletHitSource;
    bool soundPlayed = false, hit = false;

    // Use this for initialization
    void Start () {
        //bulletHitSource.clip = bulletHitClip;

	}
	
	// Update is called once per frame
	void Update () {

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

        Debug.Log(other.tag);
        if (other.tag == "ground")
        {
            Destroy(this.gameObject);
            //hit = true;
            //this.gameObject.SetActive(false);
        }
    }
}
