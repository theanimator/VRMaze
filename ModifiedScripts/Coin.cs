using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Coin : MonoBehaviour 
{
	//Create a reference to the CoinPoofPrefab
	public GameObject CoinPoofPrefab;
	public GameObject CoinScoreText;

	void Update() {
		// Spin the coin
		transform.Rotate(Vector3.forward, 60.0f * Time.deltaTime);
	}

	public void OnCoinClicked() {
		// Instantiate the CoinPoof Prefab where this coin is located
		// Make sure the poof animates vertically
		// Destroy this coin. Check the Unity documentation on how to use Destroy
		Quaternion rotation = Quaternion.Euler(270,0,0);
		GameObject poof = (GameObject)Instantiate(CoinPoofPrefab, transform.position, rotation);
		CoinScore coinScoreScript = (CoinScore) CoinScoreText.GetComponent(typeof(CoinScore));
		coinScoreScript.IncreaseScore ();
		// If sound is played from poof, Destroy can be called here.
		// If sound is played by this script, call the PlayAudio() coroutine
		//Destroy (gameObject);
		StartCoroutine(PlayAudio());
	}

	IEnumerator PlayAudio() {
		// Hide the coin
		GetComponent<Renderer>().enabled = false;
		AudioSource audio = GetComponent<AudioSource>();
		audio.Play();
		// Make sure the hidden coin can't be clicked
		Destroy(GetComponent<EventTrigger>());
		yield return new WaitForSeconds(audio.clip.length);
		Destroy (gameObject);
	}
}
