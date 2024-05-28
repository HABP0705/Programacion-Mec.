#include <stdio.h>
#include <stdlib.h>

//Factorial.  El programa calcula el factorial de un n�mero entero.


int main()   // Funci�n principal del programa
{
    int i, num; // Declara dos variables enteras: 'i' para el contador y 'num' para el n�mero ingresado
    long fac; // Declara una variable larga 'fac' para almacenar el factorial
    printf("\nIngrese el numero: "); // Solicita al usuario que ingrese un n�mero
    scanf("%d", &num); // Lee el n�mero ingresado por el usuario y lo almacena en 'num'

    if (num > 0)   // Verifica si el n�mero ingresado es positivo
    {
        fac = 1; // Inicializa 'fac' a 1, ya que el factorial de cualquier n�mero comienza en 1
        for (i = 1; i <= num; i++)   // Bucle for que se ejecuta desde 1 hasta el n�mero ingresado
        {
            fac *= i; // Multiplica 'fac' por el contador 'i' en cada iteraci�n para calcular el factorial
        }
        printf("\nEl factorial de %d es: %ld", num, fac); // Imprime el factorial del n�mero ingresado
    }
    else     // Si el n�mero ingresado no es positivo
    {
        printf("\nError en el dato ingresado"); // Muestra un mensaje de error
    }

    return 0; // el programa finalizo correctamente
}
