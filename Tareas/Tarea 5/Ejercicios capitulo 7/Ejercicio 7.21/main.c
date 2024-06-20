#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intercambia(char FRA[][30], int n); // Prototipo de funci�n

void main(void)
{
    int i, n;
    char FRA[20][30];

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    getchar(); // Consumir el salto de l�nea despu�s de scanf

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la linea de texto numero %d: ", i + 1);
        gets(FRA[i]); // Se lee la cadena de caracteres dentro del ciclo
    }

    printf("\n\n");
    intercambia(FRA, n); // Llama a la funci�n para intercambiar las filas

    for (i = 0; i < n; i++)
    {
        printf("Impresion de la linea de texto %d: ", i + 1);
        puts(FRA[i]); // Imprime la l�nea de texto
    }
}

void intercambia(char FRA[][30], int n)
{
    /* Esta funci�n intercambia las filas del arreglo. */
    int i, j;
    j = n - 1;
    char cad[30];

    for (i = 0; i < (n / 2); i++)
    {
        strcpy(cad, FRA[i]); // Copia FRA[i] a cad
        strcpy(FRA[i], FRA[j]); // Copia FRA[j] a FRA[i]
        strcpy(FRA[j], cad); // Copia cad a FRA[j]
        j--; // Decrementa j
    }
}
