#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Pares e impares. El programa, al recibir como datos N n�meros enteros, obtiene la suma de los n�meros pares y calcula el promedio de los impares.


int main()
{
    int i, n, num, spa = 0, sim = 0, cim = 0; // variables: 'i' para el contador del bucle, 'n' para el n�mero de datos, 'num' para cada n�mero ingresado, 'spa' para la suma de pares, 'sim' para la suma de impares y 'cim' para el conteo de impares

    printf("Ingrese el numero de datos que se van a procesar:\t"); // Solicita al usuario que ingrese el n�mero de datos a procesar
    scanf("%d", &n); // Lee el n�mero de datos y lo almacena en 'n'

    if (n > 0)   // Verifica que 'n' sea un n�mero positivo
    {
        for (i = 1; i <= n; i++)   // Bucle for que se ejecuta 'n' veces
        {
            printf("\nIngrese el numero %d: ", i); // Solicita al usuario que ingrese el n�mero 'i'
            scanf("%d", &num); // Lee el n�mero ingresado y lo almacena en 'num'

            if (num != 0)   // Verifica que el n�mero ingresado no sea 0
            {
                if (num % 2 == 0)   // Verifica si el n�mero es par
                {
                    spa = spa + num; // Suma el n�mero par a 'spa'
                }
                else     // Si el n�mero es impar
                {
                    sim = sim + num; // Suma el n�mero impar a 'sim'
                    cim++; // Incrementa el contador de impares
                }
            }
        }

        printf("\nLa suma de los numeros pares es: %d", spa); // Imprime la suma de los n�meros pares

        if (cim != 0)   // Verifica si se ingresaron n�meros impares
        {
            printf("\nEl promedio de numeros impares es: %.2f", (float)sim / cim); // Calcula e imprime el promedio de los n�meros impares
        }
        else     // Si no se ingresaron n�meros impares
        {
            printf("\nNo se ingresaron numeros impares."); // Imprime un mensaje indicando que no se ingresaron n�meros impares
        }
    }
    else     // Si 'n' no es un n�mero positivo
    {
        printf("\nEl valor de n es incorrecto"); // Imprime un mensaje de error
    }

    return 0; // el programa termin� correctamente
}

