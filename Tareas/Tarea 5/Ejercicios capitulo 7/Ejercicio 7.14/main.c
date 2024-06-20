#include <stdio.h>
#include <stdlib.h>


/* Calcula longitud en forma recursiva.
   El programa calcula de manera recursiva la longitud de la cadena sin utilizar
   la funci�n strlen. */

int cuenta(char *); // Prototipo de funci�n

void main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad); // Lee la cadena de caracteres

    i = cuenta(cad); // Llama a la funci�n cuenta para obtener la longitud

    printf("\nLongitud de la cadena: %d", i);
}

int cuenta(char *cadena)
{
    /* Esta funci�n calcula la longitud de la cadena en forma recursiva. Observa que
       mientras no lleguemos al �ltimo caracter de la cadena, incrementamos la
       cuenta en uno y llamamos a la funci�n con el siguiente caracter. */

    if (cadena[0] == '\0') // Condici�n de parada: si el caracter actual es el fin de cadena
        return 0;
    else
        return 1 + cuenta(&cadena[1]); // Llama recursivamente a cuenta con la siguiente posici�n
}
