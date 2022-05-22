using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class aniScene : MonoBehaviour
{
    void Update()
    {
        Invoke("Animend", 4f);
    }
    void Animend()
    {
        SceneManager.LoadScene("anim");
    }
}
