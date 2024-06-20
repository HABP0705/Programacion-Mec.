#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Cuenta cadenas.
   El programa, al recibir dos cadenas de caracteres, calcula e imprime cuántas
   veces se encuentra la segunda cadena en la primera. */

void main(void)
{
    char cad1[50], cad2[50], *cad0;
    int i = 0;

    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1); // Lee la primera cadena de caracteres

    printf("\nIngrese la cadena a buscar: ");
    gets(cad2); // Lee la cadena a buscar

    cad0 = strstr(cad1, cad2); // Encuentra la primera ocurrencia de cad2 en cad1

    while(cad0 != NULL)
    {
        i++; // Incrementa el contador cada vez que se encuentra la cadena
        cad0 = strstr(cad0 + 1, cad2); // Busca la siguiente ocurrencia
    }

    printf("\nEl numero de veces que aparece la segunda cadena es: %d", i);
}
