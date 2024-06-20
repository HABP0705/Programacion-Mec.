#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Decodifica.
   El programa decodifica una cadena de caracteres compuesta por números y
   letras. */

void interpreta(char *); // Prototipo de función

void main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad); // Lee la cadena de caracteres

    interpreta(cad); // Llama a la función interpreta para decodificar la cadena
}

void interpreta(char *cadena)
{
    /* Esta función se utiliza para decodificar la cadena de caracteres. */

    int i = 0, j, k;

    while (cadena[i] != '\0') // Recorre la cadena hasta el final
    {
        if (isalpha(cadena[i])) // Verifica si el caracter es una letra
        {
            k = cadena[i - 1] - '0';
            /* En la variable entera k se almacena el valor numérico del
               caracter anterior, que se asume es un dígito, restando '0' para
               convertir el carácter a su valor numérico. */

            for (j = 0; j < k; j++) // Repite el carácter k veces
                putchar(cadena[i]);
        }
        i++;
    }
}
