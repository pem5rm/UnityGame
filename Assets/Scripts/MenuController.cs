using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuController : MonoBehaviour {

    public GameObject canvas;

	// Use this for initialization
	void Start () {
        canvas.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetButtonDown("Menu"))
        {
            Debug.Log("Menu Pressed");
            if (!canvas.activeSelf)
            {

                Time.timeScale = 0;
                canvas.SetActive(true);
                
            }

            else if (canvas.activeSelf)
            {
                Time.timeScale = 1;
                canvas.SetActive(false);

            }
        }
	}

    public void Resume()
    {
        Time.timeScale = 1;
        canvas.SetActive(false);
    }



}
