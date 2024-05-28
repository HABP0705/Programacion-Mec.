#include <stdio.h>
#include <math.h>

// Cálculo de Pi.  El programa obtiene el valor de P aplicando una serie determinada.


int main()
{
    int i = 1, b = 0, c; // Declara e inicializa 'i' como el contador de términos (iniciando en 1), 'b' como un flag para alternar la suma/resta, y 'c' para contar el número de iteraciones
    double res = 4.0; // Inicializa 'res' con el primer término de la serie de Leibniz para aproximar pi
    c = 1; // Inicializa 'c' como 1 para contar el primer término

    while (fabs(3.1415 - res) > 0.0005)   // Bucle que continúa hasta que la aproximación de pi sea suficientemente cercana a 3.1415
    {
        i += 2; // Incrementa 'i' en 2 para obtener el siguiente denominador impar
        if (b)   // Si 'b' es 1 (alternar la suma)
        {
            res += 4.0 / i; // Suma el término correspondiente a la serie de Leibniz
            b = 0; // Cambia 'b' a 0 para la siguiente iteración (resta)
        }
        else     // Si 'b' es 0 (alternar la resta)
        {
            res -= 4.0 / i; // Resta el término correspondiente a la serie de Leibniz
            b = 1; // Cambia 'b' a 1 para la siguiente iteración (suma)
        }
        c++; // Incrementa el contador de términos
    }

    printf("\nNumero de terminos: %d", c); // Imprime el número de términos necesarios para alcanzar la precisión deseada

    return 0; // el programa terminó correctamente
}

