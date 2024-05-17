#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    float p, s, r;
    printf("\nIngrese las ventas de los tres vendedores: ");
    scanf("%f %f %f", &p, &s, &r);

    if (p > s)
    {
        if (p > r)
        {
            if (s > r)
            {
                printf("\n\n El orden es p, s y r: %8.2f %8.2f %8.2f", p, s, r);
            }
            else
            {
                printf("\n\n El orden es p, r y s: %8.2f %8.2f %8.2f", p, r, s);
            }
        }
        else
        {
            printf("\n\n El orden es r, p y s: %8.2f %8.2f %8.2f", r, p, s);
        }
    }
    else if (s > r)
    {
        if (p > r)
        {
            printf("\n\n El orden es s, p y r: %8.2f %8.2f %8.2f", s, p, r);
        }
        else
        {
            printf("\n\n El orden es s, r y p: %8.2f %8.2f %8.2f", s, r, p);
        }
    }
    else
    {
        printf("\n\n El orden es r, s y p: %8.2f %8.2f %8.2f", r, s, p);
    }

    return 0;
}
