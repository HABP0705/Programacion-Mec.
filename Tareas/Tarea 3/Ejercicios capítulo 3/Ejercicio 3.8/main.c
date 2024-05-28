#include <stdio.h>
#include <stdlib.h>

//Factorial.  El programa calcula el factorial de un número entero.


int main()   // Función principal del programa
{
    int i, num; // Declara dos variables enteras: 'i' para el contador y 'num' para el número ingresado
    long fac; // Declara una variable larga 'fac' para almacenar el factorial
    printf("\nIngrese el numero: "); // Solicita al usuario que ingrese un número
    scanf("%d", &num); // Lee el número ingresado por el usuario y lo almacena en 'num'

    if (num > 0)   // Verifica si el número ingresado es positivo
    {
        fac = 1; // Inicializa 'fac' a 1, ya que el factorial de cualquier número comienza en 1
        for (i = 1; i <= num; i++)   // Bucle for que se ejecuta desde 1 hasta el número ingresado
        {
            fac *= i; // Multiplica 'fac' por el contador 'i' en cada iteración para calcular el factorial
        }
        printf("\nEl factorial de %d es: %ld", num, fac); // Imprime el factorial del número ingresado
    }
    else     // Si el número ingresado no es positivo
    {
        printf("\nError en el dato ingresado"); // Muestra un mensaje de error
    }

    return 0; // el programa finalizo correctamente
}
