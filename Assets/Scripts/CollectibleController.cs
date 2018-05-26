using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectibleController : MonoBehaviour
{

    public AudioSource collectibleSource;

    bool collected;
    GameObject canvasGame, keyImage;

    // Use this for initialization
    void Start()
    {
        canvasGame = GameObject.Find("Canvas-Game");
        foreach (Transform t in canvasGame.transform)
        {
            foreach (Transform s in t)
            {
                if (s.name == "KeyImage")
                    keyImage = s.gameObject;
            }
        }
        Debug.Log(keyImage.name);
    }

    // Update is called once per frame
    void Update()
    {
        if (collected && !collectibleSource.isPlaying)
        {
            Destroy(this.gameObject);
        }


    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        Debug.Log(other.gameObject.tag);
        if (other.gameObject.tag == "Player")
        {
            other.gameObject.GetComponentInParent<PlayerController>().keys += 1;
            collectibleSource.Play();
            GetComponent<Collider2D>().enabled = false;
            GetComponent<SpriteRenderer>().enabled = false;
            collected = true;
            keyImage.SetActive(true);
        }
    }


}
