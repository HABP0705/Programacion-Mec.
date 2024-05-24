#include <stdio.h>
#include <stdlib.h>

 //Incremento de salario. El programa, al recibir como dato el nivel de un profesor, incrementa su salario

int main()
{
    float Salario; //variable llamada Salario de tipo float para almacenar el salario del profesor.
    int nivel;     //variable llamada nivel de tipo int para almacenar el nivel académico del profesor.

    //mensaje solicitando al usuario ingresar el nivel académico del profesor.
    printf("Ingrese el nivel academico del profesor: ");

    // Lee el valor ingresado por el usuario y lo almacena en la variable nivel.
    scanf("%d", &nivel);

    //mensaje solicitando al usuario ingresar el salario del profesor.
    printf("Ingrese el salario: ");

    // Lee el valor ingresado por el usuario y lo almacena en la variable Salario.
    scanf("%f", &Salario);

    // Inicia una estructura switch basada en el valor de la variable nivel.
    switch(nivel)
    {
    case 1:
        // Si nivel es 1, incrementa el salario en un 0.35% multiplicándolo por 1.0035.
        Salario = Salario * 1.0035;
        break;
    case 2:
        // Si nivel es 2, incrementa el salario en un 0.41% multiplicándolo por 1.0041.
        Salario = Salario * 1.0041;
        break;
    case 3:
        // Si nivel es 3, incrementa el salario en un 0.48% multiplicándolo por 1.0048.
        Salario = Salario * 1.0048;
        break;
    case 4:
        // Si nivel es 4, incrementa el salario en un 0.53% multiplicándolo por 1.0053.
        Salario = Salario * 1.0053;
        break;
    }

    // Muestra el nivel y el nuevo salario después de aplicar el incremento.
    printf("\n\nNivel: %d \tNuevo salario: %8.2f", nivel, Salario);

    return 0; //el programa se ejecutó correctamente.
}
