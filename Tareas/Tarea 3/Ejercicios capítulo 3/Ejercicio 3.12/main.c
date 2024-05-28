#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Serie de ULAM. El programa, al recibir como dato un entero positivo, obtiene y escribe la serie de ULAM.


int main()
{
    int num; // variable entera 'num' para almacenar el n�mero ingresado

    printf("Ingresa el numero para calcular la serie: "); // Solicita al usuario que ingrese un n�mero
    scanf("%d", &num); // Lee el n�mero ingresado por el usuario y lo almacena en 'num'

    if (num > 0)   // Verifica que el n�mero ingresado sea positivo
    {
        printf("\nSerie de ULAM\n"); // Imprime el encabezado de la serie de ULAM
        printf("%d\t", num); // Imprime el n�mero inicial de la serie

        while (num != 1)   // Bucle que contin�a mientras 'num' no sea 1
        {
            if (num % 2 == 0)   // Verifica si el n�mero es par
            {
                num = num / 2; // Si es par, divide el n�mero por 2
            }
            else     // Si el n�mero es impar
            {
                num = num * 3 + 1; // Si es impar, multiplica el n�mero por 3 y suma 1
            }
            printf("%d\t", num); // Imprime el siguiente n�mero en la serie
        }
    }
    else     // Si el n�mero ingresado no es positivo
    {
        printf("\nError: El numero debe ser un entero positivo."); // Imprime un mensaje de error
    }

    return 0; // Indica que el programa termin� correctamente
}
