#include <stdio.h>
#include <stdlib.h>


// Elección. El programa obtiene el total de votos de cada candidato y el porcentaje correspondiente. También considera votos nulos.


int main()
{
    int vot, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, nu = 0, svo; // variables enteras para los votos de cada candidato y votos nulos, e inicializa todas a 0
    float po1, po2, po3, po4, po5, pon; // variables de tipo float para almacenar los porcentajes de votos

    printf("Ingrese el primer voto: "); // Solicita al usuario que ingrese el primer voto
    scanf("%d", &vot); // Lee el primer voto ingresado y lo almacena en 'vot'

    while(vot)   // Bucle que continúa mientras 'vot' no sea 0
    {
        switch(vot)   // Estructura de control para procesar el voto ingresado
        {
        case 1:
            c1++; // Incrementa el contador de votos para el candidato 1
            break;
        case 2:
            c2++; // Incrementa el contador de votos para el candidato 2
            break;
        case 3:
            c3++; // Incrementa el contador de votos para el candidato 3
            break;
        case 4:
            c4++; // Incrementa el contador de votos para el candidato 4
            break;
        case 5:
            c5++; // Incrementa el contador de votos para el candidato 5
            break;
        default:
            nu++; // Incrementa el contador de votos nulos
            break;
        }
        printf("Ingrese el siguiente voto o elige 0 para terminar: "); // Solicita al usuario que ingrese el siguiente voto
        scanf("%d", &vot); // Lee el siguiente voto ingresado y lo almacena en 'vot'
    }

    svo = c1 + c2 + c3 + c4 + c5 + nu; // Calcula el total de votos
    po1 = ((float)c1 / svo) * 100; // Calcula el porcentaje de votos para el candidato 1
    po2 = ((float)c2 / svo) * 100; // Calcula el porcentaje de votos para el candidato 2
    po3 = ((float)c3 / svo) * 100; // Calcula el porcentaje de votos para el candidato 3
    po4 = ((float)c4 / svo) * 100; // Calcula el porcentaje de votos para el candidato 4
    po5 = ((float)c5 / svo) * 100; // Calcula el porcentaje de votos para el candidato 5
    pon = ((float)nu / svo) * 100; // Calcula el porcentaje de votos nulos

    printf("\nTotal de votos: %d", svo); // Imprime el total de votos
    printf("\n\nCandidato 1: %d votos -- porcentaje: %5.2f", c1, po1); // Imprime los votos y el porcentaje del candidato 1
    printf("\nCandidato 2: %d votos -- porcentaje: %5.2f", c2, po2); // Imprime los votos y el porcentaje del candidato 2
    printf("\nCandidato 3: %d votos -- porcentaje: %5.2f", c3, po3); // Imprime los votos y el porcentaje del candidato 3
    printf("\nCandidato 4: %d votos -- porcentaje: %5.2f", c4, po4); // Imprime los votos y el porcentaje del candidato 4
    printf("\nCandidato 5: %d votos -- porcentaje: %5.2f", c5, po5); // Imprime los votos y el porcentaje del candidato 5
    printf("\nNulos: %d votos -- porcentaje: %5.2f", nu, pon); // Imprime los votos y el porcentaje de votos nulos

    return 0; // el programa terminó correctamente
}
