using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectManager : MonoBehaviour
{
    public GameObject enemySPrefab;
    public GameObject enemyMPrefab;
    public GameObject enemyLPrefab;
    public GameObject bossAPrefab;
    public GameObject bossBPrefab;

    public GameObject itempowerPrefab;
    public GameObject itemlifePrefab;
    public GameObject itemshieldPrefab;
    public GameObject itemboomPrefab;

    public GameObject playerbulletAPrefab;
    public GameObject playerbulletBPrefab;
    public GameObject enemybulletAPrefab;
    public GameObject bossbulletAPrefab;
    public GameObject bossbulletBPrefab;

    public GameObject explosionPrefab;
    public GameObject boomeffectPrefab;
    public GameObject shieldeffectPrefab;

    public GameObject asterBigPrefab;
    public GameObject asterHugePrefab;
    public GameObject asterMedPrefab;
    public GameObject asterSmallPrefab;

    
    GameObject[] enemyS;
    GameObject[] enemyM;
    GameObject[] enemyL;
    GameObject[] bossA;
    GameObject[] bossB;

    GameObject[] itempower;
    GameObject[] itemlife;
    GameObject[] itemshield;
    GameObject[] itemboom;

    GameObject[] playerbulletA;
    GameObject[] playerbulletB;
    GameObject[] enemybulletA;
    GameObject[] bossbulletA;
    GameObject[] bossbulletB;

    GameObject[] explosion;
    GameObject[] boomeffect;
    GameObject[] shieldeffect;

    GameObject[] asterBig;
    GameObject[] asterHuge;
    GameObject[] asterMed;
    GameObject[] asterSmall;

    GameObject[] targetPool;

    void Awake()
    {
        enemyS = new GameObject[20];
        enemyM = new GameObject[20];
        enemyL = new GameObject[20];
        bossA = new GameObject[5];
        bossB = new GameObject[5];

        itempower = new GameObject[10];
        itemlife = new GameObject[10];
        itemshield = new GameObject[10];
        itemboom = new GameObject[10];

        playerbulletA = new GameObject[100];
        playerbulletB = new GameObject[100];
        enemybulletA = new GameObject[100];
        bossbulletA = new GameObject[300];
        bossbulletB = new GameObject[300];

        explosion = new GameObject[30];
        boomeffect = new GameObject[5];
        shieldeffect = new GameObject[5];

        asterBig = new GameObject[5];
        asterHuge = new GameObject[5];
        asterMed = new GameObject[5];
        asterSmall = new GameObject[5];

        Generate();
    }
    void Generate()
    {
        for(int index=0; index < enemyS.Length; index++){
            enemyS[index] = Instantiate(enemySPrefab);
            enemyS[index].SetActive(false);
        }
        
        for(int index=0; index < enemyM.Length; index++){
            enemyM[index] = Instantiate(enemyMPrefab);
            enemyM[index].SetActive(false);
        }
            

        for(int index=0; index < enemyL.Length; index++){
            enemyL[index] = Instantiate(enemyLPrefab);
            enemyL[index].SetActive(false);
        }
            

        for(int index=0; index < bossA.Length; index++){
            bossA[index] = Instantiate(bossAPrefab);
            bossA[index].SetActive(false);
        }
            

        for(int index=0; index < bossB.Length; index++){
            bossB[index] = Instantiate(bossBPrefab);
            bossB[index].SetActive(false);
        }
            
        

        for(int index=0; index < itempower.Length; index++){
            itempower[index] = Instantiate(itempowerPrefab);
            itempower[index].SetActive(false);
        }
            

        for(int index=0; index < itemlife.Length; index++){
            itemlife[index] = Instantiate(itemlifePrefab);
            itemlife[index].SetActive(false);
        }
            

        for(int index=0; index < itemshield.Length; index++){
            itemshield[index] = Instantiate(itemshieldPrefab);
            itemshield[index].SetActive(false);
        }
            

        for(int index=0; index < itemboom.Length; index++){
            itemboom[index] = Instantiate(itemboomPrefab);
            itemboom[index].SetActive(false);
        }
            


        for(int index=0; index < playerbulletA.Length; index++){
            playerbulletA[index] = Instantiate(playerbulletAPrefab);
            playerbulletA[index].SetActive(false);
        }
            
        for(int index=0; index < playerbulletB.Length; index++){
            playerbulletB[index] = Instantiate(playerbulletBPrefab);
            playerbulletB[index].SetActive(false);
        }  

        for(int index=0; index < enemybulletA.Length; index++){
            enemybulletA[index] = Instantiate(enemybulletAPrefab);
            enemybulletA[index].SetActive(false);
        } 

        for(int index=0; index < bossbulletA.Length; index++){
            bossbulletA[index] = Instantiate(bossbulletAPrefab);
            bossbulletA[index].SetActive(false);
        }
            

        for(int index=0; index < bossbulletB.Length; index++){
            bossbulletB[index] = Instantiate(bossbulletBPrefab);
            bossbulletB[index].SetActive(false);
        }
        
        
        for(int index=0; index < explosion.Length; index++){
            explosion[index] = Instantiate(explosionPrefab);
            explosion[index].SetActive(false);
        }

        for(int index=0; index < boomeffect.Length; index++){
            boomeffect[index] = Instantiate(boomeffectPrefab);
            boomeffect[index].SetActive(false);
        }
            

        for(int index=0; index < shieldeffect.Length; index++){
            shieldeffect[index] = Instantiate(shieldeffectPrefab);
            shieldeffect[index].SetActive(false);
        }


        for(int index=0; index < asterBig.Length; index++){
            asterBig[index] = Instantiate(asterBigPrefab);
            asterBig[index].SetActive(false);
        }

        for(int index=0; index < asterHuge.Length; index++){
            asterHuge[index] = Instantiate(asterHugePrefab);
            asterHuge[index].SetActive(false);
        }

        for(int index=0; index < asterMed.Length; index++){
            asterMed[index] = Instantiate(asterMedPrefab);
            asterMed[index].SetActive(false);
        }

        for(int index=0; index < asterSmall.Length; index++){
            asterSmall[index] = Instantiate(asterSmallPrefab);
            asterSmall[index].SetActive(false);
        }
    }

    public GameObject MakeObj(string type)
    {
        switch (type)
        {
            case "EnemyS":
                targetPool = enemyS;
                break;
            case "EnemyM":
                targetPool = enemyM;
                break;
            case "EnemyL":
                targetPool = enemyL;
                break;
            case "BossA":
                targetPool = bossA;
                break;
            case "BossB":
                targetPool = bossB;
                break;

            case "itempower":
                targetPool = itempower;
                break;
            case "itemlife":
                targetPool = itemlife;
                break;
            case "itemshield":
                targetPool = itemshield;
                break;
            case "itemboom":
                targetPool = itemboom;
                break;

            case "playerbulletA":
                targetPool = playerbulletA;
                break;
            case "playerbulletB":
                targetPool = playerbulletB;
                break;
            case "EnemybulletA":
                targetPool = enemybulletA;
                break;
            case "BossbulletA":
                targetPool = bossbulletA;
                break;
            case "BossbulletB":
                targetPool = bossbulletB;
                break;

            case "explosion":
                targetPool = explosion;
                break;
            case "boomeffect":
                targetPool = boomeffect;
                break;
            case "shieldeffect":
                targetPool = shieldeffect;
                break;

            case "asterBig":
                targetPool = asterBig;
                break;
            case "asterHuge":
                targetPool = asterHuge;
                break;
            case "asterMed":
                targetPool = asterMed;
                break;
            case "asterSmall":
                targetPool = asterSmall;
                break;
        }
        for(int index=0; index< targetPool.Length; index++){
            if (!targetPool[index].activeSelf)
                {
                    targetPool[index].SetActive(true);
                    return targetPool[index];
                }
        }
        return null;
    }

    public GameObject[] GetPool(string type)
    {
        switch (type)
        {
            case "EnemyS":
                targetPool = enemyS;
                break;
            case "EnemyM":
                targetPool = enemyM;
                break;
            case "EnemyL":
                targetPool = enemyL;
                break;
            case "BossA":
                targetPool = bossA;
                break;
            case "BossB":
                targetPool = bossB;
                break;

            case "itempower":
                targetPool = itempower;
                break;
            case "itemlife":
                targetPool = itemlife;
                break;
            case "itemshield":
                targetPool = itemshield;
                break;
            case "itemboom":
                targetPool = itemboom;
                break;

            case "playerbulletA":
                targetPool = playerbulletA;
                break;
            case "playerbulletB":
                targetPool = playerbulletB;
                break;
            case "EnemybulletA":
                targetPool = enemybulletA;
                break;
            case "BossbulletA":
                targetPool = bossbulletA;
                break;
            case "BossbulletB":
                targetPool = bossbulletB;
                break;

            case "explosion":
                targetPool = explosion;
                break;    
            case "boomeffect":
                targetPool = boomeffect;
                break;
            case "shieldeffect":
                targetPool = shieldeffect;
                break;

            case "asterBig":
                targetPool = asterBig;
                break;
            case "asterHuge":
                targetPool = asterHuge;
                break;
            case "asterMed":
                targetPool = asterMed;
                break;
            case "asterSmall":
                targetPool = asterSmall;
                break;
        }
        return targetPool;
    }
}

