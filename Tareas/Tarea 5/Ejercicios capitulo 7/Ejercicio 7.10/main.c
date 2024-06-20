#include <stdio.h>
#include <stdlib.h>


/* Suma y promedio.
   El programa, al recibir como datos varias cadenas de caracteres que
   contienen reales, los suma y obtiene el promedio de los mismos. */

void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (Si/No)? ");
    c = getchar(); // Lee la respuesta del usuario

    while (c == 'S' || c == 's') // Mientras la respuesta sea 'S' o 's'
    {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin); // Limpia el búfer de entrada
        gets(cad);     // Lee la cadena de caracteres ingresada
        i++;           // Incrementa el contador de cadenas ingresadas
        sum += atof(cad); // Convierte la cadena a número real y lo suma a sum

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar(); // Lee la respuesta del usuario
    }

    printf("\nSuma: %.2f", sum);             // Imprime la suma total
    if (i > 0)
        printf("\nPromedio: %.2f", sum / i); // Calcula e imprime el promedio si se ingresaron cadenas
    else
        printf("\nNo se ingresaron números."); // Imprime si no se ingresaron cadenas válidas
}
