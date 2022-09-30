using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    private Ui _ui;
    private EnemyMove _enemyMove;
    private DestroyObj _enemyDestroy;
    private SpawnEnemy _spawnEnemy;

    [SerializeField] private GameObject _gameObject;

    [SerializeField] private int _givePoint;
    [SerializeField] private float _timeMove; // Время для передвежение
    [SerializeField] private int _heal;
    [SerializeField] private int _walk;
    
    private float _timerMove; // Отслеживаемое время для передвижения
    void Start()
    {
        _ui = GameObject.FindObjectOfType<Ui>();
        _enemyMove = new EnemyMove();
        _enemyDestroy = new DestroyObj();
            
        _timerMove = _timeMove;
    }

    void Update()
    {
        _timerMove -= Time.deltaTime;
        if (_timerMove < 0)
        {
            _enemyMove.Move(_gameObject.GetComponent<Rigidbody2D>(), _walk);
            
            _timerMove = _timeMove;
        }
    }

    private void OnCollisionEnter2D(Collision2D col) // Жизнь врага
    {
        if (col.gameObject.layer == 6)
        {
            if (_heal == 0)
            {
                _ui.UpdateText(_givePoint);
                _enemyDestroy.DestroyObject(_gameObject);
                
                _spawnEnemy = GameObject.FindObjectOfType<SpawnEnemy>();
                _spawnEnemy.UpdateQuantityEnemy();
            }

            _heal--;
        }
    }

    private void OnTriggerEnter2D(Collider2D other) // Проигрыш
    {
        if (other.gameObject.layer == 7)
        {
            _ui.LoseScreen();
        }
    }
}
