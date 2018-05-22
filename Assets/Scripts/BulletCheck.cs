using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletCheck : MonoBehaviour {
    public AudioClip enemyHitClip;
    public AudioSource enemyHitSource;
    //public GameObject enemy;
    EnemyController enemyController;
	// Use this for initialization
	void Start () {
        enemyController = GetComponentInParent<EnemyController>();
        enemyHitSource.clip = enemyHitClip;
	}
	
	// Update is called once per frame
	void Update () {
		
	}


    private void OnTriggerEnter2D(Collider2D other)
    {
        //Debug.Log(other.tag);

        if (other.tag == "bullet")
        {
            Destroy(other.gameObject);
            //Destroy(enemy.gameObject);
            enemyController.health -= 1;
            PlaySound("enemyHit");
        }
    }


    public void PlaySound(string name)
    {
        if (name == "enemyHit")
        {
            //enemyDeathSource.clip = enemyHitClip;
            enemyHitSource.Play();
        }
        //else if (name == "rockLaunch")
        //{
        //    enemySource.clip = enemyClip;
        //    enemySource.Play();
        //}
    }
}
