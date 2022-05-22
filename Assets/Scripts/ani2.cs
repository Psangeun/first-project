using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ani2 : MonoBehaviour
{
    void Update()
    {
        Invoke("Animend", 2f);
    }
    void Animend()
    {
        SceneManager.LoadScene("Start");
    }
}
