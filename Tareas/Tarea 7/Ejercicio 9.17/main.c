#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cambia(FILE *, FILE *);

void main(void)
{
    FILE *ar, *ap;

    ar = fopen("arc.txt", "r"); /* Abre el archivo arc.txt para lectura. */
    ap = fopen("arc1.txt", "w"); /* Abre el archivo arc1.txt para escritura. */

    if (ar != NULL && ap != NULL)
    {
        cambia(ar, ap);
        fclose(ar);
        fclose(ap);
        printf("Reemplazo completado. Verifique el archivo arc1.txt.\n");
    }
    else
    {
        printf("No se pueden abrir los archivos.\n");
    }
}

void cambia(FILE *ap1, FILE *ap2)
{
    char cad[100]; /* Aument� el tama�o del arreglo para manejar cadenas m�s largas */
    char *cad1, *cad2, aux[100];

    while (fgets(cad, 100, ap1) != NULL) /* Leer l�nea por l�nea */
    {
        cad1 = cad;
        cad2 = strstr(cad1, "m�xico"); /* Busca la subcadena "m�xico" en cad1 */

        while (cad2 != NULL)
        {
            cad2[0] = 'M'; /* Reemplaza la primera letra por may�scula */

            /* Si hay m�s caracteres antes y despu�s de "m�xico", se ajusta la cadena */
            if (cad2 > cad1 && isalpha(cad2[-1])) /* Verifica si el caracter anterior es una letra */
            {
                cad2 = strstr(cad2 + 1, "m�xico"); /* Busca la siguiente ocurrencia */
                continue; /* Contin�a con el siguiente ciclo */
            }

            /* Copia la parte de la cadena antes de "m�xico" a aux */
            strncpy(aux, cad1, cad2 - cad1);
            aux[cad2 - cad1] = '\0'; /* Termina la cadena auxiliar */

            /* Concatena "M�xico" y el resto de la cadena despu�s de "m�xico" */
            strcat(aux, "M�xico");
            strcat(aux, cad2 + strlen("m�xico")); /* Agrega el resto de la cadena despu�s de "m�xico" */

            strcpy(cad1, aux); /* Copia la cadena modificada de vuelta a cad1 */

            /* Busca la siguiente ocurrencia de "m�xico" en la l�nea */
            cad2 = strstr(cad1, "m�xico");
        }

        /* Escribe la l�nea modificada en el archivo de salida */
        fputs(cad1, ap2);
    }
}
