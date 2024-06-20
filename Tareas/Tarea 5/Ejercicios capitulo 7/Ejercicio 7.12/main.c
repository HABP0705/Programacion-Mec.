#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Cuenta letras min�sculas y may�sculas.
   El programa, al recibir como dato una frase, determina el n�mero de letras
   min�sculas y may�sculas que existen en la frase. */

void main(void)
{
    char cad[50];
    int i = 0, mi = 0, ma = 0;

    printf("\nIngrese la cadena de caracteres (maximo 50 caracteres): ");
    gets(cad); // Lee la cadena de caracteres ingresada

    while(cad[i] != '\0') // Recorre la cadena hasta el final
    {
        if (islower(cad[i])) // Verifica si el caracter es min�scula
            mi++;
        else if (isupper(cad[i])) // Verifica si el caracter es may�scula
            ma++;
        i++;
    }

    printf("\n\nNumero de letras minusculas: %d", mi); // Imprime el n�mero de min�sculas
    printf("\nNumero de letras mayusculas: %d", ma); // Imprime el n�mero de may�sculas
}
