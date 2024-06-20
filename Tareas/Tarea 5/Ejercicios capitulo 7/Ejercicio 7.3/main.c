#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    char *cad0 = "Buenos dias";   /* Se asignan 11 caracteres más el '\0' a cad0 */
    char cad1[20] = "Hola";       /* Se asignan 5 caracteres más el '\0' a cad1 */
    char cad2[] = "Mexico";       /* Se asignan 7 caracteres más el '\0' a cad2 */
    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
    /* Otra forma de asignar valores a cad3 */
    char cad4[20], cad5[20], cad6[20];  /* Declaración de cadenas cad4, cad5 y cad6 */

    printf("\nLa cadena cad0 es: ");
    puts(cad0);  /* Muestra cad0 utilizando puts */

    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1);  /* Muestra cad1 utilizando printf con %s */

    printf("\nLa cadena cad2 es: ");
    puts(cad2);  /* Muestra cad2 utilizando puts */

    printf("\nLa cadena cad3 es: ");
    puts(cad3);  /* Muestra cad3 utilizando puts */

    printf("\nIngrese una linea de texto (se lee con gets): \n");
    gets(cad4);  /* Lee una línea de texto y la guarda en cad4 */

    printf("\nLa cadena cad4 es: ");
    puts(cad4);  /* Muestra cad4 utilizando puts */

    fflush(stdin);  /* Limpia el búfer de entrada */

    printf("\nIngrese una linea de texto (se lee con scanf): \n");
    scanf("%s", cad5);  /* Lee una palabra (hasta el primer espacio en blanco) y la guarda en cad5 */

    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);  /* Muestra cad5 utilizando printf con %s */

    fflush(stdin);  /* Limpia el búfer de entrada */

    char p;
    int i = 0;

    printf("\nIngrese una linea de texto (se lee cada caracter con getchar): \n");
    /* Lee caracteres uno por uno hasta encontrar '\n' */
    while ((p = getchar()) != '\n')
        cad6[i++] = p;

    cad6[i] = '\0';  /* Agrega el caracter nulo al final de cad6 */
    printf("\nLa cadena cad6 es: ");
    puts(cad6);  /* Muestra cad6 utilizando puts */
}
