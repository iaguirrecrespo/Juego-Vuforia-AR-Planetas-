
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class GameController : MonoBehaviour
{
    [Header("Temporizador")]
    [SerializeField] private float tiempoInicial = 10f;
    private float tiempoRestante;

    [SerializeField] private TextMeshProUGUI tiempoTxt;

    [Header("Planeta objetivo")]
    [SerializeField] private TextMeshProUGUI planetaAdivinarTxt;

    [SerializeField]
    private string[] opcionesMostrar =
    {
        "Tierra", "Sol", "Marte", "Jupiter",
        "Venus", "Mercurio", "Saturno", "Urano"
    };

    [Header("Puntuacion")]
    [SerializeField] private TextMeshProUGUI puntuacionTxt;
    private int puntuacion = 0;

    [Header("Feedback visual")]
    [SerializeField] private Image fondoFeedback;
    [SerializeField] private float duracionFeedback = 0.5f;

    private Color colorOriginal;
    private Coroutine corrutinaFeedback;

    [Header("Sonidos")]
    [SerializeField] private AudioSource efectoSonido;
    [SerializeField] private AudioClip clipSonidoAcierto;
    [SerializeField] private AudioClip clipSonidoError;

    [SerializeField] private AudioSource efectoSonidoGameOver;
    [SerializeField] private AudioClip clipSonidoGameOver;

    [Header("Pantallas")]
    [SerializeField] private GameObject gameOver;
    [SerializeField] private GameObject uiJuego;

    private bool partidaTerminada = false;

    private void Start()
    {
        tiempoRestante = tiempoInicial;

        if (fondoFeedback != null)
        {
            colorOriginal = fondoFeedback.color;
        }

        if (gameOver != null)
            gameOver.SetActive(false);

        if (uiJuego != null)
            uiJuego.SetActive(true);

        ActualizarPuntuacion();
        ElegirNuevoPlaneta();
        ActualizarTemporizador();
    }

    private void Update()
    {
        if (partidaTerminada)
            return;

        tiempoRestante -= Time.deltaTime;

        if (tiempoRestante <= 0f)
        {
            tiempoRestante = 0f;
            ActualizarTemporizador();
            TerminarPartida();
            return;
        }

        ActualizarTemporizador();
    }

    private void ActualizarTemporizador()
    {
        if (tiempoTxt != null)
            tiempoTxt.text = tiempoRestante.ToString("F1");
    }

    private void ActualizarPuntuacion()
    {
        if (puntuacionTxt != null)
            puntuacionTxt.text = "Puntos: " + puntuacion;
    }

    private void ElegirNuevoPlaneta()
    {
        if (opcionesMostrar == null || opcionesMostrar.Length == 0)
            return;

        int posicionAleatoria = Random.Range(0, opcionesMostrar.Length);

        if (planetaAdivinarTxt != null)
            planetaAdivinarTxt.text = opcionesMostrar[posicionAleatoria];
    }

    public void chequear(string planetaEncontrado)
    {
        if (partidaTerminada)
            return;

        if (planetaAdivinarTxt == null)
            return;

        if (string.Equals(
            planetaEncontrado.Trim(),
            planetaAdivinarTxt.text.Trim(),
            System.StringComparison.OrdinalIgnoreCase))
        {
            // ACIERTO
            puntuacion++;
            ActualizarPuntuacion();

            MostrarFeedback(Color.green, clipSonidoAcierto);

            // Nueva ronda: nuevo planeta y tiempo reiniciado.
            ElegirNuevoPlaneta();
            tiempoRestante = tiempoInicial;
            ActualizarTemporizador();
        }
        else
        {
            // ERROR: no resta puntos ni reinicia el tiempo.
            MostrarFeedback(Color.red, clipSonidoError);
        }
    }

    private void MostrarFeedback(Color color, AudioClip sonido)
    {
        if (corrutinaFeedback != null)
            StopCoroutine(corrutinaFeedback);

        if (fondoFeedback != null)
        {
            fondoFeedback.color = color;
            corrutinaFeedback = StartCoroutine(RestaurarColor());
        }

        if (sonido != null && efectoSonido != null)
            efectoSonido.PlayOneShot(sonido);
    }

    private IEnumerator RestaurarColor()
    {
        yield return new WaitForSeconds(duracionFeedback);

        if (fondoFeedback != null)
            fondoFeedback.color = colorOriginal;

        corrutinaFeedback = null;
    }

    private void TerminarPartida()
    {
        partidaTerminada = true;

        if (uiJuego != null)
            uiJuego.SetActive(false);

        if (gameOver != null)
            gameOver.SetActive(true);

        if (efectoSonidoGameOver != null &&
            clipSonidoGameOver != null)
        {
            efectoSonidoGameOver.PlayOneShot(clipSonidoGameOver);
        }
    }

    public void reiniciar()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
