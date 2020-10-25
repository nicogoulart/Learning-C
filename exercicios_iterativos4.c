/** Retorna os n�meros perfeitos entre
o intervalo de 0 a n n�meros inteiros
positivos fornecidos pelo usu�rio.

N�meros Perfeitos s�o n�meros que a soma
de todos os divisores exceto ele mesmo
s�o iguais ao pr�prio n�mero. Exemplo:

6 = 1 + 2 + 3. */

#include <stdio.h>

int main()
{
    int n, numero, divisor, soma;

    printf ("NUMEROS PERFEITOS \n \n");

    printf ("intervalo n: ");
    scanf ("%d", &n);

    printf ("\n");

    for (numero = 6; numero <= n; numero++)
    {
        soma = 1;

        for (divisor = 2; divisor < numero; divisor++)
        {
            if (numero % divisor == 0)
            soma = soma + divisor;
        }

        if (soma == numero)
        printf ("%d \n", numero);
    }

    return 0;
}
