#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>
/* Biblioteca est�ndar de entrada y salida */

void main(void)
{
    char p1, p2, p3 = '$';
    /* Declaraci�n de caracteres p1, p2 y p3 (inicializado con $) */

    printf("\nIngrese un caracter: ");
    p1 = getchar();
    /* Lee un car�cter de entrada y lo almacena en p1 */

    putchar(p1);
    /* Imprime el car�cter almacenado en p1 */

    printf("\n");

    fflush(stdin);
    /* Limpia el b�fer de entrada */

    printf("\nEl caracter p3 es: ");
    putchar(p3);
    /* Imprime el car�cter almacenado en p3 */

    printf("\n");
    printf("\nIngrese otro caracter: ");

    fflush(stdin);

    scanf("%c", &p2);
    /* Lee otro car�cter de entrada y lo almacena en p2 */

    printf("%c", p2);
    /* Imprime el car�cter almacenado en p2 */
}

