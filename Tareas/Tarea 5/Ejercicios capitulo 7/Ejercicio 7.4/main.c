#include <stdio.h>
#include <stdlib.h>




int main(void)
{
    char *cad0;
    cad0 = "Argentina";          /* Asigna la cadena "Argentina" a cad0 */
    puts(cad0);                  /* Imprime el contenido de cad0 */

    cad0 = "Brasil";             /* Cambia la asignación de cad0 a "Brasil" */
    puts(cad0);                  /* Imprime el nuevo contenido de cad0 */

    char cad1[100];              /* Se define cad1 como un array de caracteres */
    /* Ahora cad1 está inicializado y es seguro de usar con gets */
    gets(cad1);                  /* Lee una línea de texto y la guarda en cad1 */

    char cad2[] = "Mexico";      /* Declaración y asignación correcta de cad2 como un array */
    puts(cad2);                  /* Imprime el contenido de cad2 */

    gets(cad2);                  /* Modifica el contenido de cad2 con una nueva entrada */
    puts(cad2);                  /* Imprime el nuevo contenido de cad2 */

    /* El siguiente intento de asignación es incorrecto, produce un error de compilación */
    // cad2[10] = "Guatemala";   /* Intento incorrecto de asignar una cadena a un elemento específico de cad2 */
    /* Para asignar una cadena a cad2, se debe usar strcpy desde la biblioteca <string.h> */
    strcpy(cad2 + 5, "Guatemala"); /* Concatenación de "Guatemala" en cad2 comenzando en el índice 5 */

    puts(cad2);                  /* Imprime el contenido modificado de cad2 */

    return 0;
}
