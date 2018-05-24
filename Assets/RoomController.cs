using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomController : MonoBehaviour
{
    public GameObject enemy, enemy1; 
    public GameObject brickFormation_0, brickFormation_1, brickFormation_2, brickFormation_3, brickFormation_4, brickFormation_5;
    public GameObject doorUp, doorDown, doorLeft, doorRight;
    public int numBrickFormations, doorMoveDistance, enemyCount = 0;

    Camera mainCamera;
    GameObject player;

    GameObject doorBrickUp, doorBrickDown, doorBrickLeft, doorBrickRight;
    int brickFormationChoice;
    bool enemiesActivated = false, doorsActivated = false, enemiesFrozen = true;


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

            if (!enemiesActivated)
            {
                foreach (Transform t in transform)
                {
                    if (t.tag == "enemy")
                        t.gameObject.SetActive(true);
                }
            }

            if (!doorsActivated && enemyCount > 0)
            {
                foreach (Transform t in transform)
                {
                    if (t.tag == "door")
                        t.gameObject.SetActive(true);
                }
            }

            if (enemiesFrozen)
                foreach (Transform t in transform)
                {
                    if (t.tag == "door")
                        if (t.gameObject.GetComponent<DoorController>().doorIsClosed)
                            foreach (Transform u in transform)
                            {
                                if (u.tag == "enemy")
                                {
                                    u.gameObject.GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.None;
                                    u.gameObject.GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.FreezeRotation;
                                }
                            }
                }


            if (enemyCount <= 0)
            {
                foreach (Transform t in transform)
                {
                    if (t.tag == "door")
                        t.GetComponent<DoorController>().openDoor = true;
                }
            }


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

    //void SpawnBrick(float x, float y)
    //{
    //    GameObject brickPrefab = Instantiate(brick) as GameObject;
    //    brickPrefab.transform.position = new Vector2(x, y);
    //}

    public void SpawnBrickFormation(int choice = -1)
    {
        //if -1, choose a random formation (including possibility of no formation)
        if (choice == -1)
            choice = Random.Range(0, numBrickFormations + 2);

        GameObject brickFormationPrefab = null;

        if(choice == 0)
            brickFormationPrefab = Instantiate(brickFormation_0, transform) as GameObject;
        if (choice == 1)
            brickFormationPrefab = Instantiate(brickFormation_1, transform) as GameObject;
        if (choice == 2)
            brickFormationPrefab = Instantiate(brickFormation_2, transform) as GameObject;
        if (choice == 3)
            brickFormationPrefab = Instantiate(brickFormation_3, transform) as GameObject;
        if (choice == 4)
            brickFormationPrefab = Instantiate(brickFormation_4, transform) as GameObject;
        if (choice == 5)
            brickFormationPrefab = Instantiate(brickFormation_5, transform) as GameObject;

        //if (brickFormationPrefab != null)
        //    brickFormationPrefab.transform.position = transform.position;

    }

    public void SpawnEnemies(int numEnemies)
    {
        GameObject enemyPrefab = null;
        for (int i = 0; i < numEnemies; i++) {
            float x = Random.Range(transform.position.x - 15, transform.position.x + 15);
            float y = Random.Range(transform.position.y - 7, transform.position.y + 7);
            int enemyType = Random.Range(0, 2);
            if (!Physics2D.OverlapCircle(new Vector2(x, y), 2))
            {
                if(enemyType == 0)
                    enemyPrefab = Instantiate(enemy, transform) as GameObject;
                else if(enemyType == 1)
                    enemyPrefab = Instantiate(enemy1, transform) as GameObject;
                enemyPrefab.transform.position = new Vector2(x, y);
                enemyPrefab.SetActive(false);
                enemyCount += 1;
            }
            else
                i -= 1;
        }

    }
}
