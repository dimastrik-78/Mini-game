using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

public class SpawnEnemy : MonoBehaviour
{
    private SpawnObj SpawnObj;
    
    public Ui Ui;
    
    [SerializeField] private GameObject PrefabEnemy;
    [SerializeField] private Transform[] _positionSpawnEnemy;
    
    [SerializeField] private float _timeStartWave; // Начальное время
    [SerializeField] private int _quantitySpawnEnemy;

    private int _quantityEnemy;
    private float _timerStartWave; // Изменяемое время для спавна врагов
    void Start()
    {
        SpawnObj = new SpawnObj();

        _quantityEnemy = _quantitySpawnEnemy;
        _timerStartWave = _timeStartWave;
    }

    void Update()
    {
        _timerStartWave -= Time.deltaTime;
        if (_timerStartWave < 0)
        {
            SpawnSelection();
            
            _timerStartWave = _timeStartWave;
        }
    }

    public void UpdateQuantityEnemy()
    {
        _quantityEnemy--;
        if (_quantityEnemy <= 0)
        {
            Ui.WinScreen();
        }
    }
    
    private void SpawnSelection()
    {
        for (int i = 0; i < _positionSpawnEnemy.Length; i++)
        {
            System.Random ran = new System.Random();

            if (ran.Next(0, 2) == 1 && _quantitySpawnEnemy > 0)
            {
                SpawnObj.Spawn(PrefabEnemy, _positionSpawnEnemy[i]);
                
                _quantitySpawnEnemy--;
            }
        }
    }
}
