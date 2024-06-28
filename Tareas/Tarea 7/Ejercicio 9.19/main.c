#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

/* Definición de la estructura alumno */
typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

/* Prototipo de función para ordenar */
void ordena(FILE *, FILE *);

void main(void)
{
    FILE *ar1, *ar2;

    /* Se abre el archivo de entrada en modo lectura */
    ar1 = fopen("ad5.txt", "r");

    /* Se abre el archivo de salida en modo escritura */
    ar2 = fopen("ad6.txt", "w");

    /* Verificación de apertura de archivos */
    if (ar1 != NULL && ar2 != NULL)
    {
        ordena(ar1, ar2); /* Llamada a la función para ordenar */
        fclose(ar1);
        fclose(ar2);
        printf("\nArchivos ordenados correctamente.\n");
    }
    else
    {
        printf("\nEl o los archivos no se pudieron abrir.\n");
    }
}

void ordena(FILE *ap1, FILE *ap2)
{
    alumno alu;
    int t, n, i;

    t = sizeof(alumno); /* Tamaño de la estructura alumno */

    /* Posicionamiento al final del archivo para calcular el número de registros */
    fseek(ap1, 0, SEEK_END);
    n = ftell(ap1) / t; /* Número de registros en el archivo */

    /* Ciclo para leer y escribir los registros en orden inverso (de mayor a menor matrícula) */
    for (i = n - 1; i >= 0; i--)
    {
        fseek(ap1, i * sizeof(alumno), SEEK_SET); /* Posicionamiento en el registro i */
        fread(&alu, sizeof(alumno), 1, ap1); /* Lectura del registro */
        fwrite(&alu, sizeof(alumno), 1, ap2); /* Escritura en el archivo de salida */
    }
}
