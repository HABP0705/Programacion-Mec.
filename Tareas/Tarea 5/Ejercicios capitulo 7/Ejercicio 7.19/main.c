#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Cuenta palabras.
   El programa calcula el número de palabras que hay en la cadena de caracteres. */

int cuentap(char *); // Prototipo de función

void main(void)
{
    int i;
    char fra[50];

    printf("\nIngrese la linea de texto: ");
    gets(fra); // Lee la línea de texto

    strcat(fra, " "); // Agrega un espacio en blanco al final de la cadena

    i = cuentap(fra); // Llama a la función cuentap para contar las palabras

    printf("\nLa linea de texto tiene %d palabras", i);
}

int cuentap(char *cad)
{
    /* La función cuenta el número de palabras que hay en la cadena de caracteres. */

    int i = 0;
    char *cad0;

    cad0 = strtok(cad, " "); // Divide la cadena en tokens usando espacio como delimitador

    while (cad0 != NULL) // Mientras haya más tokens
    {
        i++; // Incrementa el contador de palabras
        cad0 = strtok(NULL, " "); // Obtiene el siguiente token
    }

    return i; // Retorna el número de palabras
}
