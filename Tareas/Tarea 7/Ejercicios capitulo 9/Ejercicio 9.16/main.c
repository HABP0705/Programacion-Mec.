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

    while (fgets(cad, 30, ap1) != NULL) /* Leer l�nea por l�nea */
    {
        char *ptr = cad;
        while (*ptr != '\0')
        {
            if (isdigit(*ptr) || (*ptr == '-' && isdigit(*(ptr + 1)))) /* Verificar si el primer car�cter es un n�mero o un signo negativo seguido de un n�mero */
            {
                float num = atof(ptr); /* Convertir la parte num�rica de la cadena a float */
                sum += num;
                count++;
                break; /* Romper el bucle interior despu�s de encontrar el n�mero inicial */
            }
            else if (*ptr == '+' || *ptr == '-' || *ptr == ' ' || *ptr == '.') /* Permitir caracteres especiales permitidos en n�meros reales */
            {
                ptr++;
            }
            else
            {
                break; /* Romper el bucle si no es un car�cter num�rico v�lido */
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
        printf("\nNo se encontraron n�meros v�lidos para calcular la suma y el promedio.");
    }
}
