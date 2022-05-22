using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Explosion : MonoBehaviour
{
    Animator anim;
    
    // Start is called before the first frame update

    // Update is called once per frame
    void Awake()
    {
        anim = GetComponent<Animator>();
    }
    void OnEnable()
    {
        GetComponent<AudioSource>().Play();
        Invoke("Disable", 1f);
    }
    void Disable() 
    {
        gameObject.SetActive(false);
    }
    public void StartExplosion(string target)
    {
        anim.SetTrigger("OnExplosion");

        switch(target) {
            case"S":
                transform.localScale = Vector3.one * 1f;
            break;
            case"M":
                transform.localScale = Vector3.one * 2f;
            break;
            case"P":
                transform.localScale = Vector3.one * 2f;
            break;
            case"L":
                transform.localScale = Vector3.one * 3f;
            break;
            case"BossA":
                transform.localScale = Vector3.one * 5f;
            break;
            case"BossB":
                transform.localScale = Vector3.one * 7f;
            break;
        }
    }
}

