#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);  /* Lee una cadena de caracteres desde la entrada estándar */

    i = atoi(cad0);
    /* atoi convierte la cadena cad0 a un entero.
       Si la cadena no comienza con números, devuelve 0. */
    printf("\n%s \t %d", cad0, i + 3); /* Imprime la cadena y el valor entero i + 3 */

    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);  /* Lee otra cadena de caracteres desde la entrada estándar */

    d = atof(cad0);
    /* atof convierte la cadena cad0 a un número de punto flotante (double).
       Si la cadena no comienza con números, devuelve 0.0. */
    printf("\n%s \t %.2lf", cad0, d + 1.50); /* Imprime la cadena y el valor double d + 1.50 */

    d = strtod(cad0, &cad1);
    /* strtod convierte la cadena cad0 a un número de punto flotante (double).
       El resto de la cadena se guarda en cad1 (si se proporciona).
       Si la cadena no comienza con números, devuelve 0.0. */
    printf("\n%s \t %.2lf", cad0, d + 1.50); /* Imprime la cadena y el valor double d + 1.50 */
    puts(cad1); /* Imprime el resto de la cadena almacenado en cad1 */

    l = atol(cad0);
    /* atol convierte la cadena cad0 a un número entero largo (long).
       Si la cadena no comienza con números, devuelve 0L. */
    printf("\n%s \t %ld", cad0, l + 10); /* Imprime la cadena y el valor long l + 10 */

    l = strtol(cad0, &cad1, 0);
    /* strtol convierte la cadena cad0 a un número entero largo (long).
       El resto de la cadena se guarda en cad1 (si se proporciona).
       El tercer argumento puede ser 0, 10, o 16 para especificar la base (decimal, octal o hexadecimal).
       Si la cadena no comienza con números, devuelve 0L. */
    printf("\n%s \t %ld", cad0, l + 10); /* Imprime la cadena y el valor long l + 10 */
    puts(cad1); /* Imprime el resto de la cadena almacenado en cad1 */
}
