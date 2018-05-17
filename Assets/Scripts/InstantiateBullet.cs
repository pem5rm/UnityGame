﻿using System.Collections;
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
        if (x != 0.0 || y != 0.0)
        {
            var angle = Mathf.Atan2(y, x) * Mathf.Rad2Deg;
            bulletPrefab.transform.rotation = Quaternion.AngleAxis(angle, Vector3.back);
        }

        else
        {
            bulletPrefab.transform.rotation = Quaternion.AngleAxis(0, Vector3.back);
        }
        bulletPrefab.GetComponent<Rigidbody2D>().velocity = transform.up * bulletSpeed;

    }
}
