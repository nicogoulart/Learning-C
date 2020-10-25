/** Um número primo é um inteiro positivo que é
divisível somente por si e por 1. Calcule e imprima
os primeiros n números primos.

Sugestão: um número n será primo se nenhum dos valores
n/2, n/3, n/4, . . . n/sqrt(n) for inteiro).

Teste o seu programa calculando os
primeiros 20 números primos. */

#include <stdio.h>
#include <math.h>

int main()
{
    int n, numero, divisor, nao_primo;

    printf ("NUMEROS PRIMOS \n \n");

    printf ("intervalo n: ");
    scanf ("%d", &n);

    for (numero = 2; numero <= n; numero++)
    {
        nao_primo = 0;

        for (divisor = 2; (divisor < numero) && (nao_primo == 0); divisor++)
        {
            if (numero % divisor == 0)
            nao_primo++;
        }

        if (nao_primo == 0)
        printf ("%d \n", numero);
    }

    return 0;
}
