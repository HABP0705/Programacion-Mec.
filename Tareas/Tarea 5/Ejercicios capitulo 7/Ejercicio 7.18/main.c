#include <stdio.h>
#include <stdlib.h>

/* Cadena invertida resuelta en forma recursiva. */
void inverso(char *); // Prototipo de funci�n

void main(void)
{
    char fra[50];

    printf("\nIngrese la linea de texto: ");
    gets(fra); // Lee la l�nea de texto

    printf("\nLa linea de texto en forma inversa es: ");
    inverso(fra); // Llama a la funci�n inverso para imprimir la cadena invertida
    printf("\n");
}

void inverso(char *cadena)
{
    // La funci�n inverso obtiene precisamente el inverso de la cadena.

    if (cadena[0] != '\0') // Condici�n de parada: si no es el final de la cadena
    {
        inverso(&cadena[1]); // Llama recursivamente a inverso con el siguiente caracter
        putchar(cadena[0]); // Imprime el caracter actual
    }
    }
