using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] private Transform _position;
    
    [SerializeField] private GameObject _prefBullet;
    
    [SerializeField] private float _speed;

    [SerializeField] private Rigidbody2D _rb;
    
    private PlayerInput _playerInput;
    
    void Start()
    {
        _playerInput = new PlayerInput(_rb, _speed);
    }

    void Update()
    {
        _playerInput.Update(_prefBullet, _position);
    }
}
