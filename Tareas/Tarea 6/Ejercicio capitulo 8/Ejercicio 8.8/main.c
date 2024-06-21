#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Hospital.
El programa genera informaci�n acerca de los pacientes de un hospital. */

typedef struct
{
    char cal[20];       /* Calle. */
    int num;            /* N�mero. */
    char col[20];       /* Colonia. */
    char cp[6];         /* C�digo Postal. */
    char ciu[20];       /* Ciudad. */
} domicilio;

typedef struct
{
    char nom[20];       /* Nombre y apellido. */
    int edad;
    char sexo;
    int con;            /* Condici�n. */
    domicilio dom;      /* Estructura domicilio. */
    char tel[11];       /* Tel�fono. */
} paciente;

/* Prototipos de funciones */
void Lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);
void F3(paciente *, int);

void main(void)
{
    paciente HOSPITAL[100];   /* Arreglo unidimensional de tipo paciente. */
    int TAM;

    do
    {
        printf("Ingrese el n�mero de pacientes (m�ximo 100): ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);     /* Se verifica que el tama�o del arreglo sea correcto. */

    Lectura(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);
}

void Lectura(paciente A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\n\t\tPaciente %d\n", I + 1);
        fflush(stdin);
        printf("Nombre: ");
        gets(A[I].nom);
        printf("Edad: ");
        scanf("%d", &A[I].edad);
        fflush(stdin);
        printf("Sexo (F-M): ");
        scanf(" %c", &A[I].sexo);  /* Se a�ade un espacio antes de %c para evitar problemas de buffer. */
        printf("Condici�n (1..5): ");
        scanf("%d", &A[I].con);
        fflush(stdin);
        printf("\tCalle: ");
        gets(A[I].dom.cal);
        printf("\tN�mero: ");
        scanf("%d", &A[I].dom.num);
        fflush(stdin);
        printf("\tColonia: ");
        gets(A[I].dom.col);
        printf("\tC�digo Postal: ");
        gets(A[I].dom.cp);
        fflush(stdin);
        printf("\tCiudad: ");
        gets(A[I].dom.ciu);
        fflush(stdin);
        printf("Tel�fono: ");
        gets(A[I].tel);
    }
}

void F1(paciente A[], int T)
{
    int I, FEM = 0, MAS = 0, TOT;

    for (I = 0; I < T; I++)
    {
        switch (A[I].sexo)
        {
        case 'F':
            FEM++;
            break;
        case 'M':
            MAS++;
            break;
        }
    }

    TOT = FEM + MAS;
    printf("\nPorcentaje de Hombres: %.2f%%", (float)MAS / TOT * 100);
    printf("\nPorcentaje de Mujeres: %.2f%%", (float)FEM / TOT * 100);
}

void F2(paciente A[], int T)
{
    int I, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;

    for (I = 0; I < T; I++)
    {
        switch (A[I].con)
        {
        case 1:
            C1++;
            break;
        case 2:
            C2++;
            break;
        case 3:
            C3++;
            break;
        case 4:
            C4++;
            break;
        case 5:
            C5++;
            break;
        }
    }

    printf("\nN�mero pacientes en condici�n 1: %d", C1);
    printf("\nN�mero pacientes en condici�n 2: %d", C2);
    printf("\nN�mero pacientes en condici�n 3: %d", C3);
    printf("\nN�mero pacientes en condici�n 4: %d", C4);
    printf("\nN�mero pacientes en condici�n 5: %d", C5);
}

void F3(paciente A[], int T)
{
    int I;

    printf("\nPacientes ingresados en estado de gravedad (condici�n 5):\n");
    for (I = 0; I < T; I++)
    {
        if (A[I].con == 5)
        {
            printf("Nombre: %s\tTel�fono: %s\n", A[I].nom, A[I].tel);
        }
    }
}
