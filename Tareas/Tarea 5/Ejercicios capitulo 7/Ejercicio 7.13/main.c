#include <stdio.h>
#include <stdlib.h>


/* Calcula longitud.
   El programa calcula la longitud de la cadena sin utilizar la función strlen. */

int cuenta(char *); // Prototipo de función

void main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad); // Lee la cadena de caracteres

    i = cuenta(cad); // Llama a la función cuenta para obtener la longitud

    printf("\nLongitud de la cadena: %d", i);
}

int cuenta(char *cadena)
{
    /* La función calcula la longitud de la cadena. */

    int c = 0;

    while (cadena[c] != '\0') // Recorre la cadena hasta el final
        c++;

    return c; // Retorna la longitud de la cadena
}
