#include <stdio.h>
#include <stdlib.h>

//Promedio curso.
//El programa, al recibir como dato el promedio de un alumno en un curso universitario, escribe aprobado si su promedio es mayor o igual a 6, o reprobado en caso contrario.


int main()
{
    float PRO;  //variable de tipo flotante para almacenar el promedio del alumno

    printf("ingrese el promedio del alumno:");  // Solicita al usuario que ingrese el promedio del alumno

    scanf("%f", &PRO);  // Lee el promedio ingresado por el usuario y lo almacena en la variable PRO

    if (PRO >= 6.0)  // Verifica si el promedio es mayor o igual a 6.0
    {
        printf("\nAprobado");  // Si la condición es verdadera, imprime "Aprobado"
    }
    else  // Si la condición es falsa (el promedio es menor que 6.0)
    {
        printf("\nReprobado");  // Imprime "Reprobado"
    }

    return 0;  // finaliza el programa
}
