#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Pares e impares. El programa, al recibir como datos N números enteros, obtiene la suma de los números pares y calcula el promedio de los impares.


int main()
{
    int i, n, num, spa = 0, sim = 0, cim = 0; // variables: 'i' para el contador del bucle, 'n' para el número de datos, 'num' para cada número ingresado, 'spa' para la suma de pares, 'sim' para la suma de impares y 'cim' para el conteo de impares

    printf("Ingrese el numero de datos que se van a procesar:\t"); // Solicita al usuario que ingrese el número de datos a procesar
    scanf("%d", &n); // Lee el número de datos y lo almacena en 'n'

    if (n > 0)   // Verifica que 'n' sea un número positivo
    {
        for (i = 1; i <= n; i++)   // Bucle for que se ejecuta 'n' veces
        {
            printf("\nIngrese el numero %d: ", i); // Solicita al usuario que ingrese el número 'i'
            scanf("%d", &num); // Lee el número ingresado y lo almacena en 'num'

            if (num != 0)   // Verifica que el número ingresado no sea 0
            {
                if (num % 2 == 0)   // Verifica si el número es par
                {
                    spa = spa + num; // Suma el número par a 'spa'
                }
                else     // Si el número es impar
                {
                    sim = sim + num; // Suma el número impar a 'sim'
                    cim++; // Incrementa el contador de impares
                }
            }
        }

        printf("\nLa suma de los numeros pares es: %d", spa); // Imprime la suma de los números pares

        if (cim != 0)   // Verifica si se ingresaron números impares
        {
            printf("\nEl promedio de numeros impares es: %.2f", (float)sim / cim); // Calcula e imprime el promedio de los números impares
        }
        else     // Si no se ingresaron números impares
        {
            printf("\nNo se ingresaron numeros impares."); // Imprime un mensaje indicando que no se ingresaron números impares
        }
    }
    else     // Si 'n' no es un número positivo
    {
        printf("\nEl valor de n es incorrecto"); // Imprime un mensaje de error
    }

    return 0; // el programa terminó correctamente
}

