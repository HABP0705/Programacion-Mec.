#include <stdio.h>
#include <stdlib.h>

//Examen de admisión. El programa, al recibir como datos una serie de calificaciones de un examen, obtiene el rango en que se encuentran éstas.


int main()
{
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0; // Declara e inicializa contadores para cada rango de calificaciones
    float cal; // variable de tipo float para almacenar la calificación

    printf("Ingresa la calificacion del alumno: "); // Solicita al usuario que ingrese la calificación del alumno
    scanf("%f", &cal); // Lee la calificación ingresada por el usuario y la almacena en 'cal'

    while (cal != 0)   // Bucle que continúa mientras la calificación no sea 0
    {
        if (cal < 4)   // Si la calificación es menor que 4
        {
            r1++; // Incrementa el contador del rango 0..3.9
        }
        else if (cal < 6)     // Si la calificación es menor que 6 pero mayor o igual a 4
        {
            r2++; // Incrementa el contador del rango 4..5.99
        }
        else if (cal < 8)     // Si la calificación es menor que 8 pero mayor o igual a 6
        {
            r3++; // Incrementa el contador del rango 6..7.99
        }
        else if (cal < 9)     // Si la calificación es menor que 9 pero mayor o igual a 8
        {
            r4++; // Incrementa el contador del rango 8..8.99
        }
        else     // Si la calificación es mayor o igual a 9
        {
            r5++; // Incrementa el contador del rango 9..10
        }

        printf("Ingresa la calificacion del alumno: "); // Solicita nuevamente al usuario que ingrese la calificación del alumno
        scanf("%f", &cal); // Lee la siguiente calificación ingresada por el usuario y la almacena en 'cal'
    }

    printf("\n0..3.9 = %d", r1); // Imprime la cantidad de calificaciones en el rango 0..3.9
    printf("\n4..5.99 = %d", r2); // Imprime la cantidad de calificaciones en el rango 4..5.99
    printf("\n6..7.99 = %d", r3); // Imprime la cantidad de calificaciones en el rango 6..7.99
    printf("\n8..8.99 = %d", r4); // Imprime la cantidad de calificaciones en el rango 8..8.99
    printf("\n9..10 = %d", r5); // Imprime la cantidad de calificaciones en el rango 9..10

    return 0; // el programa terminó correctamente
}

