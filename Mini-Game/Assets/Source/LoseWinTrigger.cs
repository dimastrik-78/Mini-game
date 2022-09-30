using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoseWinTrigger : MonoBehaviour
{
    public Ui UI;
    
    void Start()
    {
        
    }
    private void OnTriggerEnter2D(Collider2D other) // Проигрыш
    {
        if (other.gameObject.layer == 3)
        {
            UI.LoseScreen();
        }
    }
}
