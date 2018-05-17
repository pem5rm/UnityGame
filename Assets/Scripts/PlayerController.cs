using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class PlayerController : MonoBehaviour
{
    public float moveSpeed;
    //public float acceleration, maxSpeed, dampening, zeroVelocityThreshold, jumpVelocity;
    public LayerMask groundLayer;



    Transform myTrans, tagGround;
    Rigidbody2D myBody;
    //bool isGrounded = false;

    float hInput = 0, acceleration;

    GroundCheck _shortcutFromPlayerControllerToGroundCheck;

    void Start()
    {
        myBody = this.GetComponent<Rigidbody2D>();//Unity 5+
        myTrans = this.transform;
        _shortcutFromPlayerControllerToGroundCheck = gameObject.GetComponentInChildren<GroundCheck>();

    }

    void FixedUpdate()
    {
        //Debug.Log(isGrounded);
        Move(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
        //if (Input.GetButton("Jump"))
        //    Jump();
        if (Input.GetButton("Jump"))
        {
            acceleration = moveSpeed * 2;
        }
        else
        {
            acceleration = moveSpeed;
        }
    }

    //void FixedUpdate()
    //{
    //    curSpeed = acceleration;
    //    maxSpeed = curSpeed;

    //    // Move senteces
    //    myBody.velocity = new Vector2(Mathf.Lerp(0, Input.GetAxis("Horizontal") * curSpeed, 0.8f),
    //                                         Mathf.Lerp(0, Input.GetAxis("Vertical") * curSpeed, 0.8f));
    //}

    void Move(float horizonalInput, float verticalInput)
    {


        Vector2 moveVel = myBody.velocity;
        moveVel.x = Mathf.Lerp(0, horizonalInput * acceleration * 10f, 0.8f);
        moveVel.y = Mathf.Lerp(0, verticalInput * acceleration * 10f, 0.8f);
        if (myBody.velocity.magnitude < moveVel.magnitude)
            myBody.AddForce(moveVel);
        
        


        //Vector2 moveVel = myBody.velocity;


        //if (horizonalInput == 0)
        //{
        //    if (moveVel.x > zeroVelocityThreshold)
        //    {
        //        moveVel.x -= moveVel.x * dampening;
        //    }
        //    else if (moveVel.x < -zeroVelocityThreshold)
        //    {
        //        moveVel.x -= moveVel.x * dampening;
        //    }
        //    else
        //    {
        //        moveVel.x = Mathf.Lerp(0, moveVel.x, 0.8f);
        //    }
        //}
        //else
        //{

        //    float newX = moveVel.x + horizonalInput * acceleration;
        //    if (Mathf.Abs(myBody.velocity.x) < maxSpeed)
        //        moveVel.x = Mathf.Lerp(0, newX, 0.8f);
        //}

        //if (verticalInput == 0)
        //{
        //    if (moveVel.y > zeroVelocityThreshold)
        //    {
        //        moveVel.y -= moveVel.y * dampening;
        //    }
        //    else if (moveVel.y < -zeroVelocityThreshold)
        //    {
        //        moveVel.y -= moveVel.y * dampening;
        //    }
        //    else
        //    {
        //        moveVel.y = Mathf.Lerp(0, moveVel.y, 0.8f);
        //    }
        //}
        //else
        //{
        //    float newY = moveVel.y + verticalInput * acceleration;
        //    if (Mathf.Abs(myBody.velocity.y) < maxSpeed)
        //        moveVel.y = Mathf.Lerp(0, newY, 0.8f);
        //}
        // myBody.velocity = moveVel;
        //myBody.velocity = new Vector2(Mathf.Lerp(0, moveVel.x, 0.8f),
        //                              Mathf.Lerp(0, moveVel.y, 0.8f));

    }

    //public void Jump()
    //{

    //    if (_shortcutFromPlayerControllerToGroundCheck.isGrounded)
    //    {
    //        myBody.velocity = new Vector2(myBody.velocity.x, 0);
    //        myBody.velocity += jumpVelocity * Vector2.up;
    //        _shortcutFromPlayerControllerToGroundCheck.isGrounded = false;
    //    }


    //}

    public void StartMoving(float horizonalInput)
    {
        hInput = horizonalInput;
    }

    
    //void OnTriggerEnter2D(Collider2D other)
    //{
    //    Debug.Log(other.tag);
    //    if (other.tag == "ground")
    //    {

    //        isGrounded = true;

    //    }
    //}

    //private void OnTriggerExit2D(Collider2D other)
    //{
    //    if(other.tag == "ground")
    //    {
    //        isGrounded = false;
    //    }
    //}


}
