#include <stdio.h>
#include <stdlib.h>

// Serie. El programa imprime los términos y obtiene la suma de una determinada serie.


int main()
{
    int i = 2, cam = 1; // Declara e inicializa 'i' con 2 (primer número de la serie) y 'cam' con 1 (bandera de cambio)
    long sse = 0; // Declara e inicializa 'sse' con 0 para acumular la suma de la serie

    while (i <= 2500)   // Bucle que se ejecuta mientras 'i' sea menor o igual a 2500
    {
        sse = sse + i; // Suma el valor de 'i' a 'sse'
        printf("\t %d", i); // Imprime el valor actual de 'i'

        if (cam)   // Si 'cam' es 1
        {
            i += 5; // Incrementa 'i' en 5
            cam--; // Cambia 'cam' a 0
        }
        else     // Si 'cam' es 0
        {
            i += 3; // Incrementa 'i' en 3
            cam++; // Cambia 'cam' a 1
        }
    }

    printf("\nLa suma de la serie es: %ld\n", sse); // Imprime la suma acumulada de la serie

    return 0; // el programa terminó correctamente
}


