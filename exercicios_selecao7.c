#include <stdio.h>
/* A partir do preço à vista de um determinado produto, calcular e informar o preço total a pagar
e o valor da prestação mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em
três vezes deverá ser dado um acréscimo de 10% no total a ser pago. Se for parcelado em 5 vezes, o
acréscimo é de 20%. Informar os valores correspondentes a todas as opções. */

int main()
{
    int parcelas;
    float preco, novo_preco, mensal;

    printf ("Valor da Compra: R$ ");
    scanf ("%f", &preco);

    printf ("Parcelas (3 ou 5): ");
    scanf ("%d", &parcelas);

    printf ("\n");

    if (parcelas == 3)
    {
        novo_preco = (preco * 11) / 10;
        mensal = novo_preco / 3;

        printf ("Pagamento Mensal: 3 x R$ %.2f \n", mensal);
        printf ("Total: R$ %.2f \n", novo_preco);
    }

        else if (parcelas == 5)
        {
            novo_preco = (preco * 12) / 10;
            mensal = novo_preco / 5;

            printf ("Pagamento Mensal: 5 x R$ %.2f \n", mensal);
            printf ("Total: R$ %.2f \n", novo_preco);
        }

    return 0;
}
