#include <stdio.h>
/* Calcula o valor total a ser pago na
compra de várias unidades de dois produtos
distintos, dado o valor e as unidades obtidas
dos produtos, além da porcentagem de IPI (Imposto
Sobre Produto Industrializado) a ser acrescentado. */

int main()
{
    int codigo1, numero1, codigo2, numero2, ipi;
    float valor1, valor2, soma, imposto, total;

    printf ("CUSTO TOTAL DA TRANSACAO\n\n");

    printf ("Codigo do Produto 1: ");
    scanf ("%d", &codigo1);

    printf ("Unidades do Produto 1: ");
    scanf ("%d", &numero1);

    printf ("Custo do Produto 1: R$ ");
    scanf ("%f", &valor1);

    printf ("\n");

    printf ("Codigo do Produto 2: ");
    scanf ("%d", &codigo2);

    printf ("Unidades do Produto 2: ");
    scanf ("%d", &numero2);

    printf ("Custo do Produto 2: R$ ");
    scanf ("%f", &valor2);

    printf ("\n");

    printf ("Porcentagem de IPI: ");
    scanf ("%d", &ipi);

    printf ("\n");

    soma = ((float)numero1 * valor1) + ((float)numero2 * valor2);
    imposto = (ipi * soma) / 100;
    total = soma + imposto;

    printf ("Total: R$ %.2f\n", total);

    return 0;
}
