#include <stdio.h>
#include <math.h>

const int MAX = 100;

void Lectura(int *, int);
float Media(int *, int);
float Varianza(int *, int, float);
float Desviacion(float);
void Frecuencia(int *, int, int *);
int Moda(int *, int);

int main()
{
    int TAM, MOD, ALU[MAX], FRE[11] = {0};
    float MED, VAR, DES;

    // Solicitar el tama�o del arreglo
    do
    {
        printf("Ingrese el tamano del arreglo (maximo %d): ", MAX);
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    // Leer los elementos del arreglo
    Lectura(ALU, TAM);

    // Calcular la media
    MED = Media(ALU, TAM);

    // Calcular la varianza
    VAR = Varianza(ALU, TAM, MED);

    // Calcular la desviaci�n est�ndar
    DES = Desviacion(VAR);

    // Calcular la frecuencia de los elementos
    Frecuencia(ALU, TAM, FRE);

    // Calcular la moda
    MOD = Moda(FRE, 11);

    // Imprimir resultados
    printf("\nMedia:      %.2f", MED);
    printf("\nVarianza:   %.2f", VAR);
    printf("\nDesviacion: %.2f", DES);
    printf("\nModa:       %d", MOD);

    return 0;
}

void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

float Media(int A[], int T)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += A[I];
    return (SUM / T);
}

float Varianza(int A[], int T, float M)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += pow((A[I] - M), 2);
    return (SUM / T);
}

float Desviacion(float V)
{
    return (sqrt(V));
}

void Frecuencia(int A[], int P, int B[])
{
    int I;
    for (I = 0; I < P; I++)
        B[A[I]]++;
}

int Moda(int A[], int T)
{
    int I, MOD = 0, VAL = A[0];
    for (I = 1; I < T; I++)
    {
        if (MOD < A[I])
        {
            MOD = I;
            VAL = A[I];
        }
    }
    return (MOD);
}
