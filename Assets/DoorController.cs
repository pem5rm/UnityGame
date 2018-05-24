using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorController : MonoBehaviour {
    public int distance, currentDistance;
    public string direction;
    public bool openDoor, doorIsClosed = false;

    public AudioClip doorClip;
    public AudioSource doorSource;


    bool closeClipPlayed = false, openClipPlayed = false;
    // Use this for initialization
    void Start () {
        doorSource.clip = doorClip;
        currentDistance = distance;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
        if (!openDoor && currentDistance > 0)
        {
            if (direction == "U")
                transform.position = new Vector2(transform.position.x, transform.position.y - 0.05f);
            else if (direction == "D")
                transform.position = new Vector2(transform.position.x, transform.position.y + 0.05f);
            if (direction == "L")
                transform.position = new Vector2(transform.position.x + 0.05f, transform.position.y);
            if (direction == "R")
                transform.position = new Vector2(transform.position.x - 0.05f, transform.position.y);

            currentDistance -= 1;

            if (!openClipPlayed)
            {
                doorSource.Play();
                openClipPlayed = true;
            }

            doorIsClosed = false;
        }

        else if (openDoor && currentDistance < distance)
        {
            if (direction == "U")
                transform.position = new Vector2(transform.position.x, transform.position.y + 0.05f);
            else if (direction == "D")
                transform.position = new Vector2(transform.position.x, transform.position.y - 0.05f);
            if (direction == "L")
                transform.position = new Vector2(transform.position.x - 0.05f, transform.position.y);
            if (direction == "R")
                transform.position = new Vector2(transform.position.x + 0.05f, transform.position.y);

            currentDistance += 1;

            if (!closeClipPlayed)
            {
                doorSource.Play();
                closeClipPlayed = true;
            }
        }
        else if (openDoor && !doorSource.isPlaying)
        {
            this.gameObject.SetActive(false);
        }


        if (currentDistance <= 0)
            doorIsClosed = true;
    }
}
