

#include <stdio.h>

void trueque(int *x, int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x)
{
    return (x + x);
}

int main()
{
    int a = 5, b = 10;

    printf("Antes del trueque: a = %d, b = %d\n", a, b);
    trueque(&a, &b);
    printf("Despu�s del trueque: a = %d, b = %d\n", a, b);

    int resultado = suma(a);
    printf("La suma de a es: %d\n", resultado);

    return 0;
}
