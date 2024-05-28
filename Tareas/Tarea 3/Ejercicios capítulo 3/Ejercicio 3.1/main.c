#include <stdio.h>
#include <stdlib.h>

//Nómina. El programa, al recibir los salarios de 15 profesores, obtiene el total de la nómina de la universidad


int main()
{
    int I; // variable entera para el contador del bucle
    float sal, nom; // variables de tipo float para el salario y la nómina total
    nom = 0; // Inicializa la variable 'nom' a 0, esta variable acumulará los salarios

    for (I = 1; I <= 15; I++) // Bucle for que se ejecuta 15 veces (para 15 profesores)
    {
        printf("\Ingrese el salario del profesor:\t", I); // Solicita al usuario que ingrese el salario del profesor actual
        scanf("%f", &sal); // Lee el salario ingresado por el usuario y lo almacena en 'sal'
        nom = nom + sal; // Suma el salario ingresado a la variable 'nom'
    }

    printf("\nEl total de la nomina es: %.2f", nom); // Imprime el total acumulado de la nómina de los 15 profesores

    return 0; // el programa terminó correctamente
}
