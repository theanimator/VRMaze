using UnityEngine;
using System.Collections;

public class DieAfterSeconds : MonoBehaviour {
    IEnumerator Start () {
        yield return new WaitForSeconds(3.0f);
        Destroy(gameObject);
	}
}
