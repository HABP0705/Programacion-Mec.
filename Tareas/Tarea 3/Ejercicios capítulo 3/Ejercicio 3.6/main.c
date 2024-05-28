#include <stdio.h>
#include <stdlib.h>

// Nómina de profesores. El programa, al recibir como datos los salarios de los profesores de una universidad, obtiene la nómina y el promedio de los salarios.


int main()
{
    int i = 0; // inicializa una variable entera 'i' a 0, que servirá como contador de profesores
    float sal, pro, nom = 0; // tres variables de tipo float: 'sal' para el salario ingresado, 'pro' para el promedio de salarios, y 'nom' para la suma acumulada de salarios, inicializando 'nom' a 0
    printf("Ingrese el salario del profesor:\t"); // Solicita al usuario que ingrese el salario del primer profesor
    scanf("%f", &sal); // Lee el salario ingresado por el usuario y lo almacena en 'sal'

    do   // Inicia un bucle do-while que asegura que el bloque de código se ejecutará al menos una vez
    {
        nom = nom + sal; // Suma el salario ingresado a 'nom'
        i = i + 1; // Incrementa el contador de profesores en 1
        printf("Ingrese el salario del profesor o elige 0 para terminar: \t"); // Solicita al usuario que ingrese el salario del siguiente profesor o elija 0 para terminar
        scanf("%f", &sal); // Lee el siguiente salario ingresado por el usuario y lo almacena en 'sal'
    }
    while (sal);   // Continúa el bucle mientras 'sal' sea diferente de 0

    {
        // Este bloque se ejecuta después de que el bucle termina
        pro = nom / i; // Calcula el promedio de salarios dividiendo la suma acumulada de salarios por el número de profesores
        printf("\nNomina: %.2f \t Promedio de salarios es: %.2f", nom, pro); // Imprime la nómina total y el promedio de salarios con dos decimales de precisión
    }

    return 0; // el programa terminó correctamente
}
