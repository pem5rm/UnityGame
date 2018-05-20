using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class PlayerController : MonoBehaviour
{
    public float moveSpeed;
    //public float moveSpeed, boostedMoveSpeed, maxFuel, fuelLossRate, fuelRegenRate, fuelRegenDelay;
    //public float acceleration, maxSpeed, dampening, zeroVelocityThreshold, jumpVelocity;
    //public LayerMask groundLayer;



    //Transform myTrans, tagGround;
    Rigidbody2D myBody;

    //float fuel, nextFuelRegen;

    //GroundCheck _shortcutFromPlayerControllerToGroundCheck;

    void Start()
    {
        myBody = this.GetComponent<Rigidbody2D>();//Unity 5+
        //myTrans = this.transform;
        //_shortcutFromPlayerControllerToGroundCheck = gameObject.GetComponentInChildren<GroundCheck>();
        //fuel = maxFuel;

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
    }

    void Move(float horizontalInput, float verticalInput, float speed)
    {
        
        Vector2 moveVel = myBody.velocity;
        moveVel.x = Mathf.Lerp(0, horizontalInput * speed * 10f, 0.8f);
        moveVel.y = Mathf.Lerp(0, verticalInput * speed * 10f, 0.8f);
        myBody.AddForce(moveVel);


        if (horizontalInput >= 0)
            transform.localRotation = Quaternion.Euler(0, 0, 0);
        else
            transform.localRotation = Quaternion.Euler(0, 180, 0);



    }
    
}