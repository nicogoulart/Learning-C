#include <stdio.h>
/* Uma sorveteria vende 10 produtos diferentes, cada um com um preço.
Faça um programa que leia o código referente ao produto e o número de
unidades compradas do produto e imprima o preço a pagar.

Suponha que somente um produto pode ser comprado a cada vez.
Considere a seguinte tabela de preços:

Código      Produto                             Preço (R$)
    01      refrigerante pequeno                0,60
    02      refrigerante grande                 0,80
    03      suco de laranja                     1,00
    04      casquinha simples                   1,00
    05      casquinha simples com cobertura     1,20
    06      casquinha dupla                     1,20
    07      casquinha dupla com cobertura       1,40
    08      sundae                              1,50
    09      banana split                        2,00
    10      especial da casa                    2,50 */

int main()
{
    int cod, quant;
    float preco;

    printf ("Codigo: ");
    scanf ("%d", &cod);

    printf ("Quantidade: ");
    scanf ("%d", &quant);

    switch (cod)
    {
        case 1:
            preco = (float)quant * 0.6;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 2:
            preco = (float)quant * 0.8;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 3:
            preco = (float)quant;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 4:
            preco = (float)quant;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 5:
            preco = (float)quant * 1.2;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 6:
            preco = (float)quant * 1.2;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 7:
            preco = (float)quant * 1.4;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 8:
            preco = (float)quant * 1.5;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 9:
            preco = (float)quant * 2.0;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        case 10:
            preco = (float)quant * 2.5;
            printf ("Preco: R$ %.2f \n", preco);
            break;
        default: printf ("Comando invalido. Tente novamente. \n");
    }

    return 0;
}
