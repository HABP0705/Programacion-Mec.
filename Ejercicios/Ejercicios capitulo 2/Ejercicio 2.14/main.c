#include <stdio.h>
#include <stdlib.h>

//Teléfono.  El programa, al recibir como datos la clave de la zona geográfica y el número de segundos de una llamada telefónica, calcula el costo de la misma.



int main()
{
    int clave, tiempo;  // variables enteras: clave y tiempo
    float costo;  // variable de tipo float llamada costo
    printf("Ingresa la clave y el tiempo: ");  // mensaje para solicitar la entrada de dos valores
    scanf("%d %d", &clave, &tiempo);  // Lee dos valores enteros ingresados por el usuario y los almacena en clave y tiempo

    switch(clave)  // Inicia una estructura switch para evaluar la variable clave
    {
    case 1:  // Si clave es 1
        costo = tiempo * 0.13 / 60;  // Calcula el costo como tiempo multiplicado por 0.13 y dividido por 60
        break;  // Termina este caso
    case 2:  // Si clave es 2
        costo = tiempo * 0.11 / 60;  // Calcula el costo como tiempo multiplicado por 0.11 y dividido por 60
        break;  // Termina este caso
    case 5:  // Si clave es 5
        costo = tiempo * 0.22 / 60;  // Calcula el costo como tiempo multiplicado por 0.22 y dividido por 60
        break;  // Termina este caso
    case 6:  // Si clave es 6
        costo = tiempo * 0.19 / 60;  // Calcula el costo como tiempo multiplicado por 0.19 y dividido por 60
        break;  // Termina este caso
    case 7:  // Si clave es 7
    case 9:  // O si clave es 9
        costo = tiempo * 0.17 / 60;  // Calcula el costo como tiempo multiplicado por 0.17 y dividido por 60
        break;  // Termina este caso
    case 10:  // Si clave es 10
        costo = tiempo * 0.20 / 60;  // Calcula el costo como tiempo multiplicado por 0.20 y dividido por 60
        break;  // Termina este caso
    case 15:  // Si clave es 15
        costo = tiempo * 0.39 / 60;  // Calcula el costo como tiempo multiplicado por 0.39 y dividido por 60
        break;  // Termina este caso
    case 20:  // Si clave es 20
        costo = tiempo * 0.28 / 60;  // Calcula el costo como tiempo multiplicado por 0.28 y dividido por 60
        break;  // Termina este caso
    default:  // Si clave no coincide con ninguno de los casos anteriores
        costo = -1;  // Asigna -1 a costo para indicar un error
        break;  // Termina el caso default
    }

    if (costo != -1)  // Verifica si costo es diferente de -1 (es decir, si no hubo error en la clave)
    {
        printf("\n\nClave: %d\ttiempo: %d\tcosto: %6.2f", clave, tiempo, costo);  // Imprime los valores de clave, tiempo y costo con formato
    }
    else  // Si hubo un error en la clave
    {
        printf("\nError en la clave");  // Imprime un mensaje de error
    }

    return 0;  // Finaliza la ejecución del programa
}

