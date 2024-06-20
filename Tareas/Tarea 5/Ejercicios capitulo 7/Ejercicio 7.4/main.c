#include <stdio.h>
#include <stdlib.h>




int main(void)
{
    char *cad0;
    cad0 = "Argentina";          /* Asigna la cadena "Argentina" a cad0 */
    puts(cad0);                  /* Imprime el contenido de cad0 */

    cad0 = "Brasil";             /* Cambia la asignaci�n de cad0 a "Brasil" */
    puts(cad0);                  /* Imprime el nuevo contenido de cad0 */

    char cad1[100];              /* Se define cad1 como un array de caracteres */
    /* Ahora cad1 est� inicializado y es seguro de usar con gets */
    gets(cad1);                  /* Lee una l�nea de texto y la guarda en cad1 */

    char cad2[] = "Mexico";      /* Declaraci�n y asignaci�n correcta de cad2 como un array */
    puts(cad2);                  /* Imprime el contenido de cad2 */

    gets(cad2);                  /* Modifica el contenido de cad2 con una nueva entrada */
    puts(cad2);                  /* Imprime el nuevo contenido de cad2 */

    /* El siguiente intento de asignaci�n es incorrecto, produce un error de compilaci�n */
    // cad2[10] = "Guatemala";   /* Intento incorrecto de asignar una cadena a un elemento espec�fico de cad2 */
    /* Para asignar una cadena a cad2, se debe usar strcpy desde la biblioteca <string.h> */
    strcpy(cad2 + 5, "Guatemala"); /* Concatenaci�n de "Guatemala" en cad2 comenzando en el �ndice 5 */

    puts(cad2);                  /* Imprime el contenido modificado de cad2 */

    return 0;
}
