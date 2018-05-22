using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomController : MonoBehaviour
{
    public GameObject enemy, brick;

    Camera mainCamera;
    GameObject player;

    GameObject doorBrickUp, doorBrickDown, doorBrickLeft, doorBrickRight;

    // Use this for initialization
    void Start()
    {
        mainCamera = GameObject.Find("Main Camera").GetComponent<Camera>();
        player = GameObject.Find("Player");
        Debug.Log(mainCamera.ToString());
    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerInRoom(player))
        {
            Debug.Log(transform.position);
            mainCamera.transform.position = new Vector3(transform.position.x, transform.position.y, mainCamera.transform.position.z);
        }
    }

    bool PlayerInRoom(GameObject myPlayer)
    {
        return ((myPlayer.transform.position.y < transform.position.y + 12) && (myPlayer.transform.position.y > transform.position.y - 12) && (myPlayer.transform.position.x < transform.position.x + 20) && (myPlayer.transform.position.x > transform.position.x - 20));
    }



    public GameObject GetDoor(string wallName, string doorName)
    {
        return transform.Find(wallName).Find(doorName).gameObject;
    }


    //void SpawnEnemy()
    //{
    //    if (enemyCount < maxEnemies)
    //    {
    //        GameObject enemyPrefab = Instantiate(enemy) as GameObject;
    //        enemyPrefab.transform.position = new Vector2(Random.Range(-100f, 100f), Random.Range(-100f, 100f));
    //        enemyCount += 1;
    //    }
    //}

    void SpawnBrick(float x, float y)
    {
        GameObject brickPrefab = Instantiate(brick) as GameObject;
        brickPrefab.transform.position = new Vector2(x, y);
    }
}
