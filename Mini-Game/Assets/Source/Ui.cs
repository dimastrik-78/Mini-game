using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Ui : MonoBehaviour
{
    [SerializeField] private Text _text;
    [SerializeField] private GameObject WinPanel, LosePanel;

    private int _point;

    public void WinScreen()
    {
        WinPanel.SetActive(true);
        
        Time.timeScale = 0;
    }
    public void LoseScreen()
    {
        LosePanel.SetActive(true);
        
        Time.timeScale = 0;
    }
    public void UpdateText(int GivePoint)
    {
        _point += GivePoint;
        _text.text = $"Point: {_point}";
    }
}
