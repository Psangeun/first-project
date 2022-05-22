using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MakeAster : MonoBehaviour
{
    public ObjectManager objectManager;
    public string[] asterObjs;
    public float timeDiff;
    float timer = 0;
    
    void Awake()
    {
        asterObjs = new string[] {"asterBig", "asterHuge", "asterMed", "asterSmall"};
    }
    void Update()
    {
        timer += Time.deltaTime;
        if (timer > timeDiff)
        {
            int ranAster = Random.Range(0, 4);
            GameObject newaster = objectManager.MakeObj(asterObjs[ranAster]);
            newaster.transform.position = new Vector3(10, Random.Range(-4.5f, 4.5f), 0);
            timer = 0;
        }
    }
}
