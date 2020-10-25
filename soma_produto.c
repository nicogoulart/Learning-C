/* Este programa lê dois inteiros informados pelo
usuário e retorna a soma desses valores. */

#include <stdio.h>

int main()
{
    float v1, v2, soma, produto;

    printf ("Informe o primeiro valor: ");
    scanf ("%f", &v1);

    printf ("Informe o segundo valor: ");
    scanf ("%f", &v2);

    soma = v1 + v2;
    produto = v1 * v2;

    printf ("\n");
    printf ("Soma dos dois valores: %.2f \n", soma);
    printf ("Produto dos dois valores: %.2f \n", produto);

    return 0;
}
