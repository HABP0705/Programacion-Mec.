#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/* Definición de la estructura matcal */
typedef struct
{
    char materia[20];
    int calificacion;
} matcal;

/* Definición de la estructura alumno */
typedef struct
{
    int matricula;
    char nombre[20];
    matcal cal[5]; /* Arreglo de estructuras matcal */
} alumno;

/* Prototipos de funciones */
void F1(FILE *);
void F2(FILE *);
float F3(FILE *);

void main(void)
{
    float pro;
    FILE *ap;

    /* Apertura del archivo en modo lectura */
    if ((ap = fopen("esc.dat", "rb")) != NULL)
    {
        F1(ap); /* Llama a la función F1 para imprimir matrícula y promedio */
        F2(ap); /* Llama a la función F2 para imprimir matrícula de alumnos con calificación > 9 en materia 3 */
        pro = F3(ap); /* Llama a la función F3 para obtener el promedio de la materia 4 */
        printf("\n\nPROMEDIO GENERAL MATERIA 4: %f\n", pro);
        fclose(ap); /* Cierra el archivo después de usarlo */
    }
    else
    {
        printf("\nEl archivo no se puede abrir\n");
    }
}

void F1(FILE *ap)
{
    alumno alu;
    int j;
    float sum, pro;

    printf("\nMATRÍCULA y PROMEDIOS");

    /* Lee el primer registro del archivo */
    fread(&alu, sizeof(alumno), 1, ap);

    /* Mientras no llegue al final del archivo */
    while (!feof(ap))
    {
        printf("\nMatrícula: %d", alu.matricula);
        sum = 0.0;

        /* Calcula la suma de las calificaciones de las 5 materias */
        for (j = 0; j < 5; j++)
        {
            sum += alu.cal[j].calificacion;
        }

        /* Calcula el promedio */
        pro = sum / 5.0;
        printf("\tPromedio: %f", pro);

        /* Lee el siguiente registro del archivo */
        fread(&alu, sizeof(alumno), 1, ap);
    }
}

void F2(FILE *ap)
{
    alumno alu;

    rewind(ap); /* Vuelve al inicio del archivo */

    printf("\n\nALUMNOS CON CALIFICACIÓN > 9 EN MATERIA 3");

    /* Lee el primer registro del archivo */
    fread(&alu, sizeof(alumno), 1, ap);

    /* Mientras no llegue al final del archivo */
    while (!feof(ap))
    {
        /* Verifica si la calificación en la materia 3 es mayor a 9 */
        if (alu.cal[2].calificacion > 9)
        {
            printf("\nMatrícula del alumno: %d", alu.matricula);
        }

        /* Lee el siguiente registro del archivo */
        fread(&alu, sizeof(alumno), 1, ap);
    }
}

float F3(FILE *ap)
{
    alumno alu;
    int i = 0;
    float sum = 0.0, pro;

    rewind(ap); /* Vuelve al inicio del archivo */

    /* Lee el primer registro del archivo */
    fread(&alu, sizeof(alumno), 1, ap);

    /* Mientras no llegue al final del archivo */
    while (!feof(ap))
    {
        i++;
        /* Suma las calificaciones de la materia 4 */
        sum += alu.cal[3].calificacion;

        /* Lee el siguiente registro del archivo */
        fread(&alu, sizeof(alumno), 1, ap);
    }

    /* Calcula el promedio de la materia 4 */
    pro = sum / i;
    return pro;
}
