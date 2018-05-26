using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomManager : MonoBehaviour {

    public int numRooms, minEnemiesPerRoom, maxEnemiesPerRoom;
    public GameObject room, barredDoorUp, barredDoorDown, barredDoorLeft, barredDoorRight;
    public GameObject lockedDoorUp, lockedDoorDown, lockedDoorLeft, lockedDoorRight;

    ArrayList rooms;
    ArrayList roomDoors;
    ArrayList doors;
    int minRow, maxRow, minCol, maxCol;
    int startingRoomIndex, endingRoomIndex, keyRoomIndex;
    GameObject player;

    // Use this for initialization
    void Start () {
        player = GameObject.Find("Player");


        rooms = new ArrayList {"0,0"};


        //Generate room map in 2D array by randomly choosing a room and one of 4 directions from that room to add a new room each time
        //Also, keep track of max/min of cols and rows
        for (int i = 0; i < numRooms; i++)
        {
            int randomRoom = Random.Range(0, rooms.Count - 1);
            int randomDirection = Random.Range(0, 4);
            int[] newRoom = new int[2];

            if(randomDirection == 0)
            {
                newRoom[0] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[0]);
                newRoom[1] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[1]) + 1;
                if (newRoom[1] > maxRow)
                    maxRow = newRoom[1];
            }
            else if (randomDirection == 1)
            {
                newRoom[0] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[0]);
                newRoom[1] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[1]) - 1;
                if (newRoom[1] < minRow)
                    minRow = newRoom[1];
            }
            else if (randomDirection == 2)
            {
                newRoom[0] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[0]) + 1;
                newRoom[1] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[1]);
                if (newRoom[0] > maxCol)
                    maxCol = newRoom[0];
            }
            else if (randomDirection == 3)
            {
                newRoom[0] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[0]) - 1;
                newRoom[1] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[1]);
                if (newRoom[0] < minCol)
                    minCol = newRoom[0];
            }

            if (!InArrayList(rooms, newRoom[0].ToString() + "," + newRoom[1].ToString()))
                rooms.Add(newRoom[0].ToString() + "," + newRoom[1].ToString());
            else
                i -= 1;

        }
        Debug.Log("minRow " + minRow + "; maxRow " + maxRow + "; minCol " + minCol + "; maxCol " + maxCol);
        //foreach(string room in rooms)
        //    Debug.Log(room);



        //Iterate through the 2D array of rooms and for each room, figure out where it should have doors, storing this in a 2D array list 
        //where the position of each outer item (a room) matches the position of that room in the 2D array (room map) created above
        roomDoors = new ArrayList();
        foreach (string room in rooms)
        {
            doors = new ArrayList();
            foreach (string otherRoom in rooms)
            {
                if (otherRoom.ToString().Split(',')[0].Equals(room.ToString().Split(',')[0]) && (System.Int32.Parse(otherRoom.ToString().Split(',')[1]) - 1).ToString().Equals(room.ToString().Split(',')[1]))
                    doors.Add("U");
                if (otherRoom.ToString().Split(',')[0].Equals(room.ToString().Split(',')[0]) && (System.Int32.Parse(otherRoom.ToString().Split(',')[1]) + 1).ToString().Equals(room.ToString().Split(',')[1]))
                    doors.Add("D");
                if ((System.Int32.Parse(otherRoom.ToString().Split(',')[0]) + 1).ToString().Equals(room.ToString().Split(',')[0]) && otherRoom.ToString().Split(',')[1].Equals(room.ToString().Split(',')[1]))
                    doors.Add("L");
                if ((System.Int32.Parse(otherRoom.ToString().Split(',')[0]) - 1).ToString().Equals(room.ToString().Split(',')[0]) && otherRoom.ToString().Split(',')[1].Equals(room.ToString().Split(',')[1]))
                    doors.Add("R");
            }
            roomDoors.Add(doors);
        }

        //foreach (ArrayList room in roomDoors)
        //{
        //    string debugString = "";
        //    foreach (string door in room)
        //        debugString += door;
        //    Debug.Log(debugString);

        //}

        //Choose a random starting room that has exactly 1 door by randomly trying some arbitrary number of rooms (20 here)
        //If a valid room is not found, let starting room be room at index 0
        //Do the same thing for ending room (with lock)
        //Choose a random room to hold the key
        bool startingRoomChosen = false;
        bool endingRoomChosen = false;
        bool keyRoomChosen = false;
        ArrayList randomRoomDoors;
        int randomRoomIndex;
        for (int i = 0; i < numRooms * 4; i++)
        {
            randomRoomIndex = Random.Range(0, numRooms + 1);
            randomRoomDoors = roomDoors[randomRoomIndex] as ArrayList;
            //Debug.Log(randomRoomIndex + " , " + randomRoomDoors.Capacity);
            if ((randomRoomDoors.Count == 1 || randomRoomDoors.Count == 2) && !startingRoomChosen)
            {
                startingRoomIndex = randomRoomIndex;
                startingRoomChosen = true;

            }
            else if ((randomRoomDoors.Count == 1 || randomRoomDoors.Count == 2) && !endingRoomChosen)
            {
                endingRoomIndex = randomRoomIndex;
                endingRoomChosen = true;

            }
            else if (!keyRoomChosen)
            {
                keyRoomIndex = randomRoomIndex;
                keyRoomChosen = true;
            }
        }
        if (!startingRoomChosen)
            startingRoomIndex = 0;
        if (!endingRoomChosen)
            endingRoomIndex = startingRoomIndex;
        if (!keyRoomChosen)
            keyRoomIndex = 0;






        //Actually instantiate the rooms with appropriate doors and a random rock formation (or no rock formation)
        for (int i = 0; i < numRooms + 1; i++)
        {
            GameObject roomPrefab = Instantiate(room) as GameObject;
            roomPrefab.transform.position = new Vector2(System.Int32.Parse(rooms[i].ToString().Split(',')[0]) * 40, System.Int32.Parse(rooms[i].ToString().Split(',')[1]) * 23.5f);
            ArrayList doors = roomDoors[i] as ArrayList;
            foreach(object door in doors) {
                string doorString = door as string;
                if (doorString.Equals("U"))
                {
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallUp", "DoorUp"));
                    GameObject doorPrefab = Instantiate(barredDoorUp, roomPrefab.GetComponent<Transform>()) as GameObject;
                    doorPrefab.transform.position = new Vector2(roomPrefab.transform.position.x, roomPrefab.transform.position.y + 14);
                    doorPrefab.SetActive(false);
                }
                else if (doorString.Equals("D"))
                {
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallDown", "DoorDown"));
                    GameObject doorPrefab = Instantiate(barredDoorDown, roomPrefab.GetComponent<Transform>()) as GameObject;
                    doorPrefab.transform.position = new Vector2(roomPrefab.transform.position.x, roomPrefab.transform.position.y - 14);
                    doorPrefab.SetActive(false);
                }
                else if (doorString.Equals("L"))
                {
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallLeft", "DoorLeft"));
                    GameObject doorPrefab = Instantiate(barredDoorLeft, roomPrefab.GetComponent<Transform>()) as GameObject;
                    doorPrefab.transform.position = new Vector2(roomPrefab.transform.position.x - 22, roomPrefab.transform.position.y);
                    doorPrefab.SetActive(false);
                }
                else if (doorString.Equals("R"))
                {
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallRight", "DoorRight"));
                    GameObject doorPrefab = Instantiate(barredDoorRight, roomPrefab.GetComponent<Transform>()) as GameObject;
                    doorPrefab.transform.position = new Vector2(roomPrefab.transform.position.x + 22, roomPrefab.transform.position.y);
                    doorPrefab.SetActive(false);
                }
            }

            //if this is not the starting room, spawn some random amount of enemies and spawn a random rock formation (see RoomController for these methods)
            if (i == startingRoomIndex)
                player.transform.position = roomPrefab.transform.position;
            else { 
                roomPrefab.GetComponent<RoomController>().SpawnBrickFormation(-1);
                roomPrefab.GetComponent<RoomController>().SpawnEnemies(Random.Range(minEnemiesPerRoom, maxEnemiesPerRoom));
            }


            //Add the key if this is the key room
            if (i == keyRoomIndex)
            {
                roomPrefab.GetComponent<RoomController>().SpawnKey();
            }


            //Add the locked door (in order of preference U,D,L,R,) if there isnt already a door there; may change this to random direction later
            if (i == endingRoomIndex)
            {
                if(!InArrayList(doors, "U"))
                {
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallUp", "DoorUp"));
                    GameObject doorPrefab = Instantiate(lockedDoorUp, roomPrefab.GetComponent<Transform>()) as GameObject;
                    doorPrefab.transform.position = new Vector2(roomPrefab.transform.position.x, roomPrefab.transform.position.y + 10);
                }
                else if (!InArrayList(doors, "D"))
                {
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallDown", "DoorDown"));
                    GameObject doorPrefab = Instantiate(lockedDoorDown, roomPrefab.GetComponent<Transform>()) as GameObject;
                    doorPrefab.transform.position = new Vector2(roomPrefab.transform.position.x, roomPrefab.transform.position.y - 10);
                }
                else if (!InArrayList(doors, "L"))
                {
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallLeft", "DoorLeft"));
                    GameObject doorPrefab = Instantiate(lockedDoorLeft, roomPrefab.GetComponent<Transform>()) as GameObject;
                    doorPrefab.transform.position = new Vector2(roomPrefab.transform.position.x - 18, roomPrefab.transform.position.y);
                }
                else
                {
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallRight", "DoorRight"));
                    GameObject doorPrefab = Instantiate(lockedDoorRight, roomPrefab.GetComponent<Transform>()) as GameObject;
                    doorPrefab.transform.position = new Vector2(roomPrefab.transform.position.x + 18, roomPrefab.transform.position.y);
                }
            }



        }



    }

    // Update is called once per frame
    void Update () {
		
	}

    //Takes in an arraylist of strings and a string and returns true if an equivalent strinf is in the arraylist, otherwise returns false
    bool InArrayList(ArrayList arrayList, string myString)
    {
        foreach (string s in arrayList)
            if (s.Equals(myString))
                return true;
        return false;
    }
}
