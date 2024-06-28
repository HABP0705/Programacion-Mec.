#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/* Definición de la estructura alumno */
typedef struct
{
    int clave;
    char nombre[20];
    int carrera;
    float promedio;
    float examen;
    char telefono[12];
} alumno;

/* Prototipos de funciones */
float F1(FILE *);
void F2(FILE *, FILE *, FILE *, FILE *, FILE *, FILE *);
void F3(FILE *, FILE *, FILE *, FILE *, FILE *);

void main(void)
{
    float pro;
    FILE *ap, *c1, *c2, *c3, *c4, *c5;

    /* Apertura de archivos */
    ap = fopen("alu1.txt", "rb");
    c1 = fopen("car1.txt", "w+b"); /* Modo lectura/escritura binaria */
    c2 = fopen("car2.txt", "w+b"); /* Modo lectura/escritura binaria */
    c3 = fopen("car3.txt", "w+b"); /* Modo lectura/escritura binaria */
    c4 = fopen("car4.txt", "w+b"); /* Modo lectura/escritura binaria */
    c5 = fopen("car5.txt", "w+b"); /* Modo lectura/escritura binaria */

    if (ap != NULL && c1 != NULL && c2 != NULL && c3 != NULL && c4 != NULL && c5 != NULL)
    {
        pro = F1(ap); /* Obtener promedio del examen de admisión */
        printf("\nPROMEDIO EXAMEN DE ADMISIÓN: %.2f\n", pro);
        F2(ap, c1, c2, c3, c4, c5); /* Generar archivos de alumnos admitidos por carrera */
        F3(c1, c2, c3, c4, c5); /* Calcular promedios de alumnos admitidos por carrera */
    }
    else
    {
        printf("\nEl o los archivos no se pudieron abrir\n");
    }

    /* Cierre de archivos */
    fclose(ap);
    fclose(c1);
    fclose(c2);
    fclose(c3);
    fclose(c4);
    fclose(c5);
}

float F1(FILE *ap)
{
    alumno alu;
    float sum = 0, pro;
    int i = 0;

    /* Leer primer registro del archivo */
    fread(&alu, sizeof(alumno), 1, ap);

    /* Calcular suma de todos los exámenes de admisión */
    while (!feof(ap))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, ap);
    }

    /* Calcular promedio de los exámenes de admisión */
    pro = sum / i;
    return pro;
}

void F2(FILE *ap, FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
    alumno alu;

    /* Reiniciar el archivo de alumnos */
    rewind(ap);

    /* Leer primer registro del archivo de alumnos */
    fread(&alu, sizeof(alumno), 1, ap);

    /* Iterar sobre el archivo de alumnos */
    while (!feof(ap))
    {
        /* Verificar si el alumno es admitido a alguna carrera */
        if (((alu.examen >= 1300 && alu.promedio >= 8) || (alu.examen >= 1400 && alu.promedio >= 7)))
        {
            /* Escribir en el archivo correspondiente según la carrera */
            switch (alu.carrera)
            {
            case 1:
                fwrite(&alu, sizeof(alumno), 1, c1);
                break;
            case 2:
                fwrite(&alu, sizeof(alumno), 1, c2);
                break;
            case 3:
                fwrite(&alu, sizeof(alumno), 1, c3);
                break;
            case 4:
                fwrite(&alu, sizeof(alumno), 1, c4);
                break;
            case 5:
                fwrite(&alu, sizeof(alumno), 1, c5);
                break;
            }
        }
        /* Leer siguiente registro del archivo de alumnos */
        fread(&alu, sizeof(alumno), 1, ap);
    }
}

void F3(FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
    alumno alu;
    float promedios[5] = {0};
    int contador[5] = {0};

    /* Función para calcular promedios de los alumnos admitidos por carrera */
    void calcularPromedio(FILE *archivo, float *promedio, int *cont)
    {
        rewind(archivo);
        fread(&alu, sizeof(alumno), 1, archivo);
        while (!feof(archivo))
        {
            *cont += 1;
            *promedio += alu.examen;
            fread(&alu, sizeof(alumno), 1, archivo);
        }
        if (*cont > 0)
        {
            *promedio /= *cont;
        }
    }

    /* Calcular promedios para cada carrera */
    calcularPromedio(c1, &promedios[0], &contador[0]);
    calcularPromedio(c2, &promedios[1], &contador[1]);
    calcularPromedio(c3, &promedios[2], &contador[2]);
    calcularPromedio(c4, &promedios[3], &contador[3]);
    calcularPromedio(c5, &promedios[4], &contador[4]);

    /* Mostrar resultados */
    printf("\nPromedios de exámenes admitidos por carrera:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("Carrera %d: %.2f\n", i + 1, promedios[i]);
    }
}
