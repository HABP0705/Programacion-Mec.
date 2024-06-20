#include <stdio.h>
#include <stdlib.h>


/* Calcula longitud en forma recursiva.
   El programa calcula de manera recursiva la longitud de la cadena sin utilizar
   la función strlen. */

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
    /* Esta función calcula la longitud de la cadena en forma recursiva. Observa que
       mientras no lleguemos al último caracter de la cadena, incrementamos la
       cuenta en uno y llamamos a la función con el siguiente caracter. */

    if (cadena[0] == '\0') // Condición de parada: si el caracter actual es el fin de cadena
        return 0;
    else
        return 1 + cuenta(&cadena[1]); // Llama recursivamente a cuenta con la siguiente posición
}
