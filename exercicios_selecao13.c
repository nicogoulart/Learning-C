#include <stdio.h>
/* Leia um número inteiro. Se o número lido for positivo,
escreva uma mensagem indicando se ele é par ou ímpar. */

int main()
{
    int n;

    printf ("Numero: ");
    scanf ("%d", &n);

    if (n >= 0)
    {
        if (n % 2 == 0)
        printf ("O numero e par! \n");

            else printf ("O numero e impar! \n");
    }

    return 0;
}
