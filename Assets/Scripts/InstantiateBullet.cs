using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstantiateBullet : MonoBehaviour {

    public GameObject bullet;
    public float bulletSpeed;
    public float rateOfFire;

    public AudioClip laserClip;
    public AudioSource laserSource;


    private float lastShot = 0.0f;

	// Use this for initialization
	void Start () {
        laserSource.clip = laserClip;
	}
	
	// Update is called once per frame
	void FixedUpdate () {

        if (Input.GetAxis("Fire1") > 0f && (Time.time > rateOfFire + lastShot))
        {
            InstantiateObject();
            laserSource.Play();
            lastShot = Time.time;
        }

    }


    private void InstantiateObject()
    {
        var x = Input.GetAxis("Horizontal2");
        var y = Input.GetAxis("Vertical2");
        GameObject bulletPrefab = Instantiate(bullet) as GameObject;
        bulletPrefab.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - 2);
        bulletPrefab.GetComponent<Rigidbody2D>().velocity = transform.up * bulletSpeed;

    }
}
