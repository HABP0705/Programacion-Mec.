#include <stdio.h>

void main(void)
{
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};

    // Primer conjunto de impresiones
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    int *IX;
    IX = &X;

    // Cambios en X e Y
    Y = *IX;
    *IX = 1;

    // Segundo conjunto de impresiones
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    // Cambios en Z
    IX = &Z[2];
    Y = *IX;
    *IX = 15;

    // Tercer conjunto de impresiones
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    // Más cambios en X y Z
    X = *IX + 5;
    *IX = *IX - 5;

    // Cuarto conjunto de impresiones
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    // Más operaciones en IX
    ++*IX;
    *IX += 1;

    // Quinto conjunto de impresiones
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    // Últimos cambios en X e IX
    X = *(IX + 1);
    Y = *IX;
    IX = IX + 1;
    Y = *IX;
    IX = IX + 4;
    Y = *IX;
    IX = &X;
    IX = IX + 1;
    X = *IX;

    // Último conjunto de impresiones
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
}

