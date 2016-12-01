using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CoinScore : MonoBehaviour {

	private int score;
	Text scoreText;

	// Use this for initialization
	void Start () {
		score = 0;
		scoreText = GetComponent<Text>();
		scoreText.text="Coins: " + score + "/7";
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void IncreaseScore ()
	{
		score++;
		UpdateScore ();
	}

	void UpdateScore ()
	{
		scoreText.text = "Coins: " + score + "/7";
	}
}
