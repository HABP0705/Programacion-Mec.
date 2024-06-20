#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>

void main(void)
{
    int i;
    char cad0[20] = "Hola Mexico";     // Declara y inicializa cad0 con la cadena "Hola Mexico"
    char cad1[20] = "Hola Guatemala";  // Declara y inicializa cad1 con la cadena "Hola Guatemala"
    char cad2[20] = "Hola Venezuela";  // Declara y inicializa cad2 con la cadena "Hola Venezuela"
    char cad3[20] = "Hola Mexico";     // Declara y inicializa cad3 con la cadena "Hola Mexico"
    char *c, c3;

    i = strcmp(cad0, cad1);    // Compara cad0 y cad1, devuelve un valor entero
    printf("\nResultado de la comparacion (cad0 y cad1): %d", i);

    i = strcmp(cad0, cad2);    // Compara cad0 y cad2, devuelve un valor entero
    printf("\nResultado de la comparacion (cad0 y cad2): %d", i);

    i = strcmp(cad0, cad3);    // Compara cad0 y cad3, devuelve un valor entero
    printf("\nResultado de la comparacion (cad0 y cad3): %d", i);

    i = strlen(cad0);          // Obtiene la longitud de cad0
    printf("\nLongitud cadena cad0: %d", i);

    i = strlen(cad1);          // Obtiene la longitud de cad1
    printf("\nLongitud cadena cad1: %d", i);

    c = strchr(cad1, 'G');     // Busca la primera ocurrencia de 'G' en cad1
    if (c != NULL)
    {
        c3 = *c;               // Asigna el valor apuntado por c a c3
        printf("\nEl valor de c3 es: %c", c3);
    }

    c = strchr(cad2, 'V');     // Busca la primera ocurrencia de 'V' en cad2
    if (c != NULL)
    {
        c3 = *c;               // Asigna el valor apuntado por c a c3
        printf("\nEl valor de c3 es: %c", c3);
    }
}
