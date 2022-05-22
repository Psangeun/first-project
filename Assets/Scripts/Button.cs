using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Button : MonoBehaviour
{
    // Start is called before the first frame update
    public void Click1()
    {
        SceneManager.LoadScene("Easy");
    }
    public void Click2()
    {
        SceneManager.LoadScene("Normal");
    }
    public void Click3()
    {
        SceneManager.LoadScene("Hard");
    }
    public void Help()
    {
        SceneManager.LoadScene("Help");
    }
    public void Back()
    {
        SceneManager.LoadScene("Start");
    }
}
