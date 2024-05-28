#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Suma cuadrados. El programa, al recibir como datos un grupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente a dichos cuadrados.


int main()
{
    int num; // variable entera 'num' para almacenar el n�mero ingresado por el usuario
    long cua, suc = 0; // variables largas: 'cua' para el cuadrado del n�mero y 'suc' para la suma acumulada de los cuadrados
    printf("\nIngrese un numero entero o elige 0 para terminar:\t"); // Solicita al usuario que ingrese un n�mero entero o elija 0 para terminar
    scanf("%d", &num); // Lee el n�mero ingresado por el usuario y lo almacena en 'num'

    while (num)   // Inicia un bucle que contin�a mientras 'num' sea diferente de 0
    {
        cua = pow(num, 2); // Calcula el cuadrado de 'num' usando la funci�n pow y lo almacena en 'cua'
        printf("%d su cuadrado es %ld", num, cua); // Imprime el n�mero y su cuadrado
        suc = suc + cua; // Suma el cuadrado calculado a la variable 'suc'
        printf("\nIngrese un numero entero o elige 0 para terminar:\t"); // Solicita al usuario que ingrese otro n�mero entero o elija 0 para terminar
        scanf("%d", &num); // Lee el siguiente n�mero ingresado por el usuario y lo almacena en 'num'
    }

    printf("\nLa suma de los cuadrados es %ld", suc); // Imprime la suma acumulada de los cuadrados

    return 0; // el programa termin� correctamente
}

