#include <stdio.h>
/* Leia um n�mero inteiro. Se o n�mero lido for positivo,
escreva uma mensagem indicando se ele � par ou �mpar. */

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
