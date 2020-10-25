#include <stdio.h>
/* Faça um programa que lê o número de um vendedor, seu salário fixo e o total de vendas por
ele efetuadas no mês. Acrescentar ao salário um prêmio, conforme a seguinte tabela:

Total de vendas no mês (v)      Prêmio
    100 < v ≤ 500               50
    500 < v ≤ 750               70
    750 < v                     100

O programa deve calcular o salário do vendedor
e imprimir seu número e seu salário. */

int main()
{
    float salario, vendas, total;

    printf ("Salario Fixo: R$ ");
    scanf ("%f", &salario);

    printf ("Vendas: R$ ");
    scanf ("%f", &vendas);

    printf ("\n");

    if (vendas > 100 && vendas <= 500)
    total = salario + 50.0;

        else if (vendas > 500 && vendas <= 750)
        total = salario + 70.0;

            else total = salario + 100.0;

    printf ("Total: R$ %.2f \n", total);

    return 0;
}
