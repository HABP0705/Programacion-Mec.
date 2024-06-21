#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Comercializadora farmac�utica.
El programa maneja informaci�n sobre ventas, inventario, reabastecimiento y
nuevos productos de una comercializadora farmac�utica. */

typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void Lectura(producto *, int);
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);

void main(void)
{
    producto INV[100];  /* Se declara un arreglo unidimensional de tipo estructura producto. */
    int TAM, OPE;

    do
    {
        printf("Ingrese el n�mero de productos: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);    /* Se verifica que el n�mero de productos ingresados sea correcto. */

    Lectura(INV, TAM);

    printf("\nIngrese operaci�n a realizar.\n");
    printf("\t1 � Ventas\n");
    printf("\t2 � Reabastecimiento\n");
    printf("\t3 � Nuevos Productos\n");
    printf("\t4 � Inventario\n");
    printf("\t0 - Salir: ");
    scanf("%d", &OPE);

    while (OPE)
    {
        switch (OPE)
        {
        case 1:
            Ventas(INV, TAM);
            break;
        case 2:
            Reabastecimiento(INV, TAM);
            break;
        case 3:
            Nuevos_Productos(INV, &TAM);
            break;
        case 4:
            Inventario(INV, TAM);
            break;
        default:
            printf("Opci�n inv�lida.\n");
            break;
        };

        printf("\nIngrese operaci�n a realizar.\n");
        printf("\t1 � Ventas\n");
        printf("\t2 � Reabastecimiento\n");
        printf("\t3 � Nuevos Productos\n");
        printf("\t4 � Inventario\n");
        printf("\t0 - Salir: ");
        scanf("%d", &OPE);
    }
}

void Lectura(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese informaci�n del producto %d:\n", I + 1);
        printf("\tClave: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("\tNombre: ");
        gets(A[I].nombre);
        printf("\tPrecio: ");
        scanf("%f", &A[I].precio);
        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
    }
}

void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;

    printf("\nIngrese clave del producto (-0 para salir-): ");
    scanf("%d", &CLA);
    TOT = 0.0;

    while (CLA)
    {
        printf("\tCantidad: ");
        scanf("%d", &CAN);
        I = 0;

        while (I < T && A[I].clave != CLA)
            I++;

        if (I == T)
        {
            printf("\nLa clave del producto es incorrecta.\n");
        }
        else
        {
            if (A[I].existencia >= CAN)
            {
                A[I].existencia -= CAN;
                PAR = A[I].precio * CAN;
                TOT += PAR;
            }
            else
            {
                printf("\nNo hay suficiente en inventario. Solo hay %d unidades.\n", A[I].existencia);
                printf("�Desea llevar las %d unidades disponibles? (1 - Si, 0 - No): ", A[I].existencia);
                scanf("%d", &RES);
                if (RES)
                {
                    PAR = A[I].precio * A[I].existencia;
                    TOT += PAR;
                    A[I].existencia = 0;
                }
            }
        }

        printf("\nIngrese la siguiente clave del producto (-0 para salir-): ");
        scanf("%d", &CLA);
    }

    printf("\nTotal de la venta: %.2f\n", TOT);
}

void Reabastecimiento(producto A[], int T)
{
    int CLA, CAN, I;

    printf("\nIngrese clave del producto (-0 para salir-): ");
    scanf("%d", &CLA);

    while (CLA)
    {
        I = 0;
        while (I < T && A[I].clave != CLA)
            I++;

        if (I == T)
        {
            printf("\nLa clave del producto ingresada es incorrecta.\n");
        }
        else
        {
            printf("\tCantidad a reabastecer: ");
            scanf("%d", &CAN);
            A[I].existencia += CAN;
        }

        printf("\nIngrese otra clave del producto (-0 para salir-): ");
        scanf("%d", &CLA);
    }
}

void Nuevos_Productos(producto A[], int *T)
{
    int CLA, I, J;

    printf("\nIngrese clave del producto (-0 para salir-): ");
    scanf("%d", &CLA);

    while (*T < 100 && CLA)
    {
        I = 0;
        while (I < *T && A[I].clave < CLA)
            I++;

        if (I == *T)    /* Insertar al final */
        {
            A[I].clave = CLA;
            printf("\tNombre: ");
            fflush(stdin);
            gets(A[I].nombre);
            printf("\tPrecio: ");
            scanf("%f", &A[I].precio);
            printf("\tExistencia: ");
            scanf("%d", &A[I].existencia);
            (*T)++;
        }
        else if (A[I].clave == CLA)
        {
            printf("\nEl producto ya se encuentra en el inventario.\n");
        }
        else      /* Insertar en medio */
        {
            for (J = *T; J > I; J--)
            {
                A[J] = A[J - 1];
            }
            A[I].clave = CLA;
            printf("\tNombre: ");
            fflush(stdin);
            gets(A[I].nombre);
            printf("\tPrecio: ");
            scanf("%f", &A[I].precio);
            printf("\tExistencia: ");
            scanf("%d", &A[I].existencia);
            (*T)++;
        }

        printf("\nIngrese otra clave de producto (-0 para salir-): ");
        scanf("%d", &CLA);
    }

    if (*T == 100)
    {
        printf("\nYa no hay espacio para incorporar nuevos productos.\n");
    }
}

void Inventario(producto A[], int T)
{
    int I;
    printf("\nInventario de productos:\n");
    for (I = 0; I < T; I++)
    {
        printf("\nClave: %d", A[I].clave);
        printf("\tNombre: %s", A[I].nombre);
        printf("\tPrecio: %.2f", A[I].precio);
        printf("\tExistencia: %d", A[I].existencia);
    }
    printf("\n");
}
