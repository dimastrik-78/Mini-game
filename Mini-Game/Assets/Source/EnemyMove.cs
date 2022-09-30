using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMove
{
    public void Move(Rigidbody2D Rb, int walk)
    {
        Rb.position = new Vector2(Rb.position.x, Rb.position.y - walk);
    }
}
