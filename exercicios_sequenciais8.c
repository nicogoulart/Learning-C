#include <stdio.h>
#include <math.h>

/* Recebe uma temperatura em graus Farenheit
e converte para Celsius. */

int main()
{
    float farenheit, celsius;

    printf ("CONVERTER FARENHEIT PARA CELSIUS \n\n");

    printf ("Temperatura em Farenheit: ");
    scanf ("%f", &farenheit);

    celsius = 5.0 / 9.0 * (farenheit - 32.0);

    printf ("Temperatura em Celsius: %.2f \n", celsius);

    return 0;
}
