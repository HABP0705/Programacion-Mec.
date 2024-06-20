#include <stdio.h>
#include <stdlib.h>



void invertirMayusculasMinusculas(char* cadena)
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] >= 'a' && cadena[i] <= 'z')
        {
            cadena[i] = cadena[i] - ('a' - 'A');
        }
        else if (cadena[i] >= 'A' && cadena[i] <= 'Z')
        {
            cadena[i] = cadena[i] + ('a' - 'A');
        }
    }
}

int main()
{
    char cadena[100];

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

    invertirMayusculasMinusculas(cadena);

    printf("Cadena convertida: %s\n", cadena);

    return 0;
}
