using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour {


    public GameObject rock;
    public GameObject enemy;
    public float enemySpawnRate, rockSpawnRate;

    private float nextEnemeySpawn, nextRockSpawn;

	// Use this for initialization
	void Start () {

        for(int i = 0; i < 25; i++)
        {
            SpawnEnemy();
        }

        for (int i = 0; i < 200; i++)
        {
            SpawnRock();
        }

    }
	
	// Update is called once per frame
	void Update () {
        if (Time.time > nextEnemeySpawn)
        {
            nextEnemeySpawn += enemySpawnRate;
            SpawnEnemy();
        }

        //if (Time.time > nextRockSpawn)
        //{
        //    nextEnemeySpawn += rockSpawnRate;
        //    SpawnRock();
        //}
    }

    void SpawnEnemy()
    {
        GameObject enemyPrefab = Instantiate(enemy) as GameObject;
        enemyPrefab.transform.position = new Vector2(Random.Range(-100f, 100f), Random.Range(-100f, 100f));
    }

    void SpawnRock()
    {
        GameObject rockPrefab = Instantiate(rock) as GameObject;
        rockPrefab.transform.position = new Vector2(Random.Range(-100f, 100f), Random.Range(-100f, 100f));
    }
}
