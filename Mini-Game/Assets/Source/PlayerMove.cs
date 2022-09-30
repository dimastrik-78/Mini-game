using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove
{
    public void Move(Rigidbody2D RB, float Speed)
    {
        RB.velocity = Input.GetAxis("Horizontal") * RB.transform.transform.right * Speed;
    }
}
