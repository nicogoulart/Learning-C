#include <stdio.h>
#define MAX 25

int main()
{
    float x, soma, parcela;
    int i;

    printf ("Diga um valor x.\n");
    scanf ("%f", &x);

    /** Em vez de somarmos de x^25 at� x/25, come�amos de x/25 e fomos at� x^25.
    Para evitar lidar com n�meros grandes, usamos as parcelas anteriores para
    calcular as pr�ximas, j� que elas se comportam regularmente. */

    soma = 0;
    parcela = x/25;

    for (i = 1; i < MAX; i++)
    {
        parcela *= -x * (MAX + 1 - i) / (MAX - i);
        soma += parcela;
    }

    printf ("Somatorio: %f", soma);

    return 0;
}
