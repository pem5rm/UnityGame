using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyController : MonoBehaviour {

    //targetDistanceThreshold: the min distance at which should move towards the target, to prevet fromgeting jittery oce in line with target
    public float moveSpeed, changeDirectionThresholdDistance, moveThresholdDistance, health, patrolMovementLength, patrolMoveSpeed;
    //, wiggleAmount, wiggleLength;
    public GameObject player;
    public AudioClip enemyDeathClip, enemyAttackClip;
    public AudioSource enemySource;
    public int enemyType;

    Rigidbody2D myBody;
    float horizontal, vertical, nextPatrolMovement;
    //, nextWiggle, currentWiggleSpeed;

    TargetCheck targetCheck;
    GameObject target;
    bool soundPlayed = false;
    int[] xPatrolMovement;
    int[] yPatrolMovement;
    int patrolMovementIndex;

    PlayerController playerController;


    // Use this for initialization
    void Start () {
        myBody = this.GetComponent<Rigidbody2D>();
        targetCheck = gameObject.GetComponentInChildren<TargetCheck>();
        target = GameObject.FindGameObjectWithTag("Player");

        //enemy movement pattern while patrolling; will move in a clockwise square
        xPatrolMovement = new int[] { 1, 0, -1, 0 };
        yPatrolMovement = new int[] { 0, -1, 0, 1 };
        //choose a random starting movement
        patrolMovementIndex = Random.Range(0, 3);

        nextPatrolMovement = Time.time;

        //nextWiggle = Time.time;


        playerController = GameObject.Find("Player").GetComponent<PlayerController>();



    }

    // Update is called once per frame
    void FixedUpdate () {


        if(health <= 0)
        {
            if (enemyType == 0)
            {
                myBody.constraints = RigidbodyConstraints2D.None;
                myBody.constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezePositionY;
                myBody.rotation += -20f;
                GetComponent<Collider2D>().enabled = false;
                //transform.localScale -= new Vector3(0.001f, 0.001f, 0f);

            }

            else if(enemyType == 1)
            {
                myBody.constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezePositionY;
                myBody.transform.localScale = new Vector3(transform.localScale.x -0.02f, transform.localScale.y - 0.02f, transform.localScale.z);
                GetComponent<Collider2D>().enabled = false;
                //transform.localScale -= new Vector3(0.001f, 0.001f, 0f);



            }

            if (!soundPlayed)
            {
                if (!enemySource.isPlaying)
                {
                    enemySource.clip = enemyDeathClip;
                    enemySource.Play();
                }
                soundPlayed = true;
            }

            if (!enemySource.isPlaying)
            {
                playerController.score += 1;
                GetComponentInParent<RoomController>().enemyCount -= 1;
                Destroy(this.gameObject);
            }

        }

        //folow target
        if (targetCheck.follow)
        {
            target = targetCheck.target;
            //if target is close, move sdirectly to it
            if (Vector2.Distance(target.transform.position, transform.position) < moveThresholdDistance) { 
                //target = targetCheck.target;
                if (target.transform.position.x > transform.position.x)
                {
                    //Flip(true);
                    horizontal = moveSpeed;
                }
                else if (target.transform.position.x < transform.position.x)
                {
                    //Flip(false);
                    horizontal = -moveSpeed;
                }
                else
                    horizontal = 0;

                if (target.transform.position.y > transform.position.y)
                    vertical = moveSpeed;
                else if (target.transform.position.y < transform.position.y)
                    vertical = -moveSpeed;
                else
                    vertical = 0;
            }
            //else, move generally towards target, but wiggle around some too
            else
            {
                if (target.transform.position.x > transform.position.x + changeDirectionThresholdDistance)
                {
                    //Flip(true);
                    horizontal = moveSpeed;
                }
                else if (target.transform.position.x < transform.position.x - changeDirectionThresholdDistance)
                {
                    //Flip(false);
                    horizontal = -moveSpeed;
                }
                else
                    horizontal = 0;

                if (target.transform.position.y > transform.position.y + changeDirectionThresholdDistance)
                    vertical = moveSpeed;
                else if (target.transform.position.y < transform.position.y - changeDirectionThresholdDistance)
                    vertical = -moveSpeed;
                else
                    vertical = 0;
            }

    }

        //search for target
        else
        {
            ////moves character in a square for patrolMovementLength on each side
            //if (0f <= (Time.time % (patrolMovementLength * 3)) && patrolMovementLength > (Time.time % patrolMovementLength * 3))
            //{
            //    Debug.Log("1");
            //    horizontal = acceleration;
            //    vertical = 0;
            //}
            //else if (patrolMovementLength <= (Time.time % (patrolMovementLength * 3)) && patrolMovementLength * 2 > (Time.time % patrolMovementLength * 3))
            //{
            //    Debug.Log("2");

            //    horizontal = 0;
            //    vertical = -acceleration;
            //}
            //else if (patrolMovementLength * 2 <= (Time.time % (patrolMovementLength * 3)) && patrolMovementLength * 3 > (Time.time % patrolMovementLength * 3))
            //{
            //    Debug.Log("3");

            //    horizontal = -acceleration;
            //    vertical = 0;
            //}
            ////else if (patrolMovementLength * 3 <= (Time.time % (patrolMovementLength * 3)) && patrolMovementLength * 4 > (Time.time % patrolMovementLength * 3))
            ////{
            ////    Debug.Log("4");

            ////    horizontal = 0;
            ////    vertical = acceleration;
            ////}
            //else
            //{
            //    horizontal = 0;
            //    vertical = 0;
            //    Debug.Log(Time.time % (patrolMovementLength * 4));
            //}

            if(Time.time > nextPatrolMovement)
            {
                nextPatrolMovement += patrolMovementLength;

                if (patrolMovementIndex < xPatrolMovement.Length - 1)
                    patrolMovementIndex += 1;
                else
                    patrolMovementIndex = 0;
            }
            horizontal = xPatrolMovement[patrolMovementIndex] * patrolMoveSpeed;
            vertical = yPatrolMovement[patrolMovementIndex] * patrolMoveSpeed;
        }

        Vector2 moveVel = myBody.velocity;
        moveVel.x = Mathf.Lerp(0, horizontal * 20f, 0.8f);
        moveVel.y = Mathf.Lerp(0, vertical * 20f, 0.8f);
        myBody.AddForce(moveVel);

        if (health > 0)
        {
            if (horizontal > 0)
                transform.localRotation = Quaternion.Euler(0, 0, 0);
            else
                transform.localRotation = Quaternion.Euler(0, 180, 0);
        }
    }


    //void Flip(bool direction)
    //{
    //    if (health > 0) {
    //    if(direction)
    //            transform.localRotation = Quaternion.Euler(0, 0, 0);
    //    else
    //            transform.localRotation = Quaternion.Euler(0, 180, 0);

    //    }
    //}


    //float Wiggle(float speed)
    //{
    //    float retVal;
    //    if (Time.time > nextWiggle)
    //    {
    //        nextWiggle += wiggleLength;
    //        currentWiggleSpeed = Mathf.Abs(Random.Range(-wiggleAmount, wiggleAmount) * moveSpeed);
    //    }
    //    retVal = currentWiggleSpeed;


    //    return retVal;
    //}



}
