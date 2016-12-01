using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour 
{
    // Create a boolean value called "locked" that can be checked in Update() 
	bool locked = true;

	public AudioClip lockedSound;
	public AudioClip unlockedSound;

    void Update() {
        // If the door is unlocked and it is not fully raised
            // Animate the door raising up
		Vector3 DoorPosition = gameObject.transform.position;
		Vector3 targetPosition = new Vector3(DoorPosition.x,25.5f,DoorPosition.z);
		if (!locked && gameObject.transform.position.y < 25.5f) {
			gameObject.transform.position = Vector3.Lerp(DoorPosition, targetPosition, Time.deltaTime * 2.0f);
		}
    }

    public void Unlock()
    {
        // You'll need to set "locked" to true here
		// Because the variable was named "locked" not "unlocked", I chose to set locked to false here.
		locked = false;
		this.gameObject.AddComponent<AudioSource> ();
		this.GetComponent<AudioSource> ().clip = unlockedSound;
		this.GetComponent<AudioSource> ().Play ();
    }

	public void OnDoorClicked() {
		// Make a sound to indicate that the door is still locked
		if (locked) {
			this.gameObject.AddComponent<AudioSource> ();
			this.GetComponent<AudioSource> ().clip = lockedSound;
			this.GetComponent<AudioSource> ().Play ();
		}
	}
}
