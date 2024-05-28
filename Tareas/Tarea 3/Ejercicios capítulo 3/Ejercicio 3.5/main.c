#include <stdio.h>
#include <stdlib.h>

// Suma pagos. El programa obtiene la suma de los pagos realizados el último mes.


int main()
{
    float pag, spa = 0; // dos variables de tipo float: 'pag' para el pago ingresado y 'spa' para la suma acumulada de pagos, inicializando 'spa' a 0
    printf("Ingrese el primer pago:\t"); // Solicita al usuario que ingrese el primer pago
    scanf("%f", &pag); // Lee el primer pago ingresado por el usuario y lo almacena en 'pag'

    do   // Inicia un bucle do-while que asegura que el bloque de código se ejecutará al menos una vez
    {
        spa = spa + pag; // Suma el pago ingresado a 'spa'
        printf("Ingrese el siguiente pago o elige 0 para terminar:\t"); // Solicita al usuario que ingrese el siguiente pago o elija 0 para terminar
        scanf("%f", &pag); // Lee el siguiente pago ingresado por el usuario y lo almacena en 'pag'
    }
    while (pag);   // Continúa el bucle mientras 'pag' sea diferente de 0

    {
        // Este bloque se ejecuta después de que el bucle termina
        printf("\nEl total de pagos del mes es: %.2f", spa); // Imprime el total acumulado de pagos con dos decimales de precisión
    }

    return 0; // el programa terminó correctamente
}
