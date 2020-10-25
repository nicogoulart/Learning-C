#include <stdio.h>
/* Uma indústria de ovos de Páscoa fornece três tipos diferentes de ovos de chocolate (A, B e C).
Faça um programa que leia os dados relativos a um pedido, e informe o total a ser pago em
reais e o equivalente em dólares. Suponha que em cada pedido somente poderá ser solicitado
um tipo de ovo. Além disso, com a intenção de satisfazer a um maior número de clientes, foi
limitado o número de ovos a serem fornecidos por pedido: o número máximo de unidades do
ovo A é 50, do B é 30 e do C é 20. O programa deverá, inicialmente, ler os preços unitários
dos produtos fornecidos. Caso o pedido supere o número limite de unidades correspondente ao
tipo de ovo do pedido, o programa deverá emitir uma mensagem indicando que não poderá
atender o total do pedido, dizendo qual o número de unidades que serão fornecidas (o limite
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
