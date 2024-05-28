#include <stdio.h>
#include <math.h>

// C�lculo de Pi.  El programa obtiene el valor de P aplicando una serie determinada.


int main()
{
    int i = 1, b = 0, c; // Declara e inicializa 'i' como el contador de t�rminos (iniciando en 1), 'b' como un flag para alternar la suma/resta, y 'c' para contar el n�mero de iteraciones
    double res = 4.0; // Inicializa 'res' con el primer t�rmino de la serie de Leibniz para aproximar pi
    c = 1; // Inicializa 'c' como 1 para contar el primer t�rmino

    while (fabs(3.1415 - res) > 0.0005)   // Bucle que contin�a hasta que la aproximaci�n de pi sea suficientemente cercana a 3.1415
    {
        i += 2; // Incrementa 'i' en 2 para obtener el siguiente denominador impar
        if (b)   // Si 'b' es 1 (alternar la suma)
        {
            res += 4.0 / i; // Suma el t�rmino correspondiente a la serie de Leibniz
            b = 0; // Cambia 'b' a 0 para la siguiente iteraci�n (resta)
        }
        else     // Si 'b' es 0 (alternar la resta)
        {
            res -= 4.0 / i; // Resta el t�rmino correspondiente a la serie de Leibniz
            b = 1; // Cambia 'b' a 1 para la siguiente iteraci�n (suma)
        }
        c++; // Incrementa el contador de t�rminos
    }

    printf("\nNumero de terminos: %d", c); // Imprime el n�mero de t�rminos necesarios para alcanzar la precisi�n deseada

    return 0; // el programa termin� correctamente
}

