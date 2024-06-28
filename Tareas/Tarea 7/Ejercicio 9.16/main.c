#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void sumypro(FILE *);

void main(void)
{
    FILE *ap;

    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        sumypro(ap);
        fclose(ap);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }
}

void sumypro(FILE *ap1)
{
    char cad[30];
    float sum = 0.0;
    int count = 0;

    while (fgets(cad, 30, ap1) != NULL) /* Leer línea por línea */
    {
        char *ptr = cad;
        while (*ptr != '\0')
        {
            if (isdigit(*ptr) || (*ptr == '-' && isdigit(*(ptr + 1)))) /* Verificar si el primer carácter es un número o un signo negativo seguido de un número */
            {
                float num = atof(ptr); /* Convertir la parte numérica de la cadena a float */
                sum += num;
                count++;
                break; /* Romper el bucle interior después de encontrar el número inicial */
            }
            else if (*ptr == '+' || *ptr == '-' || *ptr == ' ' || *ptr == '.') /* Permitir caracteres especiales permitidos en números reales */
            {
                ptr++;
            }
            else
            {
                break; /* Romper el bucle si no es un carácter numérico válido */
            }
        }
    }

    if (count > 0)
    {
        printf("\nSuma: %.2f", sum);
        printf("\nPromedio: %.2f", sum / count);
    }
    else
    {
        printf("\nNo se encontraron números válidos para calcular la suma y el promedio.");
    }
}
