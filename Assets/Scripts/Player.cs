using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class Player : MonoBehaviour
{
    public float speed;
    public float maxShotDelay;
    public float curShotDelay;
    public int power;
    public int maxpower;
    public int life;
    public int maxlife;
    public int score;
    public int boom;
    public int maxboom;
    
    public bool isT;
    public bool isB;
    public bool isR;
    public bool isL;
    public bool isHit;
    public bool isBoomTime;
    public bool isRespawnTime;
    public bool isButton;

    public GameObject bulletObjA;
    public GameObject bulletObjB;
    public GameObject shieldeffect;
    public GameObject boomeffect;
    public GameObject invincibilityeffect;
    
    public GameManager gameManager;
    public ObjectManager objectManager;
    SpriteRenderer spriteRenderer;
    AudioSource audioSource;

    [SerializeField]
    private VirtualJoystick virtualJoystick;

    void OnEnable()
    {
        Unbeatable();
        Invoke("Unbeatable", 3);
    }
    void Unbeatable()
    {
        isRespawnTime = !isRespawnTime;

        if(isRespawnTime)
        {
            invincibilityeffect.SetActive(true);
            Invoke("Offinvincibility", 3f);
        }
        else{
            isRespawnTime = false;
            invincibilityeffect.SetActive(false);
        }
    }
    void Offinvincibility()
    {
        invincibilityeffect.SetActive(false);
    }
    private void Update()
    {
        Move();
        Fire();
        Reload();
        Boom();
    }
    void Move(){
        Vector3 worldpos = Camera.main.WorldToViewportPoint(this.transform.position);
        if (worldpos.x < 0f) worldpos.x = 0f;
        if (worldpos.y < 0f) worldpos.y = 0f;
        if (worldpos.x > 1f) worldpos.x = 1f;
        if (worldpos.y > 1f) worldpos.y = 1f;
        this.transform.position = Camera.main.ViewportToWorldPoint(worldpos);
        
        float x = virtualJoystick.Horizontal();
        float y = virtualJoystick.Vertical();
        
        if(x !=0 || y !=0)
        {
            transform.position += new Vector3(x,y,0) * speed * Time.deltaTime;
        }
        

        // float h = Input.GetAxisRaw("Horizontal");
        // if((isR && h == 1)||(isL && h == -1))
        //     h = 0;
        // float v = Input.GetAxisRaw("Vertical");
        // if((isT && v == 1)||(isB && v == -1))
        //     v = 0;
        // Vector3 curPos = transform.position;
        // Vector3 nextPos = new Vector3(h, v, 0) * speed * Time.deltaTime;

        // transform.position = curPos + nextPos;
    }
    void Fire(){
        // if(!Input.GetButton("Fire1"))
        //     return;
        if(curShotDelay < maxShotDelay)
            return;

        switch (power) {
            case 1:
                GameObject bullet = objectManager.MakeObj("playerbulletA");
                bullet.transform.position = transform.position;

                Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
                rigid.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
            break;
            case 2:
                GameObject bulletU = objectManager.MakeObj("playerbulletA");
                bulletU.transform.position = transform.position + Vector3.up*0.1f;
                GameObject bulletD = objectManager.MakeObj("playerbulletA");
                bulletD.transform.position = transform.position + Vector3.down*0.1f;
                Rigidbody2D rigidU = bulletU.GetComponent<Rigidbody2D>();
                Rigidbody2D rigidD = bulletD.GetComponent<Rigidbody2D>();
                rigidU.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
                rigidD.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
            break;
            case 3:
                GameObject bulletUU = objectManager.MakeObj("playerbulletA");
                bulletUU.transform.position = transform.position + Vector3.up*0.3f;
                GameObject bulletCC = objectManager.MakeObj("playerbulletA");
                bulletCC.transform.position = transform.position;
                GameObject bulletDD = objectManager.MakeObj("playerbulletA");
                bulletDD.transform.position = transform.position + Vector3.down*0.3f;
                Rigidbody2D rigidUU = bulletUU.GetComponent<Rigidbody2D>();
                Rigidbody2D rigidCC = bulletCC.GetComponent<Rigidbody2D>();
                Rigidbody2D rigidDD = bulletDD.GetComponent<Rigidbody2D>();
                rigidUU.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
                rigidCC.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
                rigidDD.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
            break;
            case 4:
                GameObject bul = objectManager.MakeObj("playerbulletB");
                bul.transform.position = transform.position;
                Rigidbody2D rig = bul.GetComponent<Rigidbody2D>();
                rig.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
            break;
            case 5:
                GameObject bulletu = objectManager.MakeObj("playerbulletB");
                bulletu.transform.position = transform.position + Vector3.up*0.1f;
                GameObject bulletd = objectManager.MakeObj("playerbulletB");
                bulletd.transform.position = transform.position + Vector3.down*0.1f;
                Rigidbody2D rigidu = bulletu.GetComponent<Rigidbody2D>();
                Rigidbody2D rigidd = bulletd.GetComponent<Rigidbody2D>();
                rigidu.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
                rigidd.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
            break;
            case 6:
                GameObject bulletuu = objectManager.MakeObj("playerbulletB");
                bulletuu.transform.position = transform.position + Vector3.up*0.3f;
                GameObject bulletcc = objectManager.MakeObj("playerbulletB");
                bulletcc.transform.position = transform.position;
                GameObject bulletdd = objectManager.MakeObj("playerbulletB");
                bulletdd.transform.position = transform.position + Vector3.down*0.3f;
                Rigidbody2D rigiduu = bulletuu.GetComponent<Rigidbody2D>();
                Rigidbody2D rigidcc = bulletcc.GetComponent<Rigidbody2D>();
                Rigidbody2D rigiddd = bulletdd.GetComponent<Rigidbody2D>();
                rigiduu.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
                rigidcc.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
                rigiddd.AddForce(Vector2.right * 10, ForceMode2D.Impulse);
            break;
        }
        curShotDelay = 0;
    }

    void Reload(){
        curShotDelay += Time.deltaTime;
    }
    public void ButtonUp()
    {
        isButton = false;
    }
    public void ButtonDown()
    {
        isButton = true;
    }
    void Boom()
    {
        if(!isButton)
            return;

        if (isBoomTime)
            return;
        
        if (boom == 0)
            return;
        
        boom--;
        isBoomTime = true;
        gameManager.UpdateBoomIcon(boom);

        boomeffect.SetActive(true);
        Invoke("Offboomeffect", 1f);            
                    
        GameObject[] enemiesS = objectManager.GetPool("EnemyS");
        GameObject[] enemiesM = objectManager.GetPool("EnemyM");
        GameObject[] enemiesL = objectManager.GetPool("EnemyL");
        GameObject[] BossesA = objectManager.GetPool("BossA");
        GameObject[] BossesB = objectManager.GetPool("BossB");
        for(int index=0; index < enemiesS.Length; index++) {
            if(enemiesS[index].activeSelf)
            {
                Enemy enemyLogic = enemiesS[index].GetComponent<Enemy>();
                enemyLogic.OnHit(1000);
            }
        }
        for(int index=0; index < enemiesM.Length; index++) {
            if(enemiesM[index].activeSelf)
            {
                Enemy enemyLogic = enemiesM[index].GetComponent<Enemy>();
                enemyLogic.OnHit(1000);
            }
        }
        for(int index=0; index < enemiesL.Length; index++) {
            if(enemiesL[index].activeSelf)
            {
                Enemy enemyLogic = enemiesL[index].GetComponent<Enemy>();
                enemyLogic.OnHit(1000);
            } 
        }
        for(int index=0; index < BossesA.Length; index++) {
            if(BossesA[index].activeSelf)
            {
                Enemy enemyLogic = BossesA[index].GetComponent<Enemy>();
                enemyLogic.OnHit(1000);
            }
        }
        for(int index=0; index < BossesB.Length; index++) {
            if(BossesB[index].activeSelf)
            {
                Enemy enemyLogic = BossesB[index].GetComponent<Enemy>();
                enemyLogic.OnHit(1000);
            }
        }

        GameObject[] bulletsA = objectManager.GetPool("EnemybulletA");
        GameObject[] bulletsBA = objectManager.GetPool("BossbulletA");
        GameObject[] bulletsBB = objectManager.GetPool("BossbulletB");
        
        for(int index=0; index < bulletsA.Length; index++) {
            if(bulletsA[index].activeSelf)
            {
                Enemy enemyLogic = bulletsA[index].GetComponent<Enemy>();
                bulletsA[index].SetActive(false);
            }
        }
        for(int index=0; index < bulletsBA.Length; index++) {
            if(bulletsBA[index].activeSelf)
            {
                Enemy enemyLogic = bulletsBA[index].GetComponent<Enemy>();
                bulletsBA[index].SetActive(false);
            }
        }
        for(int index=0; index < bulletsBB.Length; index++) {
            if(bulletsBB[index].activeSelf)
            {
                Enemy enemyLogic = bulletsBB[index].GetComponent<Enemy>();
                bulletsBB[index].SetActive(false);
            }
        }
    }
    
    void OnTriggerEnter2D(Collider2D colloision) {
        if(colloision.gameObject.tag == "border") {
            switch (colloision.gameObject.name) {
                case "T":
                isT = true;
                break;
                case "B":
                isB = true;
                break;
                case "R":
                isR = true;
                break;
                case "L":
                isL = true;
                break;
            }
        }
        else if(colloision.gameObject.tag == "Enemy"){
            if (isRespawnTime)
                return;

            if (isHit)
                return;

            isHit = true;
            life--;
            gameManager.UpdateLifeIcon(life);
            gameManager.CallExplosion(transform.position, "P");
            

            if(life == 0){
                SceneManager.LoadScene("GameOverScene");
            }
            else {
                gameManager.RespawnPlayer();
            }
            gameObject.SetActive(false);
        }
        else if(colloision.gameObject.tag == "EnemyBullet"){
            if (isRespawnTime)
                return;

            if (isHit)
                return;

            isHit = true;
            life--;
            gameManager.UpdateLifeIcon(life);
            gameManager.CallExplosion(transform.position, "P");
            

            if(life == 0){
                SceneManager.LoadScene("GameOverScene");
            }
            else {
                gameManager.RespawnPlayer();
            }
            gameObject.SetActive(false);
            colloision.gameObject.SetActive(false);
        }

        else if(colloision.gameObject.tag == "Item"){
            Item item = colloision.GetComponent<Item>();
            GetComponent<AudioSource>().Play();
            switch (item.type){
                case "power":
                    if(power == maxpower)
                        score += 1000;
                    else
                        power ++;
                break;
                case "life":
                    if(life == maxlife)
                        score += 300;
                    else
                        life ++;
                        gameManager.UpdateLifeIcon(life);
                break;
                case "shield":
                    shieldeffect.SetActive(true);
                    Invoke("OffShield", 5f);
                break;

                case "boom":
                    if(boom == maxboom)
                        score += 2000;
                    else {
                        boom++;
                        gameManager.UpdateBoomIcon(boom);
                    }
                        
                break;
            }
            colloision.gameObject.SetActive(false);
        }
    }
    
    void OffShield()
    {
        shieldeffect.SetActive(false);
    }
    void Offboomeffect()
    {
        boomeffect.SetActive(false);
        isBoomTime = false;
    }
    void OnTriggerExit2D(Collider2D colloision) {
        if(colloision.gameObject.tag == "border") {
            switch (colloision.gameObject.name) {
                case "T":
                isT = false;
                break;
                case "B":
                isB = false;
                break;
                case "R":
                isR = false;
                break;
                case "L":
                isL = false;
                break;
                }
            }
    }
}

