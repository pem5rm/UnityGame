using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletCheck : MonoBehaviour {

    //public GameObject enemy;
    EnemyController enemyController;
	// Use this for initialization
	void Start () {
        enemyController = GetComponentInParent<EnemyController>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}


    private void OnTriggerEnter2D(Collider2D other)
    {
        Debug.Log(other.tag);

        if (other.tag == "bullet")
        {
            Destroy(other.gameObject);
            //Destroy(enemy.gameObject);
            enemyController.health -= 1;
        }
    }
}
