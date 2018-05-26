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
    GunController gunController;

	// Use this for initialization
	void Start () {
        laserSource.clip = laserClip;
        gunController = GetComponentInParent<GunController>();
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

        
        GameObject bulletPrefab = Instantiate(bullet) as GameObject;
        bulletPrefab.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - 2);
        //Debug.Log(gunController.x.ToString() + " "  + gunController.y.ToString());
        //if ((gunController.x != 0.0 || gunController.y != 0.0)) // && gunController.mousePos == null)
        //{
            //Debug.Log("test1");
            var angle = Mathf.Atan2(gunController.y, gunController.x) * Mathf.Rad2Deg;
            bulletPrefab.transform.rotation = Quaternion.AngleAxis(angle, Vector3.back);
        //}

        //else //if (gunController.mousePos == null)
        //{
        //    //Debug.Log("test2");
        //    bulletPrefab.transform.rotation = Quaternion.AngleAxis(0, Vector3.back);
        //}

        //Mouse controls
        //else {
        //    var dir = Input.mousePosition - gunController.mousePos;
        //    var angle1 = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        //    //Debug.Log(angle1);
        //    bulletPrefab.transform.rotation = Quaternion.AngleAxis(angle1, Vector3.forward);
        //}
        bulletPrefab.GetComponent<Rigidbody2D>().velocity = transform.up * bulletSpeed;

    }
}
