using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{   
    public int dmg;
    void Awake() {
        GetComponent<AudioSource>().Play();
    }

    // Start is called before the first frame update
    void OnTriggerEnter2D(Collider2D collision){
        if(collision.gameObject.tag == "BorderBullet" || collision.gameObject.tag == "Enemy"){
            gameObject.SetActive(false);
        }
    }
}
