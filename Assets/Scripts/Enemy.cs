using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Enemy : MonoBehaviour
{
    public string enemyName;
    public float speed;
    public int health;
    public int Maxhealth;
    public int enemyscore;
    public int patternIndex;
    public int curPatternCount;
    
    public int[] maxPatternCount;
    public float maxShotDelay;
    public float curShotDelay;
    public bool hit;

    
    public GameObject bulletObjA;
    public GameObject bulletBossA;
    public GameObject bulletBossB;
    public GameObject itempower;
    public GameObject itemlife;
    public GameObject itemshield;
    public GameObject itemboom;
    public GameObject player;
    public GameManager gameManager;
    public ObjectManager objectManager;
    SpriteRenderer spriteRenderer;
    

    Rigidbody2D rigid;

    void Awake(){
        spriteRenderer = GetComponent<SpriteRenderer>();
        rigid = GetComponent<Rigidbody2D>();
        hit = false;
    }
    void OnEnable() {
        switch (enemyName) {
            case "BossA":
                rigid.velocity = Vector2.left * speed;
                health = (int)Maxhealth;
                Invoke("Stop", 5);
                break;
            case "BossB":
                rigid.velocity = Vector2.left * speed;
                health = (int)Maxhealth;
                Invoke("Stop", 5);
            break;
            case "L":
                rigid.velocity = Vector2.left * speed;
                health = (int)Maxhealth;
            break;
            case "M":
                rigid.velocity = Vector2.left * speed;
                health = (int)Maxhealth;
            break;
            case "S":
                rigid.velocity = Vector2.left * speed;
                health = (int)Maxhealth;
            break;
        }
    }
    void Stop()
    {
        if(!gameObject.activeSelf)
            return;

        Rigidbody2D rig = GetComponent<Rigidbody2D>();
        rig.velocity = Vector2.zero;

        Invoke("Think", 2);
    }
    void Think()
    {
        if(enemyName == "BossA")
            patternIndex = patternIndex == 1 ? 0 : patternIndex + 1;
        else if(enemyName == "BossB")
            patternIndex = patternIndex == 3 ? 0 : patternIndex + 1;
        
        curPatternCount = 0;

        switch (patternIndex)
        {
            case 0:
                FireFoward();
                break;
            case 1:
                FireShot();
                break;
            case 2:
                FireArc();
                break;
            case 3:
                FireAround();
                break;
        }

    }

    void FireFoward()
    {   
        if(health <= 0)
            return;

        GameObject bulletU = objectManager.MakeObj("BossbulletA");
        bulletU.transform.position = transform.position + Vector3.up * 1f;
        GameObject bulletD = objectManager.MakeObj("BossbulletA");
        bulletD.transform.position = transform.position + Vector3.down * 1f;
        GameObject bulletUU = objectManager.MakeObj("BossbulletA");
        bulletUU.transform.position = transform.position + Vector3.up * 2f;
        GameObject bulletDD = objectManager.MakeObj("BossbulletA");
        bulletDD.transform.position = transform.position + Vector3.down * 2f;
        
        Rigidbody2D rigU = bulletU.GetComponent<Rigidbody2D>();
        Rigidbody2D rigD = bulletD.GetComponent<Rigidbody2D>();
        Rigidbody2D rigUU = bulletUU.GetComponent<Rigidbody2D>();
        Rigidbody2D rigDD = bulletDD.GetComponent<Rigidbody2D>();

        rigU.AddForce(Vector2.left * 7, ForceMode2D.Impulse);
        rigD.AddForce(Vector2.left * 7, ForceMode2D.Impulse);
        rigUU.AddForce(Vector2.left * 7, ForceMode2D.Impulse);
        rigDD.AddForce(Vector2.left * 7, ForceMode2D.Impulse);

        curPatternCount++;

        if(curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireFoward", 2);
        else
            Invoke("Think", 3);
    }

    

    void FireShot()
    {
        if(health <= 0)
        return;

        for(int index=0; index < 7; index++)
        {
            GameObject bulletS = objectManager.MakeObj("BossbulletA");
            bulletS.transform.position = new Vector3(Random.Range(-3f, 2f), Random.Range(-3f,3f));
            Rigidbody2D rigS = bulletS.GetComponent<Rigidbody2D>();
            rigS.AddForce(Vector2.left * 5, ForceMode2D.Impulse);
        }

        curPatternCount++;

        if(curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireShot", 3.5f);
        else
            Invoke("Think", 3);
        
    }
    void FireArc()
    {
        if(health <= 0)
        return;

        GameObject bulletArc = objectManager.MakeObj("BossbulletB");
        bulletArc.transform.position = transform.position;
        Rigidbody2D rigidArc = bulletArc.GetComponent<Rigidbody2D>();

        Vector2 dirVecArc = new Vector2(-1, Mathf.Cos(Mathf.PI * 12 * curPatternCount/maxPatternCount[patternIndex]));
        rigidArc.AddForce(dirVecArc.normalized * 3, ForceMode2D.Impulse);

        curPatternCount++;

        if(curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireArc", 0.15f);
        else
            Invoke("Think", 3);
    }
    void FireAround()
    {
        if(health <= 0)
        return;

        Debug.Log("4");
        int roundNumA = 15;
        int roundNumB = 20;
        int roundNum = curPatternCount % 2 == 0 ? roundNumA : roundNumB;
        for(int index=0; index < roundNum; index++)
        {
            GameObject bulletAro = objectManager.MakeObj("BossbulletB");
            bulletAro.transform.position = transform.position;
            Rigidbody2D rigAro = bulletAro.GetComponent<Rigidbody2D>();

            Vector2 dirVecAro = new Vector2(Mathf.Cos(Mathf.PI * 2 * index/roundNum), Mathf.Sin(Mathf.PI * 2 * index/roundNum));
            rigAro.AddForce(dirVecAro.normalized * 2, ForceMode2D.Impulse);
        }

        curPatternCount++;

        if(curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireAround", 0.7f);
        else
            Invoke("Think", 3);
    }
     void Update()
    {
        if(enemyName == "BossA" || enemyName == "BossB")
            return;

        Fire();
        Reload();
    }
    void Fire(){
        if(curShotDelay < maxShotDelay)
            return;
        if(enemyName == "M"){
            GameObject bulletA = objectManager.MakeObj("EnemybulletA");
            bulletA.transform.position = transform.position;
            Rigidbody2D rigidA = bulletA.GetComponent<Rigidbody2D>();

            Vector3 dirVecA = player.transform.position - transform.position;
            rigidA.AddForce(dirVecA.normalized * 3, ForceMode2D.Impulse);
        }
        else if(enemyName == "L"){
            GameObject bulletB = objectManager.MakeObj("EnemybulletA");
            bulletB.transform.position = transform.position;
            Rigidbody2D rigidB = bulletB.GetComponent<Rigidbody2D>();

            Vector3 dirVecB = player.transform.position - transform.position;
            rigidB.AddForce(dirVecB.normalized * 5, ForceMode2D.Impulse);
        }
        curShotDelay = 0;
    }
    void Reload(){
        curShotDelay += Time.deltaTime;
    }
    public void OnHit(int dmg){
        if(health <=0)
            return;

        health -= dmg;

        if (health <=0) {
            
        Player playerLogic = player.GetComponent<Player>();
        playerLogic.score += enemyscore;
            if(enemyName == "BossA")
            {
                gameManager.BossAdie = true;
                gameManager.curenemycount++;
            }
            else if(enemyName == "BossB")
            {
                gameManager.BossBdie = true;
                SceneManager.LoadScene("Clear");
            }
            else
                gameManager.BossAdie = false;
                gameManager.BossBdie = false;

        int ran = Random.Range(0, 10);
            if(enemyName == "BossA" || enemyName =="BossB")
                ran = 0;

            if(ran < 4){
                Debug.Log("Not Item");
            }
            else if (ran < 6){
                GameObject itemlife = objectManager.MakeObj("itemlife");
                itemlife.transform.position =  transform.position;
            }
            else if (ran < 8){
                GameObject itempower = objectManager.MakeObj("itempower");
                itempower.transform.position =  transform.position;
            }
            else if (ran < 9){
                GameObject itemshield = objectManager.MakeObj("itemshield");
                itemshield.transform.position =  transform.position;
            }
            else if (ran < 10){
                GameObject itemboom = objectManager.MakeObj("itemboom");
                itemboom.transform.position =  transform.position;
            }
            gameObject.SetActive(false);
            gameManager.CallExplosion(transform.position, enemyName);
        }
    }
    void OnTriggerEnter2D(Collider2D collision){
        if(collision.gameObject.tag == "BorderBullet" && enemyName != "BossA" && enemyName !="BossB")
            gameObject.SetActive(false);

        else if(collision.gameObject.tag == "PlayerBullet"){
            Bullet bullet = collision.gameObject.GetComponent<Bullet>();
            OnHit(bullet.dmg);
            Hit();
        }
    }
    void Hit()
    {
        UnHit();
        Invoke("UnHit", 0.05f);
    }
    void UnHit()
    {
        hit = !hit;
        if(hit)
        {
            spriteRenderer.color = new Color(1,0,0,1);
        }
        else{
            spriteRenderer.color = new Color(1,1,1,1);
        }
    }
    
}
