using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    private DestroyObj _destroyObj;
    
    [SerializeField] float _bulletSpeed;
    
    [SerializeField] GameObject _gameObject;
    
    private float _lifeTime = 2;

    private void Start()
    {
        _destroyObj = new DestroyObj();
        _gameObject.GetComponent<Rigidbody2D>().AddForce(transform.up * _bulletSpeed, ForceMode2D.Impulse);
    }

    private void Update()
    {
        _lifeTime -= Time.deltaTime;
        if (_lifeTime <= 0)
        {
            _destroyObj.DestroyObject(_gameObject);
        }
    }

    private void OnCollisionEnter2D(Collision2D collision2D)
    {
        if (collision2D.gameObject.layer == 3)
        {
            _destroyObj.DestroyObject(_gameObject);
        }
    }
}
