#include <stdio.h>

int z, y;
int F1(float);
void F2(float, int *);

int main(void)
{
    int w;
    float x;
    z = 5;
    y = 7;
    w = 2;
    x = (float)y / z;
    printf("Antes de F2: z = %d, y = %d, x = %.2f, w = %d\n", z, y, x, w);
    F2(x, &w);
    printf("Después de F2: z = %d, y = %d, x = %.2f, w = %d\n", z, y, x, w);
    return 0;
}

int F1(float x)
{
    int k;
    if (x != 0)
    {
        k = z - y;
        x++;
    }
    else
    {
        k = z + y;
    }
    printf("Dentro de F1: z = %d, y = %d, x = %.2f, k = %d\n", z, y, x, k);
    return k;
}

void F2(float t, int *r)
{
    int y;
    y = 5;
    z = 0;
    printf("Dentro de F2: z = %d, y = %d, t = %.2f, *r = %d\n", z, y, t, *r);
    if (z == 0)
    {
        z = (*r) * 2;
        t = (float) z / 3;
        printf("Ingresa un valor para r: ");
        scanf("%d", r);
        printf("Después de la entrada de usuario: z = %d, y = %d, t = %.2f, *r = %d\n", z, y, t, *r);
    }
    else
    {
        z = (*r) * 2;
        printf("Después de la asignación: z = %d, y = %d, t = %.2f, *r = %d\n", z, y, t, *r);
    }
    *r = F1(t);
}

