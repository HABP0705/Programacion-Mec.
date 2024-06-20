#include <stdio.h>
#include <stdlib.h>



void main(void)
{
    char *cad0 = "Hola Mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

    strcpy(cad1, cad0);
    /* La función strcpy permite copiar una cadena de caracteres completa.
       En este caso se copia la cadena cad0 a cad1. */
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "XX");
    printf("\nPrueba de la funcion strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    /* La función strncpy permite copiar un número determinado de caracteres a
       otra cadena de caracteres. En este caso se copian 4 caracteres de la cadena
       cad0 a cad2. */
    printf("\nPrueba de la funcion strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nPrueba de la funcion strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    /* La función strcat permite incorporar una cadena de caracteres a otra
       cadena dada. En este caso se agrega la cadena cad3 a cad0. */
    printf("\nPrueba de la función strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, " YY");
    printf("\nPrueba de la funcion strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);

    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    /* La función strncat permite incorporar un número determinado de caracteres
       a una cadena. En este caso se agregan cuatro caracteres de la cadena cad0
       a cad2. */
    printf("\nPrueba de la funcion strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    cad0 = strstr(cad0, "Mexico");
    /* La función strstr se utiliza para localizar una cadena de caracteres dentro
       de otra cadena. Si la encuentra, regresa un apuntador al inicio de la
       primera ocurrencia de la cadena localizada. De otra forma, regresa NULL. */
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena Mexico dentro de cad0: %s\n", cad0);

    cad0 = strstr(cad0, "Guatemala");
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", cad0);
}

