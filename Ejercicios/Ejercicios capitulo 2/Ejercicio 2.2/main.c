#include <stdio.h>
#include <stdlib.h>


int main()  //función principal
{
    float PRE, NPR;  // variables para el precio original y el nuevo precio
    printf("Ingrese el precio del producto: "); // Solicitar al usuario que ingrese el precio del producto
    scanf("%f", &PRE);// Leer el valor ingresado por el usuario y almacenarlo en la variable PRE

    if (PRE < 1500) // Verificar si el precio es menor a 1500
{
    NPR = PRE * 1.11; // Calcular el nuevo precio aplicando un incremento del 11%
    printf("\nNuevo precio: %7.2f\n", NPR);// Mostrar el nuevo precio con un formato de 7 caracteres de ancho y 2 decimales

    }

    return 0;  //el programa finalizó
}

