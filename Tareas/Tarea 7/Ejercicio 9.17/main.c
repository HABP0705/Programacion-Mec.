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
    char cad[100]; /* Aumenté el tamaño del arreglo para manejar cadenas más largas */
    char *cad1, *cad2, aux[100];

    while (fgets(cad, 100, ap1) != NULL) /* Leer línea por línea */
    {
        cad1 = cad;
        cad2 = strstr(cad1, "méxico"); /* Busca la subcadena "méxico" en cad1 */

        while (cad2 != NULL)
        {
            cad2[0] = 'M'; /* Reemplaza la primera letra por mayúscula */

            /* Si hay más caracteres antes y después de "méxico", se ajusta la cadena */
            if (cad2 > cad1 && isalpha(cad2[-1])) /* Verifica si el caracter anterior es una letra */
            {
                cad2 = strstr(cad2 + 1, "méxico"); /* Busca la siguiente ocurrencia */
                continue; /* Continúa con el siguiente ciclo */
            }

            /* Copia la parte de la cadena antes de "méxico" a aux */
            strncpy(aux, cad1, cad2 - cad1);
            aux[cad2 - cad1] = '\0'; /* Termina la cadena auxiliar */

            /* Concatena "México" y el resto de la cadena después de "méxico" */
            strcat(aux, "México");
            strcat(aux, cad2 + strlen("méxico")); /* Agrega el resto de la cadena después de "méxico" */

            strcpy(cad1, aux); /* Copia la cadena modificada de vuelta a cad1 */

            /* Busca la siguiente ocurrencia de "méxico" en la línea */
            cad2 = strstr(cad1, "méxico");
        }

        /* Escribe la línea modificada en el archivo de salida */
        fputs(cad1, ap2);
    }
}
