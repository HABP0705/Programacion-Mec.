#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Minúsculas y mayúsculas.
   El programa, al recibir como dato un arreglo unidimensional de tipo
   cadena de caracteres, determina el número de minúsculas y mayúsculas
   que hay en cada cadena. */

void minymay(char *cad); // Prototipo de función

void main(void)
{
    int i, n;
    char FRA[20][50]; // Arreglo bidimensional para almacenar las cadenas

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        /* Para cada fila se lee la cadena correspondiente */
        printf("Ingrese la linea %d de texto: ", i + 1);
        fflush(stdin); // Limpia el búfer de entrada
        gets(FRA[i]);  // Lee la cadena de texto y la guarda en FRA[i]
    }

    printf("\n\n");

    for (i = 0; i < n; i++)
        minymay(FRA[i]); // Llama a la función minymay para contar minúsculas y mayúsculas
}

void minymay(char *cadena)
{
    /* Esta función se utiliza para calcular el número de minúsculas
       y mayúsculas que hay en cada cadena. */

    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0')
    {
        if (islower(cadena[i])) // Verifica si el caracter es minúscula
            mi++;
        else if (isupper(cadena[i])) // Verifica si el caracter es mayúscula
            ma++;
        i++;
    }

    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d", ma);
}
