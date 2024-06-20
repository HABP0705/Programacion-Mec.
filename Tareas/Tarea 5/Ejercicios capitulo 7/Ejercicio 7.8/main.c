#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Min�sculas y may�sculas.
   El programa, al recibir como dato un arreglo unidimensional de tipo
   cadena de caracteres, determina el n�mero de min�sculas y may�sculas
   que hay en cada cadena. */

void minymay(char *cad); // Prototipo de funci�n

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
        fflush(stdin); // Limpia el b�fer de entrada
        gets(FRA[i]);  // Lee la cadena de texto y la guarda en FRA[i]
    }

    printf("\n\n");

    for (i = 0; i < n; i++)
        minymay(FRA[i]); // Llama a la funci�n minymay para contar min�sculas y may�sculas
}

void minymay(char *cadena)
{
    /* Esta funci�n se utiliza para calcular el n�mero de min�sculas
       y may�sculas que hay en cada cadena. */

    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0')
    {
        if (islower(cadena[i])) // Verifica si el caracter es min�scula
            mi++;
        else if (isupper(cadena[i])) // Verifica si el caracter es may�scula
            ma++;
        i++;
    }

    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d", ma);
}
