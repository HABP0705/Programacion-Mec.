#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Cadena invertida.
   El programa obtiene la cadena invertida. */

char *inverso(char *); // Prototipo de función

void main(void)
{
    char fra[50], aux[50];

    printf("\nIngrese la linea de texto: ");
    gets(fra); // Lee la línea de texto

    strcpy(aux, inverso(fra)); // Copia a aux el resultado de la función inverso

    printf("\nEscribe la linea de texto en forma inversa: ");
    puts(aux); // Imprime la línea de texto invertida
}

char *inverso(char *cadena)
{
    /* La función calcula el inverso de una cadena y regresa el resultado al
       programa principal. */

    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena); // Obtiene la longitud de la cadena
    j = lon - 1;

    while (i < j) // Reemplaza los caracteres hasta la mitad de la cadena
    {
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }

    return cadena; // Retorna la cadena invertida
}
