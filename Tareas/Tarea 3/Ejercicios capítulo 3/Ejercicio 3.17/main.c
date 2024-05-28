#include <stdio.h>
#include <stdlib.h>

//N�meros perfectos.  El programa, al recibir como dato un n�mero entero positivo como l�mite, obtiene los n�meros perfectos que hay entre 1 y ese n�mero, y adem�s imprime cu�ntos numeros perfectos hay en el intervalo.


int main()
{
    int i, j, num, sum, c = 0; // variables enteras: 'i' y 'j' como contadores, 'num' para el l�mite superior, 'sum' para la suma de divisores, y 'c' como contador de n�meros perfectos
    printf("\nIngrese el numero limite: "); // Solicita al usuario que ingrese el n�mero l�mite
    scanf("%d", &num); // Lee el n�mero ingresado y lo almacena en 'num'

    for(i = 1; i <= num; i++) // Bucle for que itera desde 1 hasta 'num'
    {
        sum = 0; // Inicializa 'sum' a 0 para la suma de divisores del n�mero actual
        for(j = 1; j <= (i / 2); j++) // Bucle for que itera desde 1 hasta la mitad de 'i' para encontrar divisores
        {
            if ((i % j) == 0) // Si 'j' es un divisor de 'i'
            {
                sum += j; // Suma el divisor 'j' a 'sum'
            }
        }
        if(sum == i) // Si la suma de los divisores es igual a 'i'
        {
            printf("\n%d es un numero perfecto", i); // Imprime que 'i' es un n�mero perfecto
            c++; // Incrementa el contador de n�meros perfectos
        }
    }

    printf("\nEntre 1 y %d hay %d numeros perfectos", num, c); // Imprime el total de n�meros perfectos encontrados entre 1 y 'num'

    return 0; // el programa termin� correctamente
}

