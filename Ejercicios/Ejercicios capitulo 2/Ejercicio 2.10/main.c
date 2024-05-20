#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Par, impar o nulo

int main()
{
    int Numero;  // variable entera llamada Numero

    printf("Ingrese el numero: ");  // mensaje solicitando al usuario que ingrese un número

    scanf("%d", &Numero);  // Lectura del número ingresado por el usuario y almacenamiento en la variable Numero

    if (Numero == 0)  // Comprobación si el número ingresado es igual a cero
    {
        printf("\nNulo");  // Si el número es cero, imprime "Nulo" en una nueva línea
    }
    else
    {
        if (pow(-1, Numero) > 0)  // Comprobación si (-1)^Numero es mayor que cero (es decir, si Numero es par)
        {
            printf("\nPar");  // Si el número es par, imprime "Par" en una nueva línea
        }
        else
        {
            printf("\nImpar");  // Si el número es impar, imprime "Impar" en una nueva línea
        }
    }

    return 0;  // el programa se ejecutó correctamente
}





