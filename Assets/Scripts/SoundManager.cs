using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioClip backGroundMusic;
    public AudioClip jumpSound;
    public AudioClip itemSound;

    AudioSource audioSource;

    public static SoundManager Instance;   // 다른 스크립트에서 SoundManager.Instance.JumpSound(); 이런식으로 함수호출하기
    private void Awake()
    {
        Instance = this;
    }

    void Start()
    {
        audioSource = Camera.main.GetComponent<AudioSource>();
        audioSource.PlayOneShot(backGroundMusic);
    }


    public void JumpSound()
    {
        audioSource.Stop();
        audioSource.PlayOneShot(jumpSound);
    }

    public void ItemSound()
    {
        audioSource.Stop();
        audioSource.PlayOneShot(itemSound);
    }
    public void AudioStop()
    {
        audioSource.Stop();
    }
}
