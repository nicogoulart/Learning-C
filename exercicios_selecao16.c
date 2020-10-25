#include <stdio.h>
/* Uma ind�stria de ovos de P�scoa fornece tr�s tipos diferentes de ovos de chocolate (A, B e C).
Fa�a um programa que leia os dados relativos a um pedido, e informe o total a ser pago em
reais e o equivalente em d�lares. Suponha que em cada pedido somente poder� ser solicitado
um tipo de ovo. Al�m disso, com a inten��o de satisfazer a um maior n�mero de clientes, foi
limitado o n�mero de ovos a serem fornecidos por pedido: o n�mero m�ximo de unidades do
ovo A � 50, do B � 30 e do C � 20. O programa dever�, inicialmente, ler os pre�os unit�rios
dos produtos fornecidos. Caso o pedido supere o n�mero limite de unidades correspondente ao
tipo de ovo do pedido, o programa dever� emitir uma mensagem indicando que n�o poder�
atender o total do pedido, dizendo qual o n�mero de unidades que ser�o fornecidas (o limite
estabelecido para o tipo). */

int main()
{
    int quant;
    float precoa, precob, precoc, total, dolar;
    char pedido;

    printf ("Preco A: R$ ");
    scanf ("%f", &precoa);

    printf ("Preco B: R$ ");
    scanf ("%f", &precob);

    printf ("Preco C: R$ ");
    scanf ("%f", &precoc);

    printf ("\n");

    fflush(stdin);

    printf ("Pedido: ");
    scanf ("%c", &pedido);

    printf ("Quantidade: ");
    scanf ("%d", &quant);

    printf ("\n");

    if (pedido == 'a' || pedido == 'A')
    {
        if (quant > 50)
        {
            total = 50 * precoa;
            dolar = total * 3.2;

            printf ("Voce ultrapassou a quantidade maxima de 50 unidades. \n");
            printf ("Valor em reais: 50 x R$ %.2f = R$ %.2f \n", precoa, total);
            printf ("Valor em dolares: US$ %.2f \n", dolar);
        }

        else
        {
            total = quant * precoa;
            dolar = total * 3.2;

            printf ("Valor em reais: %d x R$ %.2f = R$ %.2f \n", quant, precoa, total);
            printf ("Valor em dolares: US$ %.2f \n", dolar);
        }
    }

        else if (pedido == 'b' || pedido == 'B')
        {
            if (quant > 30)
            {
                total = 30 * precob;
                dolar = total * 3.2;

                printf ("Voce ultrapassou a quantidade maxima de 30 unidades. \n");
                printf ("Valor em reais: 30 x R$ %.2f = R$ %.2f \n", precob, total);
                printf ("Valor em dolares: US$ %.2f \n", dolar);
            }

            else
            {
                total = quant * precob;
                dolar = total * 3.2;

                printf ("Valor em reais: %d x R$ %.2f = R$ %.2f \n", quant, precob, total);
                printf ("Valor em dolares: US$ %.2f \n", dolar);

            }
        }

            else if (pedido == 'c' || pedido == 'C')
            {
                if (quant > 20)
                {
                    total = 20 * precoc;
                    dolar = total * 3.2;

                    printf ("Voce ultrapassou a quantidade maxima de 20 unidades. \n");
                    printf ("Valor em reais: 20 x R$ %.2f = R$ %.2f \n", precoc, total);
                    printf ("Valor em dolares: US$ %.2f \n", dolar);
                }

                else
                {
                    total = quant * precoc;
                    dolar = total * 3.2;

                    printf ("Valor em reais: %d x R$ %.2f = R$ %.2f \n", quant, precoc, total);
                    printf ("Valor em dolares: US$ %.2f \n", dolar);
                }
            }

                else printf ("Pedido invalido. Tente novamente. \n");

    return 0;
}
