#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[50];
    int edad;
    int matricula;
} Alumno;

void grabarDato(Alumno **alumnos, int *count);
void leerDisco(Alumno **alumnos, int *count);
void guardarEnDisco(Alumno *alumnos, int count);
void liberarMemoria(Alumno *alumnos, int count);

int main()
{
    int opcion;
    Alumno *alumnos = NULL;
    int count = 0;

    do
    {
        printf("Menu:\n");
        printf("1. Leer disco\n");
        printf("2. Grabar dato\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            leerDisco(&alumnos, &count);
            for (int i = 0; i < count; i++)
            {
                printf("Alumno %d:\n", i + 1);
                printf("Nombre: %s\n", alumnos[i].nombre);
                printf("Edad: %d\n", alumnos[i].edad);
                printf("Matricula: %d\n", alumnos[i].matricula);
            }
            break;
        case 2:
            grabarDato(&alumnos, &count);
            guardarEnDisco(alumnos, count);
            break;
        case 0:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion invalida.\n");
        }
    }
    while (opcion != 0);

    liberarMemoria(alumnos, count);

    return 0;
}

void grabarDato(Alumno **alumnos, int *count)
{
    Alumno nuevo;
    char continuar;

    do
    {
        printf("Ingrese nombre: ");
        scanf("%s", nuevo.nombre);
        printf("Ingrese edad: ");
        scanf("%d", &nuevo.edad);
        printf("Ingrese matricula: ");
        scanf("%d", &nuevo.matricula);

        (*count)++;
        *alumnos = (Alumno *)realloc(*alumnos, (*count) * sizeof(Alumno));
        (*alumnos)[*count - 1] = nuevo;

        printf("Desea ingresar otro registro? (s/n): ");
        scanf(" %c", &continuar);
    }
    while (continuar == 's');
}

void leerDisco(Alumno **alumnos, int *count)
{
    FILE *file = fopen("alumnos.txt", "rb");
    if (file == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    fread(count, sizeof(int), 1, file);
    *alumnos = (Alumno *)malloc((*count) * sizeof(Alumno));
    fread(*alumnos, sizeof(Alumno), *count, file);

    fclose(file);
}

void guardarEnDisco(Alumno *alumnos, int count)
{
    FILE *file = fopen("alumnos.txt", "wb");
    if (file == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, file);
    fwrite(alumnos, sizeof(Alumno), count, file);

    fclose(file);
}

void liberarMemoria(Alumno *alumnos, int count)
{
    if (alumnos != NULL)
    {
        free(alumnos);
    }
}
