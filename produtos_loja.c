#include <stdio.h>

int main()
{
    float valor;

    printf ("Informe o preco do produto: ");

    do
    {
        scanf ("%f", &valor);

        if (valor <= 0)
        {
            printf ("Preco Invalido! Digite novamente: ");
        }

    }
    while (valor <= 0);

    printf ("Preco informado = %.2f", valor);

    return 0;
}
