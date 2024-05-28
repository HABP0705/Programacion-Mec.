#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Serie de ULAM. El programa, al recibir como dato un entero positivo, obtiene y escribe la serie de ULAM.


int main()
{
    int num; // variable entera 'num' para almacenar el número ingresado

    printf("Ingresa el numero para calcular la serie: "); // Solicita al usuario que ingrese un número
    scanf("%d", &num); // Lee el número ingresado por el usuario y lo almacena en 'num'

    if (num > 0)   // Verifica que el número ingresado sea positivo
    {
        printf("\nSerie de ULAM\n"); // Imprime el encabezado de la serie de ULAM
        printf("%d\t", num); // Imprime el número inicial de la serie

        while (num != 1)   // Bucle que continúa mientras 'num' no sea 1
        {
            if (num % 2 == 0)   // Verifica si el número es par
            {
                num = num / 2; // Si es par, divide el número por 2
            }
            else     // Si el número es impar
            {
                num = num * 3 + 1; // Si es impar, multiplica el número por 3 y suma 1
            }
            printf("%d\t", num); // Imprime el siguiente número en la serie
        }
    }
    else     // Si el número ingresado no es positivo
    {
        printf("\nError: El numero debe ser un entero positivo."); // Imprime un mensaje de error
    }

    return 0; // Indica que el programa terminó correctamente
}
