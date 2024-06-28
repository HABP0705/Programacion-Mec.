#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

void mezcla(FILE *, FILE *, FILE *);

void main(void)
{
    FILE *ar, *ar1, *ar2;

    ar = fopen("arc9.txt", "r");
    ar1 = fopen("arc10.txt", "r");
    ar2 = fopen("arc11.txt", "w");

    if (ar != NULL && ar1 != NULL && ar2 != NULL)
    {
        mezcla(ar, ar1, ar2);
        fclose(ar);
        fclose(ar1);
        fclose(ar2);
        printf("Archivos mezclados correctamente.\n");
    }
    else
    {
        printf("No se pueden abrir los archivos.\n");
    }
}

void mezcla(FILE *ar, FILE *ar1, FILE *ar2)
{
    int mat, mat1;
    float ca[3], ca1[3];

    int b = 1, b1 = 1; // Banderas para indicar si se necesita leer del archivo correspondiente

    while ((!feof(ar) || !b) && (!feof(ar1) || !b1))
    {
        if (b) // Leer datos del primer archivo si la bandera b está activada
        {
            fscanf(ar, "%d", &mat);
            for (int i = 0; i < 3; i++)
                fscanf(ar, "%f", &ca[i]);
            b = 0; // Desactivar la bandera después de leer los datos
        }

        if (b1) // Leer datos del segundo archivo si la bandera b1 está activada
        {
            fscanf(ar1, "%d", &mat1);
            for (int i = 0; i < 3; i++)
                fscanf(ar1, "%f", &ca1[i]);
            b1 = 0; // Desactivar la bandera después de leer los datos
        }

        if (mat < mat1) // Escribir datos del primer archivo en el archivo de salida
        {
            fprintf(ar2, "%d\t", mat);
            for (int i = 0; i < 3; i++)
                fprintf(ar2, "%f\t", ca[i]);
            fputs("\n", ar2);
            b = 1; // Activar la bandera para leer el siguiente dato del primer archivo
        }
        else // Escribir datos del segundo archivo en el archivo de salida
        {
            fprintf(ar2, "%d\t", mat1);
            for (int i = 0; i < 3; i++)
                fprintf(ar2, "%f\t", ca1[i]);
            fputs("\n", ar2);
            b1 = 1; // Activar la bandera para leer el siguiente dato del segundo archivo
        }
    }

    // Si quedan datos por leer en el primer archivo
    while (!feof(ar))
    {
        fscanf(ar, "%d", &mat);
        fprintf(ar2, "%d\t", mat);
        for (int i = 0; i < 3; i++)
        {
            fscanf(ar, "%f", &ca[i]);
            fprintf(ar2, "%f\t", ca[i]);
        }
        fputs("\n", ar2);
    }

    // Si quedan datos por leer en el segundo archivo
    while (!feof(ar1))
    {
        fscanf(ar1, "%d", &mat1);
        fprintf(ar2, "%d\t", mat1);
        for (int i = 0; i < 3; i++)
        {
            fscanf(ar1, "%f", &ca1[i]);
            fprintf(ar2, "%f\t", ca1[i]);
        }
        fputs("\n", ar2);
    }
}
