using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemybullet : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D collision){
        if(collision.gameObject.tag == "BorderBullet" || collision.gameObject.tag == "shield"){
            gameObject.SetActive(false);
        }
    }
}

