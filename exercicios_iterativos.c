/** Calculamos iterativamente a s�rie S = 1 + 3/4 + 5/9 + ... + (2n-1)/n^2,
tal que todos os termos (2*i-1)/i^2 >= 0.01, para 1 <= i <= n.

Imprimimos a s�rie S e o n�mero n de termos que foram usados.

(!) A sa�da deste programa � constante. A prop�sito,
S = 1 + 3/4 + 5/9 + ... + 397/39601 = 10.106137 (aprox.)
usando n = 200 termos. */

#include <stdio.h>

int main()
{
    int n;
    float soma, termo;

    soma = 0;
    n = 1;

    do
    {
        termo = (float) (2 * n - 1) / (n * n);

        if (termo >= 0.01)
        {
            soma += termo;
            n++;
        }
    }
    while (termo >= 0.01);

    printf ("Resultado: %f \n", soma);
    printf ("Parcelas: %d \n", n);

    return 0;
}
