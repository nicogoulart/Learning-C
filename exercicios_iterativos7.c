/** Uma fábrica tem 5 representantes. Cada um recebe
uma comissão calculada a partir do número de itens
de um pedido, segundo os seguintes critérios:

a) para mais de 20 itens vendidos, a comissão é de
10% do valor total do pedido;

b) para pedidos de 20 e 49 itens, a comissão é de
15% do valor total do pedido;

c) para pedidos de 50 a 74 itens, a comissão é de
20% do valor total do pedido; e

d) para pedidos iguais ou superiores, a 75 itens a
comissão é de 25%.

Faça um programa que processe um número fixo de pedidos
(informado pelo usuário). Para cada pedido o programa
deve ler o código do representante (1 a 5) e o total de
itens do pedido. O programa deve informar:

- o valor da comissão de cada pedido;
- o total de vendas dos pedidos processados;
- o total de comissões para cada representante;
- o total de comissões que a companhia pagou aos
seus representantes. */

#include <stdio.h>

int main()
{
    int pedidos, cont, rep, itens, soma, comissao;
    int rep1, rep2, rep3, rep4, rep5;

    soma = 0; ///Soma todos os itens.
    comissao = 0; ///Soma todas as comissões;

    rep1 = 0;
    rep2 = 0;
    rep3 = 0;
    rep4 = 0;
    rep5 = 0;

    printf ("Pedidos: ");
    scanf ("%d", &pedidos);

    printf ("\n");

    for (cont = 1; cont <= pedidos; cont++)
    {
        do
        {
            printf ("Representante: ");
            scanf ("%d", &rep);

            if (rep < 1 || rep > 5)
                printf ("Numero invalido. Tente novamente. \n \n");
        }
        while (rep < 1 || rep > 5);

        printf ("Numero de itens: ");
        scanf ("%d", &itens);

        soma += itens;

        if (itens < 20)
        {
            printf ("Comissao de 10. \n");
            comissao++;

            switch(rep)
            {
                case 1:
                    rep1++;
                    break;

                case 2:
                    rep2++;
                    break;

                case 3:
                    rep3++;
                    break;

                case 4:
                    rep4++;
                    break;

                case 5:
                    rep5++;
            }
        }

        else if (itens < 50)
        {
            printf ("Comissao de 15. \n");
            comissao++;

            switch(rep)
            {
                case 1:
                    rep1++;
                    break;

                case 2:
                    rep2++;
                    break;

                case 3:
                    rep3++;
                    break;

                case 4:
                    rep4++;
                    break;

                case 5:
                    rep5++;
            }
        }

        else if (itens < 75)
        {
            printf ("Comissao de 20. \n");
            comissao++;


            switch(rep)
            {
                case 1:
                    rep1++;
                    break;

                case 2:
                    rep2++;
                    break;

                case 3:
                    rep3++;
                    break;

                case 4:
                    rep4++;
                    break;

                case 5:
                    rep5++;
            }
        }

        else
        {
            printf ("Comissao de 25. \n");
            comissao++;

            switch(rep)
            {
                case 1:
                    rep1++;
                    break;

                case 2:
                    rep2++;
                    break;

                case 3:
                    rep3++;
                    break;

                case 4:
                    rep4++;
                    break;

                case 5:
                    rep5++;
            }
        }

        printf ("\n");
    }

    printf ("Total de vendas: %d \n", soma);
    printf ("Total de comissoes: %d \n", comissao);
    printf ("Representante 1: %d Comissoes \n", rep1);
    printf ("Representante 2: %d Comissoes \n", rep2);
    printf ("Representante 3: %d Comissoes \n", rep3);
    printf ("Representante 4: %d Comissoes \n", rep4);
    printf ("Representante 5: %d Comissoes \n", rep5);

    return 0;
}
