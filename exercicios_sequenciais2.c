#include <stdio.h>
/* Dado o valor do dólar em reais e
uma quantidade em reais, converte esse
valor em dólares. */

int main()
{
    float dolar, real, conversor;

    printf ("CONVERSOR DE DOLAR PARA REAL\n\n");

    printf ("Informe o valor do dolar atual (em reais): R$ ");
    scanf ("%f", &dolar);

    printf ("Informe o valor em reais que voce deseja converter para dolares: R$ ");
    scanf ("%f", &real);

    printf ("\n");

    conversor = real / dolar;

    printf ("Conversao desse valor em dolares: US$ %.2f\n", conversor);

    return 0;
}
