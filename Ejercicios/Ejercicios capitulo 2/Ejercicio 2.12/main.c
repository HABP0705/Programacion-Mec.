#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Igualdad de expresiones. El programa, al recibir como datos T, P y N, comprueba la igualdad de una expresión determinada

int main()
{

    int t, p, n;  // tres variables enteras: t, p, n
    printf("Ingrese los valores de t, p, y n: ");  // mensaje para solicitar la entrada de tres valores
    scanf("%d %d %d", &t, &p, &n);  // Lee tres valores enteros ingresados por el usuario y los almacena en t, p, y n

    if (p != 0)  // Verifica si p es diferente de cero
    {

        if (pow(t / p, n) == (pow(t, n) / pow(p, n))) // Verifica si la igualdad (t / p)^n == t^n / p^n se cumple
            printf("\nSe comprueba la igualdad");  // Si la igualdad se cumple, imprime el mensaje correspondiente
        else
        {
            printf("\nNo se comprueba la igualdad");  // Si la igualdad no se cumple, imprime el mensaje correspondiente
        }
    }
    else
    {
        printf("\nP tiene que ser un valor diferente de cero");  // Si p es igual a cero, imprime un mensaje de error
    }

    return 0;  // el programa se ejecuto correctamente
}
