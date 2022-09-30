using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerInput
{
    private float Speed;

    private Rigidbody2D RB;
    public PlayerInput(Rigidbody2D _rb, float _speed)
    {
        RB = _rb;
        Speed = _speed;
    }

    private PlayerMove _move;
    private SpawnObj _fire;

    private float _timeCanShoot = 0.2f; // Время для стрельбы, чтобы не спамить
    public void Update(GameObject Bullet, Transform Position)
    {
        if (Input.GetAxis("Horizontal") != 0)
        {
            _move = new PlayerMove();
            _move.Move(RB, Speed);
        }

        _timeCanShoot -= Time.deltaTime;
        if (Input.GetKey(KeyCode.Mouse0) && _timeCanShoot < 0)
        {
            _fire = new SpawnObj();
            _fire.Spawn(Bullet, Position);

            _timeCanShoot = 0.2f;
        }

        if (Input.GetKey(KeyCode.R))
        {
            Time.timeScale = 1;
            SceneManager.LoadScene(0);
        }
    }
}
