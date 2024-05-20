#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Expresión. El programa, al recibir como datos tres valores enteros, establece si los mismos satisfacen una expresión determinada.

int main()
{
    float RES;      // variable RES de tipo float para almacenar el resultado
    int R, T, Q;    // variables R, T y Q de tipo entero

    printf("Ingrese los valores de R, T y Q: ");   // Mensaje para solicitar al usuario que ingrese valores
    scanf("%d %d %d", &R, &T, &Q);                // Lectura de los valores de R, T y Q desde la entrada estándar

    // Cálculo de la expresión RES = R^4 - T^3 + 4 * Q^2 utilizando la función pow de la biblioteca math.h
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    // Comprobación si RES es menor que 820
    if (RES < 820)
    {
        // Impresión de los valores de R, T y Q si la condición se cumple
        printf("\nR = %d\tT = %d\tQ = %d\n", R, T, Q);
    }
    return 0; // el programa se ejecutó correctamente
}

