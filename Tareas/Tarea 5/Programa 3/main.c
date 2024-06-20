#include <stdio.h>
#include <stdlib.h>


void contarCaracteres(char* cadena, int* minusculas, int* mayusculas, int* numeros)
{
    *minusculas = 0;
    *mayusculas = 0;
    *numeros = 0;

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] >= 'a' && cadena[i] <= 'z')
        {
            (*minusculas)++;
        }
        else if (cadena[i] >= 'A' && cadena[i] <= 'Z')
        {
            (*mayusculas)++;
        }
        else if (cadena[i] >= '0' && cadena[i] <= '9')
        {
            (*numeros)++;
        }
    }
}

int main()
{
    char cadena[100];
    int minusculas, mayusculas, numeros;

    printf("Introduce una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminar el salto de línea al final de la cadena si existe
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == '\n')
        {
            cadena[i] = '\0';
            break;
        }
    }

    contarCaracteres(cadena, &minusculas, &mayusculas, &numeros);

    printf("Numero de letras minusculas: %d\n", minusculas);
    printf("Numero de letras mayusculas: %d\n", mayusculas);
    printf("Cantidad de numeros: %d\n", numeros);

    return 0;
}
