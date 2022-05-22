using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Aster : MonoBehaviour

{
    public float speed;
    void Update()
    {
        transform.position += Vector3.left * speed * Time.deltaTime;
    }
    void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.tag == "BigBorder")
            gameObject.SetActive(false);
    }
}
