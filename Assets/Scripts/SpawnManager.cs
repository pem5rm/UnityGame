using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour {


    public GameObject rock;
    public GameObject enemy;
    public float enemySpawnRate, rockSpawnRate;
    public int maxRocks, maxEnemies;

    private float nextEnemeySpawn, nextRockSpawn;
    private int rockCount, enemyCount;

    // Use this for initialization
    void Start () {

        for(int i = 0; i < 25; i++)
        {
            SpawnEnemy();
            enemyCount += 1;
        }

        for (int i = 0; i < 200; i++)
        {
            SpawnRock();
            rockCount += 1;
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
        if (enemyCount < maxEnemies) { 
            GameObject enemyPrefab = Instantiate(enemy) as GameObject;
            enemyPrefab.transform.position = new Vector2(Random.Range(-100f, 100f), Random.Range(-100f, 100f));
            enemyCount += 1;
        }
    }

    void SpawnRock()
    {
        if (rockCount < maxRocks)
        {
            GameObject rockPrefab = Instantiate(rock) as GameObject;
            rockPrefab.transform.position = new Vector2(Random.Range(-100f, 100f), Random.Range(-100f, 100f));
            rockCount += 1;
        }
    }
}
