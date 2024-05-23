#include <stdio.h>
#include <stdlib.h>
//Billete de ferrocarril. El programa calcula el costo de un billete de ferrocarril teniendo en cuenta la distancia entre las dos ciudades y el tiempo de permanencia del pasajero.

int main()
{
    int Distancia, Tiempo; // variables enteras: Distancia y Tiempo
    float Billete; // variable flotante: Billete
    printf("Ingrese el tiempo de estancia y la distancia entre ciudades: "); // mensaje solicitando ingresar la distancia entre ciudades y el tiempo de estancia
    scanf("%d %d", &Distancia, &Tiempo); // Lee dos valores enteros ingresados por el usuario y los asigna a las variables Distancia y Tiempo
    if ((Distancia*2 > 500) && (Tiempo > 10)) // Verifica si el doble de la distancia es mayor a 500 y si el tiempo es mayor a 10
    {
        Billete = Distancia * 2 * 0.19 * 0.8; // Calcula el costo del billete con un descuento del 20% si se cumplen las condiciones
    }
    else
    {
        Billete = Distancia * 2 * 0.19; // Calcula el costo del billete sin descuento si no se cumplen las condiciones
        printf("\n\nCosto del billete: %7.2f", Billete); // Imprime el costo del billete
    }

    return 0; // el programa se ejecutó correctamente
}
