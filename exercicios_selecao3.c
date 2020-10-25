#include <stdio.h>
/* Informa o valor a ser pago pela compra efetuada.
Funcionários recebem 5% de desconto e clientes
especiais recebem 10%. Recebe o valor da compra
e um código que identifica o cliente, e retorna
o valor a ser pago. */

int main()
{
    int cod;
    float compra, pagamento;

    printf ("TOTAL A SER PAGO NA LOJA \n \n");

    printf ("Total da compra efetuada: R$ ");
    scanf ("%f", &compra);

    printf ("Codigo do Cliente [1 - Norm] [2 - Func] [3 - Esp]: ");
    scanf ("%d", &cod);

    printf ("\n");

    if (cod == 1)
    {
        pagamento = compra;
        printf ("Pagamento: R$ %.2f \n", pagamento);
    }

        else if (cod == 2)
        {
            pagamento = (compra * 95.0) / 100.0;
            printf ("Pagamento: R$ %.2f \n", pagamento);
        }

            else if (cod == 3)
            {
                pagamento = (compra * 90.0) / 100.0;
                printf ("Pagamento: R$ %.2f \n", pagamento);
            }

                else printf ("Codigo Invalido.");

    return 0;
}
