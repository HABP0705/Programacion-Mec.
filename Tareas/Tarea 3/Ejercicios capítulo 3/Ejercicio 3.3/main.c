#include <stdio.h>
#include <stdlib.h>

// Suma pagos. El programa, al recibir como datos un conjunto de pagos realizados en el último mes, obtiene la suma de los mismos.

int main()
{

    float pag, spa; // dos variables de tipo float: 'pag' para el pago ingresado y 'spa' para la suma de pagos
    spa = 0; // Inicializa 'spa' a 0

    printf("Ingrese el primer pago:\t"); // Solicita al usuario que ingrese el primer pago
    scanf("%f", &pag); // Lee el pago ingresado por el usuario y lo almacena en 'pag'

    while (pag != 0)   // Inicia un bucle que continúa mientras 'pag' sea diferente de 0
    {
        spa = spa + pag; // Suma el pago ingresado a 'spa'
        printf("Ingrese el siguiente pago:\t"); // Solicita al usuario que ingrese el siguiente pago
        scanf("%f", &pag); // Lee el siguiente pago ingresado por el usuario y lo almacena en 'pag'
    }

    printf("\nEl total de pagos del mes es: %.2f\n", spa); // Imprime el total de pagos del mes con dos decimales de precisión

    return 0; // el programa terminó correctamente
}
