#include <stdio.h>
#include <stdlib.h>



int main()
{
    int selector;  //variable entera llamada selector para almacenar la entrada del usuario
    printf("Ingrese un numero (1-6): ");  //mensaje solicitando al usuario que ingrese un número entre 1 y 6
    scanf("%d", &selector);  // Lee el número ingresado por el usuario y lo almacena en la variable selector

    switch(selector)  // Inicia una estructura switch para evaluar el valor de selector
    {
        case 1:  // Si selector es 1
            printf("No has ganado, intentelo de nuevo\n");  // Imprime un mensaje indicando que el usuario no ha ganado
            break;  // Sale del switch

        case 2:  // Si selector es 2
        case 3:  // Si selector es 3
        case 4:  // Si selector es 4
            printf("No has ganado, intentelo de nuevo\n");  // Imprime el mismo mensaje que en el caso 1
            break;  // Sale del switch

        case 5:  // Si selector es 5
        case 6:  // Si selector es 6
            printf("Felicitaciones, has ganado\n");  // Imprime un mensaje indicando que el usuario ha ganado
            break;  // Sale del switch

        default:  // Si selector no es ninguno de los casos anteriores
            printf("ERROR: Numero fuera del rango\n");  // Imprime un mensaje de error indicando que el número está fuera del rango permitido
            break;  // Sale del switch
    }

    return 0;  //Termina el programa
}
