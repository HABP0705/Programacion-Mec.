#include <stdio.h>
#include <stdlib.h>

//Lanzamiento de martillo. El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio de los lanzamientos de la atleta cubana.


int main()
{
    int i, n; // dos variables enteras: 'i' para el contador y 'n' para el n�mero de lanzamientos
    float lan, sla = 0; // dos variables de tipo float: 'lan' para el lanzamiento ingresado y 'sla' para la suma acumulada de lanzamientos, inicializando 'sla' a 0

    do   // Bucle do-while que asegura que se ingrese un n�mero de lanzamientos v�lido (entre 1 y 11)
    {
        printf("Ingrese el numero de lanzamientos:\t"); // Solicita al usuario que ingrese el n�mero de lanzamientos
        scanf("%d", &n); // Lee el n�mero de lanzamientos ingresado por el usuario y lo almacena en 'n'
    }
    while (n < 1 || n > 11);   // Contin�a el bucle mientras 'n' sea menor que 1 o mayor que 11

    for (i = 1; i <= n; i++)   // Bucle for que se ejecuta 'n' veces para ingresar los lanzamientos
    {
        printf("\nIngrese el lanzamiento %d: ", i); // Solicita al usuario que ingrese el lanzamiento n�mero 'i'
        scanf("%f", &lan); // Lee el lanzamiento ingresado por el usuario y lo almacena en 'lan'
        sla = sla + lan; // Suma el lanzamiento a la variable 'sla' (suma acumulada de lanzamientos)
    }

    sla = sla / n; // Calcula el promedio de lanzamientos dividiendo la suma acumulada entre 'n'
    printf("\nEl promedio de lanzamientos es: %.2f", sla); // Imprime el promedio de lanzamientos con dos decimales de precisi�n

    return 0; // el programa termin� correctamente
}
