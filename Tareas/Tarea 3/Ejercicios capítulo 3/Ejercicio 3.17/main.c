#include <stdio.h>
#include <stdlib.h>

//Números perfectos.  El programa, al recibir como dato un número entero positivo como límite, obtiene los números perfectos que hay entre 1 y ese número, y además imprime cuántos numeros perfectos hay en el intervalo.


int main()
{
    int i, j, num, sum, c = 0; // variables enteras: 'i' y 'j' como contadores, 'num' para el límite superior, 'sum' para la suma de divisores, y 'c' como contador de números perfectos
    printf("\nIngrese el numero limite: "); // Solicita al usuario que ingrese el número límite
    scanf("%d", &num); // Lee el número ingresado y lo almacena en 'num'

    for(i = 1; i <= num; i++) // Bucle for que itera desde 1 hasta 'num'
    {
        sum = 0; // Inicializa 'sum' a 0 para la suma de divisores del número actual
        for(j = 1; j <= (i / 2); j++) // Bucle for que itera desde 1 hasta la mitad de 'i' para encontrar divisores
        {
            if ((i % j) == 0) // Si 'j' es un divisor de 'i'
            {
                sum += j; // Suma el divisor 'j' a 'sum'
            }
        }
        if(sum == i) // Si la suma de los divisores es igual a 'i'
        {
            printf("\n%d es un numero perfecto", i); // Imprime que 'i' es un número perfecto
            c++; // Incrementa el contador de números perfectos
        }
    }

    printf("\nEntre 1 y %d hay %d numeros perfectos", num, c); // Imprime el total de números perfectos encontrados entre 1 y 'num'

    return 0; // el programa terminó correctamente
}

