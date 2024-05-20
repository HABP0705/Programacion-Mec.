#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Par, impar o nulo

int main()
{
    int Numero;  // variable entera llamada Numero

    printf("Ingrese el numero: ");  // mensaje solicitando al usuario que ingrese un n�mero

    scanf("%d", &Numero);  // Lectura del n�mero ingresado por el usuario y almacenamiento en la variable Numero

    if (Numero == 0)  // Comprobaci�n si el n�mero ingresado es igual a cero
    {
        printf("\nNulo");  // Si el n�mero es cero, imprime "Nulo" en una nueva l�nea
    }
    else
    {
        if (pow(-1, Numero) > 0)  // Comprobaci�n si (-1)^Numero es mayor que cero (es decir, si Numero es par)
        {
            printf("\nPar");  // Si el n�mero es par, imprime "Par" en una nueva l�nea
        }
        else
        {
            printf("\nImpar");  // Si el n�mero es impar, imprime "Impar" en una nueva l�nea
        }
    }

    return 0;  // el programa se ejecut� correctamente
}





