#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Funci�n matem�tica. El programa obtiene el resultado de una funci�n.


int main()
{
    //variables
    int caso, numero;        // Variable 'caso' para el tipo de operaci�n, 'numero' para el valor a operar
    float resultado;         // Variable 'resultado' para almacenar el resultado de la operaci�n

    // Solicitud y lectura del caso
    printf("Ingrese el caso: ");  // Muestra el mensaje para ingresar el caso
    scanf("%d", &caso);           // Lee el valor de 'caso' ingresado por el usuario

    // Solicitud y lectura del n�mero
    printf("Ingrese el numero: "); // Muestra el mensaje para ingresar el n�mero
    scanf("%d", &numero);          // Lee el valor de 'numero' ingresado por el usuario

    // Evaluaci�n del caso y c�lculo del resultado
    switch (caso)
    {
    case 1: // Si el caso es 1
        resultado = numero / 5.0;  // Divide el n�mero por 5.0
        break;                     // Rompe el bloque del switch
    case 2: // Si el caso es 2
        resultado = numero * numero; // Eleva el n�mero al cuadrado
        break;                       // Rompe el bloque del switch
    case 3: // Si el caso es 3
    case 4: // Si el caso es 4
        resultado = (6 * numero) / 2.0; // Multiplica el n�mero por 6 y divide el resultado por 2.0
        break;                          // Rompe el bloque del switch
    default: // Para cualquier otro caso
        resultado = 1; // Asigna 1 al resultado
        break;         // Rompe el bloque del switch
    }

    printf("El resultado es: %.2f\n", resultado); //resultado con dos decimales

    return 0; // Fin del programa
}
