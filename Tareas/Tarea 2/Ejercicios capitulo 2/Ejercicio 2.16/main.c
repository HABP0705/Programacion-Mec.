#include <stdio.h>
#include <stdlib.h>

// Empresa textil.  El programa, al recibir como datos decisivos la categoría y antigüedad de un empleado, determina si el mismo reúne las condiciones establecidas por la empresa para ocupar un nuevo cargo en una sucursal.


int main()  // Define la función principal del programa
{
    int clave, categoria, antiguedad, decision;  // cuatro variables enteras: clave, categoria, antiguedad y decision
    printf("Ingrese la clave del trabajador su categoria y antiguedad: ");  // mensaje para solicitar la entrada de tres valores
    scanf("%d %d %d", &clave, &categoria, &antiguedad);  // Lee tres valores enteros ingresados por el usuario y los almacena en clave, categoria y antiguedad

    switch(categoria)  // Inicia una estructura switch para evaluar la variable categoria
    {
    case 3:  // Si la categoria es 3
    case 4:  // O si la categoria es 4
        if (antiguedad >= 5)  // Verifica si la antiguedad es mayor o igual a 5
        {
            decision = 1;  // Asigna 1 a decision para indicar que cumple las condiciones
        }
        else
        {
            decision = 0;  // Asigna 0 a decision para indicar que no cumple las condiciones
        }
        break;  // Termina este caso

    case 2:  // Si la categoria es 2
        if (antiguedad >= 7)  // Verifica si la antiguedad es mayor o igual a 7
        {
            decision = 1;  // Asigna 1 a decision para indicar que cumple las condiciones
        }
        else
        {
            decision = 0;  // Asigna 0 a decision para indicar que no cumple las condiciones
        }
        break;  // Termina este caso

    default:  // Si la categoria no coincide con ninguno de los casos anteriores
        decision = 0;  // Asigna 0 a decision para indicar que no cumple las condiciones
        break;  // Termina el caso default
    }

    if (decision)  // Verifica si decision es verdadero (1)
    {
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto de trabajo", clave);  // mensaje indicando que el trabajador cumple las condiciones
    }
    else  // Si decision es falso (0)
    {
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto de trabajo", clave);  // mensaje indicando que el trabajador no cumple las condiciones
    }

    return 0;  // Finaliza la ejecución del programa
}
