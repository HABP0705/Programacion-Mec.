#include <stdio.h>
#include <stdlib.h>

//Suma positivos. El programa, al recibir como datos N n�meros enteros, obtiene la suma de los enteros positivos.


int main()
{
    int i, n, num, sum; // variables enteras: 'i' para el contador, 'n' para la cantidad de datos, 'num' para el n�mero ingresado, y 'sum' para la suma de n�meros positivos
    sum = 0; // Inicializa 'sum' a 0

    printf("Ingrese el numero de datos:\t"); // Solicita al usuario que ingrese la cantidad de datos
    scanf("%d", &n); // Lee la cantidad de datos ingresada por el usuario y la almacena en 'n'

    for (i = 1; i <= n; i++)   // Bucle for que se ejecuta 'n' veces
    {
        printf("Ingrese el dato numero %d:\t", i); // Solicita al usuario que ingrese el dato n�mero 'i'
        scanf("%d", &num); // Lee el dato ingresado por el usuario y lo almacena en 'num'

        if (num > 0)   // Verifica si el n�mero ingresado es positivo
        {
            sum = sum + num; // Si el n�mero es positivo, lo suma a 'sum'
        }
    }

    printf("\nLa suma de los numeros positivos es: %d\n", sum); // Imprime la suma de los n�meros positivos

    return 0; // el programa termin� correctamente
}
