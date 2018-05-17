using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class PlayerController : MonoBehaviour
{
    public float speed = 10, jumpVelocity = 10;
    Transform myTrans, tagGround;
    Rigidbody2D myBody;
    //bool isGrounded = false;
    float hInput = 0;
    public LayerMask groundLayer;

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
        Move(Input.GetAxisRaw("Horizontal"));
        if (Input.GetButton("Jump"))
            Jump();
    }

    void Move(float horizonalInput)
    {

        Vector2 moveVel = myBody.velocity;
        moveVel.x = horizonalInput * speed;
        myBody.velocity = moveVel;
    }

    public void Jump()
    {

        if (_shortcutFromPlayerControllerToGroundCheck.isGrounded)
        {
            myBody.velocity = new Vector2(myBody.velocity.x, 0);
            myBody.velocity += jumpVelocity * Vector2.up;
            _shortcutFromPlayerControllerToGroundCheck.isGrounded = false;
        }


    }

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
