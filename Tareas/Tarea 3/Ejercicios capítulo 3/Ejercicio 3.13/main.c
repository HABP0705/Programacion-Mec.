#include <stdio.h>
#include <stdlib.h>

//Fibonacci. El programa calcula y escribe los primeros 50 n�meros de Fibonacci.


int main()
{
    int i, pri = 0, seg = 1, sig; // Declara e inicializa 'i' como contador, 'pri' como el primer n�mero de la serie Fibonacci (0), 'seg' como el segundo n�mero de la serie (1), y 'sig' para el siguiente n�mero de la serie

    printf("\t %d \t %d", pri, seg); // Imprime los dos primeros n�meros de la serie Fibonacci

    for(i = 3; i <= 50; i++)   // Bucle for que comienza en 3 y se ejecuta hasta 50 para generar los siguientes n�meros de la serie Fibonacci
    {
        sig = pri + seg; // Calcula el siguiente n�mero de la serie como la suma de los dos anteriores
        pri = seg; // Actualiza 'pri' para que sea el n�mero anterior 'seg'
        seg = sig; // Actualiza 'seg' para que sea el n�mero reci�n calculado 'sig'
        printf("\t %d", sig); // Imprime el siguiente n�mero de la serie
    }

    return 0; // el programa termin� correctamente
}

