#include <stdio.h>

const int MES = 2;
const int DEP = 2;
const int ANIO = 2;

void Lectura(float[MES][DEP][ANIO], int, int, int);
void Funcion1(float[MES][DEP][ANIO], int, int, int);
void Funcion2(float[MES][DEP][ANIO], int, int, int);
void Funcion3(float[MES][DEP][ANIO], int, int, int);

int main(void)
{
    float PRO[MES][DEP][ANIO];
    Lectura(PRO, MES, DEP, ANIO);
    Funcion1(PRO, MES, DEP, ANIO);
    Funcion2(PRO, MES, DEP, ANIO);
    Funcion3(PRO, MES, DEP, ANIO);
    return 0;
}

void Lectura(float A[][DEP][ANIO], int F, int C, int P)
{
    int K, I, J;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
            {
                printf("Ano: %d\tMes: %d\tDepartamento: %d  ", K + 1, I + 1, J + 1);
                scanf("%f", &A[I][J][K]);
            }
}

void Funcion1(float A[][DEP][ANIO], int F, int C, int P)
{
    int I, J;
    float SUM = 0.0;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            SUM += A[I][J][P - 1];
    printf("\n\nVentas totales de la empresa en el ultimo ano: %.2f", SUM);
}

void Funcion2(float A[][DEP][ANIO], int F, int C, int P)
{
    int I, J;
    float SUM1 = 0, SUM2 = 0;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            switch (J + 1)
            {
            case 1:
                SUM1 += A[I][J][P - 1];
                break;
            case 2:
                SUM2 += A[I][J][P - 1];
                break;
            }
    if (SUM1 > SUM2)
    {
        printf("\n\nDepartamento con mayores ventas en el ultimo ano: 1");
        printf("  Ventas: %.2f", SUM1);
    }
    else
    {
        printf("\n\nDepartamento con mayores ventas en el ultimo ano: 2");
        printf("  Ventas: %.2f", SUM2);
    }
}

void Funcion3(float A[][DEP][ANIO], int F, int C, int P)
{
    int K, I, J, DE, ME, AN;
    float VEN = -1.0;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
                if (A[I][J][K] > VEN)
                {
                    VEN = A[I][J][K];
                    DE = J;
                    ME = I;
                    AN = K;
                }
    printf("\n\nDepartamento: %d\tMes: %d\tAno: %d", DE + 1, ME + 1, AN + 1);
    printf("\tVentas: %.2f", VEN);
}
