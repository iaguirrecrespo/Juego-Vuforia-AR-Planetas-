using UnityEngine;
using UnityEngine.SceneManagement;
public class MenuController : MonoBehaviour
{
  
    public void Jugar()
    {
        Debug.Log("Jugar");
        SceneManager.LoadScene("Juego");
    }

    public void Salir()

    {
        Debug.Log("Salir");
        Application.Quit();
    }


    
}
