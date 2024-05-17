#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>  //biblioteca

int main() {
    float PRO;  // variable de tipo flotante para almacenar el promedio
    printf("Ingrese el promedio del alumno: ");  // mensaje solicitando el promedio del alumno
    scanf("%f", &PRO);  // Lee el promedio ingresado por el usuario y lo almacena en la variable PRO

    if (PRO >= 6.0) {  // Si el promedio es mayor o igual a 6.0
        printf("\nAprobado\n");  // Imprime "Aprobado" si la condición es verdadera
    } else {  // Si el promedio es menor a 6.0
        printf("\nReprobado\n");  // Imprime "Reprobado" si la condición del if es falsa
    }

    return 0;  // Termina el programa
}
