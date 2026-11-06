
using UnityEngine;
using Vuforia;
using TMPro;

public class Planeta : MonoBehaviour
{
    private ObserverBehaviour observer;

    [Header("Configuracion del planeta")]
    [SerializeField] private TextMeshProUGUI textoPantalla;
    [SerializeField] private GameController controladorJuego;

    [SerializeField] private string nombrePlaneta;

    private bool planetaReconocido = false;

    private void Awake()
    {
        observer = GetComponent<ObserverBehaviour>();

        // Buscamos el controlador si no se ha asignado.
        if (controladorJuego == null)
        {
            controladorJuego = FindAnyObjectByType<GameController>();
        }
    }

    private void OnEnable()
    {
        if (observer != null)
        {
            observer.OnTargetStatusChanged += OnTargetStatusChanged;
        }
    }

    private void OnDisable()
    {
        if (observer != null)
        {
            observer.OnTargetStatusChanged -= OnTargetStatusChanged;
        }

        planetaReconocido = false;
    }

    private void OnTargetStatusChanged(
        ObserverBehaviour behaviour,
        TargetStatus status)
    {
        bool reconocidoAhora =
            status.Status == Status.TRACKED ||
            status.Status == Status.EXTENDED_TRACKED;

        if (!reconocidoAhora)
        {
            planetaReconocido = false;
            return;
        }

        if (planetaReconocido)
            return;

        planetaReconocido = true;

        Debug.Log("Planeta detectado: " + nombrePlaneta);

        if (textoPantalla != null)
        {
            textoPantalla.text = "Detectado: " + nombrePlaneta;
        }

        if (controladorJuego == null)
        {
            controladorJuego = FindAnyObjectByType<GameController>();
        }

        if (controladorJuego != null)
        {
            controladorJuego.chequear(nombrePlaneta);
        }
        else
        {
            Debug.LogError(
                "No se encuentra GameController en la escena.");
        }
    }
}
