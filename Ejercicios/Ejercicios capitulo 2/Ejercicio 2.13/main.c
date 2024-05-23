#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Función.  El programa, al recibir como dato un valor entero, calcula el resultado de una función.


int main()
{
    float x;  // variable de tipo float llamada x
    int y;    // variable entera llamada y
    printf("Ingrese el valor de y: ");  // mensaje para solicitar la entrada de un valor de y
    scanf("%d", &y);  // Lee un valor entero ingresado por el usuario y lo almacena en y

    if (y < 0 || y > 50)  // Verifica si y es menor que 0 o mayor que 50
    {
        x = 0;  // Si la condición es verdadera, asigna 0 a x
    }
    else  // Si y está en el rango de 0 a 50 inclusive
    {
        if (y <= 10)  // Verifica si y es menor o igual a 10
        {
            x = 4 / y - y;  // Calcula x como 4 dividido por y menos y
        }
        else  // Si y es mayor que 10
        {
            if (y <= 25)  // Verifica si y es menor o igual a 25
            {
                x = pow(y, 3) - 12;  // Calcula x como y al cubo menos 12
            }
            else  // Si y es mayor que 25
            {
                x = pow(y, 2) + pow(y, 3) - 18;  // Calcula x como y al cuadrado más y al cubo menos 18
            }
        }
        printf("\n\ny = %d\tx = %8.2f", y, x);  // Imprime los valores de y y x con formato
    }

    return 0;  // Finaliza la ejecución del programa y retorna 0 al sistema operativo
}

