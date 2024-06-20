#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Cuenta letras minúsculas y mayúsculas.
   El programa, al recibir como dato una frase, determina el número de letras
   minúsculas y mayúsculas que existen en la frase. */

void main(void)
{
    char cad[50];
    int i = 0, mi = 0, ma = 0;

    printf("\nIngrese la cadena de caracteres (maximo 50 caracteres): ");
    gets(cad); // Lee la cadena de caracteres ingresada

    while(cad[i] != '\0') // Recorre la cadena hasta el final
    {
        if (islower(cad[i])) // Verifica si el caracter es minúscula
            mi++;
        else if (isupper(cad[i])) // Verifica si el caracter es mayúscula
            ma++;
        i++;
    }

    printf("\n\nNumero de letras minusculas: %d", mi); // Imprime el número de minúsculas
    printf("\nNumero de letras mayusculas: %d", ma); // Imprime el número de mayúsculas
}
