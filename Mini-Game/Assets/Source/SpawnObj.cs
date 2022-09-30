using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnObj
{
    public void Spawn(GameObject Rb, Transform Position)
    {
        GameObject obj = GameObject.Instantiate(Rb, Position);
        obj.transform.SetParent(null);  
        obj.transform.position = Position.position;
    }
}
