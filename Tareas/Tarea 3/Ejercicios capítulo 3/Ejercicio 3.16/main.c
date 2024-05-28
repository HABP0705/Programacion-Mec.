#include <stdio.h>
#include <stdlib.h>

// Calificaciones.  El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, adem�s, los alumnos con el mejor y peor promedio.


int main()
{
    int i, mat, mamat = 0, memat = 0; // variables enteras para el contador 'i', la matr�cula actual 'mat', la matr�cula del mejor promedio 'mamat' y la matr�cula del peor promedio 'memat', e inicializa 'mamat' y 'memat' a 0
    float sum, pro, cal, mapro = 0.0, mepro = 11.0; // variables de tipo float para la suma de calificaciones 'sum', el promedio 'pro', la calificaci�n actual 'cal', el mejor promedio 'mapro' (inicializado a 0.0), y el peor promedio 'mepro' (inicializado a 11.0)

    printf("Ingrese la matricula del primer alumno:\t"); // Solicita al usuario que ingrese la matr�cula del primer alumno
    scanf("%d", &mat); // Lee la matr�cula ingresada y la almacena en 'mat'

    while(mat)   // Bucle que contin�a mientras 'mat' no sea 0
    {
        sum = 0; // Inicializa 'sum' a 0 para la suma de calificaciones del alumno actual
        for(i = 1; i <= 5; i++)   // Bucle for que se ejecuta 5 veces para las 5 calificaciones del alumno
        {
            printf("\tIngrese la calificacion del alumno: "); // Solicita al usuario que ingrese la calificaci�n
            scanf("%f", &cal); // Lee la calificaci�n ingresada y la almacena en 'cal'
            sum += cal; // Suma la calificaci�n actual a 'sum'
        }
        pro = sum / 5; // Calcula el promedio de las 5 calificaciones
        printf("\nMatricula: %d\tPromedio: %5.2f", mat, pro); // Imprime la matr�cula y el promedio del alumno actual

        if (pro > mapro)   // Si el promedio actual es mayor que 'mapro'
        {
            mapro = pro; // Actualiza 'mapro' con el promedio actual
            mamat = mat; // Actualiza 'mamat' con la matr�cula del alumno actual
        }
        if (pro < mepro)   // Si el promedio actual es menor que 'mepro'
        {
            mepro = pro; // Actualiza 'mepro' con el promedio actual
            memat = mat; // Actualiza 'memat' con la matr�cula del alumno actual
        }

        printf("\n\nIngrese la matricula del siguiente alumno o elige 0 para terminar: "); // Solicita al usuario que ingrese la matr�cula del siguiente alumno
        scanf("%d", &mat); // Lee la matr�cula ingresada y la almacena en 'mat'
    }

    printf("\n\nAlumno con mejor promedio:\t%d\t%5.2f", mamat, mapro); // Imprime la matr�cula y el promedio del alumno con el mejor promedio
    printf("\n\nAlumno con peor promedio:\t%d\t%5.2f", memat, mepro); // Imprime la matr�cula y el promedio del alumno con el peor promedio

    return 0; // el programa termin� correctamente
}
