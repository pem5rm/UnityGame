using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuController : MonoBehaviour {

    public GameObject canvas;


    bool menuActive = false;
	// Use this for initialization
	void Start () {
        canvas.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetButtonDown("Menu"))
        {
            Debug.Log("Menu Pressed");


            if (canvas.activeSelf)
            {
                Time.timeScale = 1;
                canvas.SetActive(false);
                menuActive = false;

            }
            else
            {

                Time.timeScale = 0;
                canvas.SetActive(true);
                menuActive = true;



            }
        }

        if (menuActive && !canvas.activeSelf)
            canvas.SetActive(true);
	}

    public void Resume()
    {
        Time.timeScale = 1;
        canvas.SetActive(false);
    }



}
