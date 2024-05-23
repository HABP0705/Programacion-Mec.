#include <stdio.h>
#include <stdlib.h>

// Spa.  El programa, al recibir como datos el tipo de tratamiento, la edad y el número de días de internación de un cliente en un spa, calcula el costo total del tratamiento.

#include <stdio.h>  // Incluye la librería estándar de entrada y salida

int main()
{
    int tratamiento, edad, dia;  // tres variables enteras: tratamiento, edad y dia
    float costo;  // variable de tipo float llamada costo
    printf("Ingrese el tipo de tratamiento, edad y dias: ");  // mensaje para solicitar la entrada de tres valores
    scanf("%d %d %d", &tratamiento, &edad, &dia);  // Lee tres valores enteros ingresados por el usuario y los almacena en tratamiento, edad y dia

    switch(tratamiento)  // Inicia una estructura switch para evaluar la variable tratamiento
    {
        case 1:  // Si tratamiento es 1
            costo = dia * 2800;  // Calcula el costo como dia multiplicado por 2800
            break;  // Termina este caso
        case 2:  // Si tratamiento es 2
            costo = dia * 1950;  // Calcula el costo como dia multiplicado por 1950
            break;  // Termina este caso
        case 3:  // Si tratamiento es 3
            costo = dia * 2500;  // Calcula el costo como dia multiplicado por 2500
            break;  // Termina este caso
        case 4:  // Si tratamiento es 4
            costo = dia * 1150;  // Calcula el costo como dia multiplicado por 1150
            break;  // Termina este caso
        default:  // Si tratamiento no coincide con ninguno de los casos anteriores
            costo = -1;  // Asigna -1 a costo para indicar un error
            break;  // Termina el caso default
    }

    if (costo != -1)  // Verifica si costo es diferente de -1 (es decir, si no hubo error en la clave de tratamiento)
    {
        if (edad >= 60)  // Verifica si la edad es mayor o igual a 60
        {
            costo = costo * 0.75;  // Aplica un descuento del 25% al costo
        }
        else  // Si la edad es menor a 60
        {
            if (edad <= 25)  // Verifica si la edad es menor o igual a 25
            {
                costo = costo * 0.85;  // Aplica un descuento del 15% al costo
            }
        }
        printf("\nclave tratamiento: %d\t dias: %d\t costo total: %8.2f", tratamiento, dia, costo);  // Imprime los valores de tratamiento, dia y costo total con formato

    }
    else  // Si hubo un error en la clave de tratamiento
    {
        printf("\nLa clave del tratamiento es incorrecta");  // Imprime un mensaje de error
    }

    return 0;  // Finaliza la ejecución del programa
}

