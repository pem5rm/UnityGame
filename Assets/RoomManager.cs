using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomManager : MonoBehaviour {

    public int numRooms;
    public GameObject room;

    ArrayList rooms;
    ArrayList roomDoors;
    ArrayList doors;
    //int maxRow, minRow, maxCol, minCol;

    // Use this for initialization
    void Start () {
        rooms = new ArrayList {"0,0"};



        for (int i = 0; i < numRooms; i++)
        {
            int randomRoom = Random.Range(0, rooms.Count - 1);
            int randomDirection = Random.Range(0, 3);
            int[] newRoom = new int[2];

            if(randomDirection == 0)
            {
                newRoom[0] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[0]);
                newRoom[1] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[1]) + 1;
            }
            else if (randomDirection == 1)
            {
                newRoom[0] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[0]);
                newRoom[1] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[1]) - 1;
            }
            else if (randomDirection == 2)
            {
                newRoom[0] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[0]) + 1;
                newRoom[1] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[1]);
            }
            if (randomDirection == 3)
            {
                newRoom[0] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[0]) - 1;
                newRoom[1] = System.Int32.Parse(rooms[randomRoom].ToString().Split(',')[1]);
            }

            if (!InArrayList(rooms, newRoom[0].ToString() + "," + newRoom[1].ToString()))
                rooms.Add(newRoom[0].ToString() + "," + newRoom[1].ToString());
            else
                i -= 1;

        }
        //foreach(string room in rooms)
        //    Debug.Log(room);

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


        for(int i = 0; i < numRooms + 1; i++)
        {
            GameObject roomPrefab = Instantiate(room) as GameObject;
            roomPrefab.transform.position = new Vector2(System.Int32.Parse(rooms[i].ToString().Split(',')[0]) * 40, System.Int32.Parse(rooms[i].ToString().Split(',')[1]) * 23.5f);
            ArrayList doors = roomDoors[i] as ArrayList;
            foreach(object door in doors) {
                string doorString = door as string;
                if(doorString.Equals("U"))
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallUp", "DoorUp"));
                else if (doorString.Equals("D"))
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallDown", "DoorDown"));
                else if (doorString.Equals("L"))
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallLeft", "DoorLeft"));
                else if (doorString.Equals("R"))
                    Destroy(roomPrefab.GetComponent<RoomController>().GetDoor("WallRight", "DoorRight"));
            }
        }



    }

    // Update is called once per frame
    void Update () {
		
	}

    bool InArrayList(ArrayList arrayList, string myString)
    {
        foreach (string s in arrayList)
            if (s.Equals(myString))
                return true;
        return false;
    }
}
