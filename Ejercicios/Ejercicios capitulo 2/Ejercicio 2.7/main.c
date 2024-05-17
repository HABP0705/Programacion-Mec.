#include <stdio.h>
#include <stdlib.h>

//ventas descendentes.
//El programa, al recibir como datos tres valores que representan las ventas de los vendedores de una tienda de discos, escribe las ventas en  orden descendente.


int main() // Función principal del programa
{
    float p, s, r; // Declara tres variables de tipo float para almacenar las ventas
    printf("\nIngrese las ventas de los tres vendedores: "); // Solicita al usuario que ingrese las ventas
    scanf("%f %f %f", &p, &s, &r); // Lee las ventas ingresadas por el usuario y las almacena en p, s y r

    if (p > s) // Compara si p es mayor que s
    {
        if (p > r) // Si p es mayor que s, compara si p también es mayor que r
        {
            if (s > r) // Si p es mayor que r, compara si s es mayor que r
            {
                // Si p > s y s > r, entonces el orden es p, s y r
                printf("\n\n El orden es p, s y r: %8.2f %8.2f %8.2f", p, s, r);
            }
            else // Si p > r pero s no es mayor que r
            {
                // Si p > r y r > s, entonces el orden es p, r y s
                printf("\n\n El orden es p, r y s: %8.2f %8.2f %8.2f", p, r, s);
            }
        }
        else // Si p no es mayor que r
        {
            // Si r > p y p > s, entonces el orden es r, p y s
            printf("\n\n El orden es r, p y s: %8.2f %8.2f %8.2f", r, p, s);
        }
    }
    else if (s > r) // Si p no es mayor que s, compara si s es mayor que r
    {
        if (p > r) // Si s es mayor que r, compara si p es mayor que r
        {
            // Si s > r y p > r, entonces el orden es s, p y r
            printf("\n\n El orden es s, p y r: %8.2f %8.2f %8.2f", s, p, r);
        }
        else // Si s > r pero p no es mayor que r
        {
            // Si s > r y r > p, entonces el orden es s, r y p
            printf("\n\n El orden es s, r y p: %8.2f %8.2f %8.2f", s, r, p);
        }
    }
    else // Si ni p > s ni s > r (lo que implica r >= s y s >= p)
    {
        // Si r > s y s > p, entonces el orden es r, s y p
        printf("\n\n El orden es r, s y p: %8.2f %8.2f %8.2f", r, s, p);
    }

    return 0; // el programa finalizó
}
