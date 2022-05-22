using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public ObjectManager objectManager;
    public string[] enemyObjs;

    public Transform[] spawnPoints;
    public Transform bosspoint;

    public float maxSpawnDelay;
    public float curSpawnDelay;
    public GameObject player;
    public GameObject explosion;
    public Text scoreText;
    public Image[] lifeImage;
    public Image[] boomImage;
    public int curenemycount;
    public int midenemycount;
    public int maxenemycount;
    public int curbossA_count;
    public int maxbossA_count;
    public int curbossB_count;
    public int maxbossB_count;
    public bool BossAdie;
    public bool BossBdie;

    void Awake()
    {
        enemyObjs = new string[] {"EnemyS", "EnemyM", "EnemyL", "BossA", "BossB"};
        curbossA_count = 0;
        curbossB_count = 0;
        curenemycount = 0;
        BossAdie = false;
        BossBdie = false;
    }
    void Update()
    {
        curSpawnDelay += Time.deltaTime;
        
        if(curSpawnDelay > maxSpawnDelay) {
            SpawnEnemy();
            maxSpawnDelay = Random.Range(0.5f,3f);
            curSpawnDelay = 0;
        }
        
        Player playerLogic = player.GetComponent<Player>();
        scoreText.text = string.Format("SCORE : {0:n0}", playerLogic.score);
    }
    public void SpawnEnemy()
    {   
        if(curenemycount < midenemycount)
        {
            int ranEnemy = Random.Range(0, 2);
            int ranPoint = Random.Range(0, 5);
            GameObject enemy = objectManager.MakeObj(enemyObjs[ranEnemy]);
            enemy.transform.position = spawnPoints[ranPoint].position;

            Rigidbody2D rigid = enemy.GetComponent<Rigidbody2D>();
            Enemy enemyLogic = enemy.GetComponent<Enemy>();
            enemyLogic.player = player;
            enemyLogic.gameManager = this;
            enemyLogic.objectManager = objectManager;
            curenemycount++;
        }
        else if(curenemycount == midenemycount)
        {
            if(curbossA_count == maxbossA_count)
                return;
            else
            {
                GameObject A = objectManager.MakeObj("BossA");
                A.transform.position = bosspoint.position;
                Rigidbody2D rigid = A.GetComponent<Rigidbody2D>();
                Enemy enemyLogic = A.GetComponent<Enemy>();
                enemyLogic.player = player;
                enemyLogic.gameManager = this;
                enemyLogic.objectManager = objectManager;
                curbossA_count++; 
            }
        }
        
        else if (curenemycount > midenemycount && curenemycount < maxenemycount)
        {
            BossAdie = false;
            int ranEnemy = Random.Range(0, 3);
            int ranPoint = Random.Range(0, 5);
            GameObject enemy = objectManager.MakeObj(enemyObjs[ranEnemy]);
            enemy.transform.position = spawnPoints[ranPoint].position;

            Rigidbody2D rigid = enemy.GetComponent<Rigidbody2D>();
            Enemy enemyLogic = enemy.GetComponent<Enemy>();
            enemyLogic.player = player;
            enemyLogic.gameManager = this;
            enemyLogic.objectManager = objectManager;
            curenemycount++;
        }
        else if(curenemycount == maxenemycount)
        {
            if(curbossB_count == maxbossB_count)
                return;
            else
            {
                GameObject B = objectManager.MakeObj("BossB");
                B.transform.position = bosspoint.position;
                Rigidbody2D rigid = B.GetComponent<Rigidbody2D>();
                Enemy enemyLogic = B.GetComponent<Enemy>();
                enemyLogic.player = player;
                enemyLogic.gameManager = this;
                enemyLogic.objectManager = objectManager;
                curbossB_count++;
            }
        }    
    }
    public void CallExplosion(Vector3 pos, string type)
    {
        GameObject explosion = objectManager.MakeObj("explosion");
        Explosion explosionLogic = explosion.GetComponent<Explosion>();

        explosion.transform.position = pos;
        explosionLogic.StartExplosion(type);
    }
    public void UpdateLifeIcon(int life){
        for(int index=0; index < 5; index++){
            lifeImage[index].color = new Color(1,1,1,0);
        }
        for(int index=0; index < life; index++){
            lifeImage[index].color = new Color(1,1,1,1);
        }

    }
    public void UpdateBoomIcon(int boom){
        for(int index=0; index < 3; index++){
            boomImage[index].color = new Color(1,1,1,0);
        }
        for(int index=0; index < boom; index++){
            boomImage[index].color = new Color(1,1,1,1);
        }
    }
    public void RespawnPlayer(){
        Invoke("RespawnPlayerExe", 2f);
        
    }
    void RespawnPlayerExe(){
        player.transform.position = Vector3.left * 5;
        player.SetActive(true);
        Player playerLogic = player.GetComponent<Player>();
        playerLogic.isHit = false;
    }
}
    