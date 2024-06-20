#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Verifica.
   El programa, al recibir como datos una cadena de caracteres y una posici�n espec�fica en la cadena,
   determina si el caracter correspondiente es una letra min�scula. */

void main(void)
{
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    gets(cad); // Lee la cadena de caracteres

    printf("\nIngrese la posicion en la cadena que desea verificar: ");
    scanf("%d", &n); // Lee la posici�n a verificar

    if ((n > 0) && (n <= 50))
    {
        p = cad[n - 1]; // Ajusta la posici�n (el usuario ingresa 1-based index)

        if (islower(p)) // Verifica si el caracter es min�scula
            printf("\n%c es una letra minuscula", p);
        else
            printf("\n%c no es una letra minuscula", p);
    }
    else
    {
        printf("\nEl valor ingresado de n es incorrecto");
    }
}
