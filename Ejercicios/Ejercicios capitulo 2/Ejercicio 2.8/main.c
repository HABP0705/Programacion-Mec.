#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Matricula, Carrera, Semestre; // variables enteras para Matricula, Carrera y Semestre.
    float Promedio; // variable flotante para almacenar el Promedio.

    printf("Ingrese su matricula: "); // mensaje solicitando ingresar la matrícula.
    scanf("%d", &Matricula); // Lee y almacena la matrícula ingresada por el usuario.

    printf("Ingrese su carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica): "); // Muestra opciones de carrera y solicita ingresar la opción.
    scanf("%d", &Carrera); // Lee y almacena la opción de carrera ingresada por el usuario.

    printf("Ingrese su semestre: "); // mensaje solicitando ingresar el semestre.
    scanf("%d", &Semestre); // Lee y almacena el semestre ingresado por el usuario.

    printf("Ingrese su promedio: "); // mensaje solicitando ingresar el promedio.
    scanf("%f", &Promedio); // Lee y almacena el promedio ingresado por el usuario.

    switch(Carrera) // Inicia una estructura switch basada en la variable Carrera.
    {
    case 1: // Caso para la carrera Industrial.
        if (Semestre >= 6 && Promedio >= 8.5) // Verifica si el semestre es mayor o igual a 6 y el promedio es mayor o igual a 8.5.
        {
            printf("\nPuedes ser asistente"); // Si se cumplen las condiciones, muestra un mensaje indicando que puede ser asistente.
        }
        else
        {
            printf("\nNo puedes ser asistente"); // Si no se cumplen las condiciones, muestra un mensaje indicando que no puede ser asistente.
        }
        break;

    case 2: // Caso para la carrera Telemática.
        if (Semestre >= 5 && Promedio >= 9.0) // Verifica si el semestre es mayor o igual a 5 y el promedio es mayor o igual a 9.0.
        {
            printf("\nPuedes ser asistente"); // Si se cumplen las condiciones, muestra un mensaje indicando que puede ser asistente.
        }
        else
        {
            printf("\nNo puedes ser asistente"); // Si no se cumplen las condiciones, muestra un mensaje indicando que no puede ser asistente.
        }
        break;

    case 3: // Caso para la carrera Computación.
        if (Semestre >= 6 && Promedio >= 8.8) // Verifica si el semestre es mayor o igual a 6 y el promedio es mayor o igual a 8.8.
        {
            printf("\nPuedes ser asistente"); // Si se cumplen las condiciones, muestra un mensaje indicando que puede ser asistente.
        }
        else
        {
            printf("\nNo puedes ser asistente"); // Si no se cumplen las condiciones, muestra un mensaje indicando que no puede ser asistente.
        }
        break;

    case 4: // Caso para la carrera Mecánica.
        if (Semestre >= 4 && Promedio >= 9.0) // Verifica si el semestre es mayor o igual a 4 y el promedio es mayor o igual a 9.0.
        {
            printf("\nPuedes ser asistente"); // Si se cumplen las condiciones, muestra un mensaje indicando que puede ser asistente.
        }
        else
        {
            printf("\nNo puedes ser asistente"); // Si no se cumplen las condiciones, muestra un mensaje indicando que no puede ser asistente.
        }
        break;

    default: // Caso por defecto para cualquier otra opción de carrera no válida.
        printf("\nError: Carrera no valida"); // Muestra un mensaje indicando que la carrera ingresada no es válida.
        break;
    }

    return 0; // el programa se ejecutó correctamente.
}

