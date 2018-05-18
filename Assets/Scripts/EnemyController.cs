using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyController : MonoBehaviour {

    //targetDistanceThreshold: the min distance at which should move towards the target, to prevet fromgeting jittery oce in line with target
    public float moveSpeed, changeDirectionThresholdDistance, moveThresholdDistance, health;

    public AudioClip enemyDeathClip;
    public AudioSource enemyDeathSource;

    Rigidbody2D myBody;
    float acceleration, horizontal, vertical;

    TargetCheck targetCheck;
    GameObject target;
    bool soundPlayed = false;




    // Use this for initialization
    void Start () {
        myBody = this.GetComponent<Rigidbody2D>();
        acceleration = moveSpeed;
        targetCheck = gameObject.GetComponentInChildren<TargetCheck>();
        enemyDeathSource.clip = enemyDeathClip;

    }

    // Update is called once per frame
    void FixedUpdate () {


        if(health <= 0)
        {
            myBody.constraints = RigidbodyConstraints2D.None;
            myBody.constraints = RigidbodyConstraints2D.FreezePositionX | RigidbodyConstraints2D.FreezePositionY;
            myBody.rotation += -20f;
            GetComponent<Collider2D>().enabled = false;
            //transform.localScale -= new Vector3(0.001f, 0.001f, 0f);
            


            if (!soundPlayed) {
                enemyDeathSource.Play();
                soundPlayed = true;
            }

            if (!enemyDeathSource.isPlaying)
            {
                Destroy(this.gameObject);
            }

        }

        if (targetCheck.follow)
        {
            target = targetCheck.target;
            if (Vector2.Distance(target.transform.position, transform.position) < moveThresholdDistance) { 
                target = targetCheck.target;
                if (target.transform.position.x > transform.position.x)
                {
                    Flip(true);
                    horizontal = acceleration;
                }
                else if (target.transform.position.x < transform.position.x)
                {
                    Flip(false);
                    horizontal = -acceleration;
                }
                else
                    horizontal = 0;

                if (target.transform.position.y > transform.position.y)
                    vertical = acceleration;
                else if (target.transform.position.y < transform.position.y)
                    vertical = -acceleration;
                else
                    vertical = 0;
            }
            else
            {
                if (target.transform.position.x > transform.position.x + changeDirectionThresholdDistance)
                {
                    Flip(true);
                    horizontal = acceleration;
                }
                else if (target.transform.position.x < transform.position.x - changeDirectionThresholdDistance)
                {
                    Flip(false);
                    horizontal = -acceleration;
                }
                else
                    horizontal = 0;

                if (target.transform.position.y > transform.position.y + changeDirectionThresholdDistance)
                    vertical = acceleration;
                else if (target.transform.position.y < transform.position.y - changeDirectionThresholdDistance)
                    vertical = -acceleration;
                else
                    vertical = 0;
            }

        }

        Vector2 moveVel = myBody.velocity;
        moveVel.x = Mathf.Lerp(0, horizontal * acceleration * 10f, 0.8f);
        moveVel.y = Mathf.Lerp(0, vertical * acceleration * 10f, 0.8f);
        myBody.AddForce(moveVel);
    }


    void Flip(bool direction)
    {
        if (health > 0) {
        if(direction)
                transform.localRotation = Quaternion.Euler(0, 0, 0);
        else
                transform.localRotation = Quaternion.Euler(0, 180, 0);

        }
    }

}
