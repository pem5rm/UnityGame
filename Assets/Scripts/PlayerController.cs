﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed;
    public int health, startingHealth, score;
    public GameObject healthText, scoreText;
    //public float moveSpeed, boostedMoveSpeed, maxFuel, fuelLossRate, fuelRegenRate, fuelRegenDelay;
    //public float acceleration, maxSpeed, dampening, zeroVelocityThreshold, jumpVelocity;
    //public LayerMask groundLayer;



    //Transform myTrans, tagGround;
    Rigidbody2D myBody;

    //Collectibles
    public int keys;

    //float fuel, nextFuelRegen;

    //GroundCheck _shortcutFromPlayerControllerToGroundCheck;

    void Start()
    {
        myBody = this.GetComponent<Rigidbody2D>();//Unity 5+
        //myTrans = this.transform;
        //_shortcutFromPlayerControllerToGroundCheck = gameObject.GetComponentInChildren<GroundCheck>();
        //fuel = maxFuel;
        health = startingHealth;

    }

    void FixedUpdate()
    {
        //Debug.Log(fuel);
        //if (Input.GetButton("Jump"))
        //    Jump();
        //if (Input.GetButton("Jump") && fuel > 0)
        //{
        //    Move(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"), boostedMoveSpeed);
        //    fuel -= fuelLossRate;
        //    nextFuelRegen = Time.time + fuelRegenDelay;

        //    //acceleration = moveSpeed * 200;
        //}
        //else
        //{
        //    if(fuel <= 0)
        //    {
        //        myBody.velocity = new Vector2(0f, 0f);

        //    }
            Move(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"), moveSpeed);
        //    if (fuel < maxFuel && Time.time > nextFuelRegen)
        //        fuel += fuelRegenRate;

        //}
        if (health <= 0)
            SceneManager.LoadScene(0);

        healthText.GetComponent<UnityEngine.UI.Text>().text = "Health:  " + health.ToString();
        scoreText.GetComponent<UnityEngine.UI.Text>().text = "Score:  " + score.ToString();

    }

    void Move(float horizontalInput, float verticalInput, float speed)
    {
        
        Vector2 moveVel = myBody.velocity;
        moveVel.x = Mathf.Lerp(0, horizontalInput * speed * 10f, 0.8f);
        moveVel.y = Mathf.Lerp(0, verticalInput * speed * 10f, 0.8f);
        myBody.AddForce(moveVel.normalized * speed * 10f);


        //if (horizontalInput >= 0)
        //    transform.localRotation = Quaternion.Euler(0, 0, 0);
        //else
        //    transform.localRotation = Quaternion.Euler(0, 180, 0);



    }

    
    private void OnCollisionEnter2D(Collision2D other)
    {
        //Debug.Log(other.gameObject.tag);

        if (other.gameObject.tag == "enemy")
        {
            EnemyController enemyController = other.gameObject.GetComponent<EnemyController>();
            enemyController.enemySource.clip = enemyController.enemyAttackClip;
            enemyController.enemySource.Play();

            if (enemyController.enemyType == 0)
            {
                other.gameObject.GetComponentInParent<RoomController>().enemyCount -= 1;
                other.gameObject.GetComponent<Collider2D>().enabled = false;
                other.gameObject.GetComponent<SpriteRenderer>().enabled = false;
                foreach (Transform t in other.gameObject.transform)
                    Destroy(t.gameObject);
            }
            health -= 1;


        }
    }


}