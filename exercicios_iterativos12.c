/* Uma sorveteria vende 5 produtos diferentes, cada um com um preço, de acordo com a tabela abaixo:

Código      Produto                 Preço (R$)
A           refrigerante            0,60
B           casquinha simples       1,00
C           casquinha dupla         1,20
D           sundae                  1,50
E           banana split            2,00

- O programa deverá apresentar um menu indicando os preços dos produtos.

- Cada venda efetuada pode ser composta por diversas unidades de diversos produtos,
e cada produto é identificado através de seu código.

- O programa deve efetuar diversas vendas, informando o preço a pagar em cada uma delas,
e parando quando o usuário inserir o código S (Sair).

No final do dia o programa deverá emitir um
relatório com as seguintes informações:

a) número total de itens vendidos em cada produto;
b) total pago para cada produto;
c) total arrecadado (somando todos os produtos);
d) média de valor pago por pedido. */

#include <stdio.h>
#include <ctype.h>

#define PROD_A 0.6
#define PROD_B 1.0
#define PROD_C 1.2
#define PROD_D 1.5
#define PROD_E 2.0

int main()
{
    int cod, quantidade;
    float total_arrecadado, media, preco;
    char prod; //Char p identificar o pedido de compra.

    int pa = 0; //Quantidade de PA vendidos.
    int pb = 0; //Quantidade de PB vendidos.
    int pc = 0; //Quantidade de PC vendidos.
    int pd = 0; //Quantidade de PD vendidos.
    int pe = 0; //Quantidade de PE vendidos.

    float pago_a = 0; //Total pago em PA.
    float pago_b = 0; //Total pago em PB.
    float pago_c = 0; //Total pago em PC.
    float pago_d = 0; //Total pago em PD.
    float pago_e = 0; //Total pago em PE.

    int pedidos = 0; //Número de pedidos.
    float compra = 0; //Total da compra realizada.

    printf("CODIGO\t\tPRODUTO\t\t\tPRECO (R$)\n");
    printf("A\t\trefrigerante\t\t%.2f\n", PROD_A);
    printf("B\t\tcasquinha simples\t%.2f\n", PROD_B);
    printf("C\t\tcasquinha dupla\t\t%.2f\n", PROD_C);
    printf("D\t\tsundae\t\t\t%.2f\n", PROD_D);
    printf("E\t\tbanana split\t\t%.2f\n\n", PROD_E);

    do
    {
        do
        {
            fflush(stdin);

            printf("Deseja realizar uma compra? [1 - Sim][0 - Nao]: ");
            scanf(" %d", &cod);

            if(cod != 0 && cod != 1)
            printf("Codigo invalido. Tente novamente.\n\n");
        }
        while(cod != 0 && cod != 1);

        if(cod)
        {
            do
            {
                printf("\nInforme o codigo do produto [S - Sair]: ");
                scanf(" %c", &prod);

                prod = toupper(prod);

                switch(prod)
                {
                    case 'A':
                        fflush(stdin);
                        printf("Informe a quantidade: ");
                        scanf(" %d", &quantidade);

                        pa += quantidade;
                        preco = (float)quantidade * PROD_A;
                        pago_a += preco;
                        compra += preco;
                        printf("Preco: R$ %.2f\n", preco);
                        break;

                    case 'B':
                        fflush(stdin);
                        printf("Informe a quantidade: ");
                        scanf(" %d", &quantidade);

                        pb += quantidade;
                        preco = (float)quantidade * PROD_B;
                        pago_b += preco;
                        compra += preco;
                        printf("Preco: R$ %.2f\n", preco);
                        break;

                    case 'C':
                        fflush(stdin);
                        printf("Informe a quantidade: ");
                        scanf(" %d", &quantidade);

                        pc += quantidade;
                        preco = (float)quantidade * PROD_C;
                        pago_c += preco;
                        compra += preco;
                        printf("Preco: R$ %.2f\n", preco);
                        break;

                    case 'D':
                        fflush(stdin);
                        printf("Informe a quantidade: ");
                        scanf(" %d", &quantidade);

                        pd += quantidade;
                        preco = (float)quantidade * PROD_D;
                        pago_d += preco;
                        compra += preco;
                        printf("Preco: R$ %.2f\n", preco);
                        break;

                    case 'E':
                        fflush(stdin);
                        printf("Informe a quantidade: ");
                        scanf(" %d", &quantidade);

                        pe += quantidade;
                        preco = (float)quantidade * PROD_E;
                        pago_e += preco;
                        compra += preco;
                        printf("Preco: R$ %.2f\n", preco);
                        break;

                    case 'S':
                        break;

                    default:
                        printf("Codigo invalido. Tente novamente.\n");
                }
            }
            while(prod != 'S');

            if(compra > 0) printf("TOTAL = R$ %.2f\n\n", compra);

            pedidos++;
            compra = 0;
        }
    }
    while(cod);

    total_arrecadado = pago_a + pago_b + pago_c + pago_d + pago_e;
    media = total_arrecadado / pedidos;

    if(pedidos > 0)
    {
        printf("\nRELATORIO GERAL DAS COMPRAS:\n\n");
        printf("Produto A: %d itens vendidos\n", pa);
        printf("Produto B: %d itens vendidos\n", pb);
        printf("Produto C: %d itens vendidos\n", pc);
        printf("Produto D: %d itens vendidos\n", pd);
        printf("Produto E: %d itens vendidos\n\n", pe);
        printf("Total arrecadado com Produto A: R$ %.2f\n", pago_a);
        printf("Total arrecadado com Produto B: R$ %.2f\n", pago_b);
        printf("Total arrecadado com Produto C: R$ %.2f\n", pago_c);
        printf("Total arrecadado com Produto D: R$ %.2f\n", pago_d);
        printf("Total arrecadado com Produto E: R$ %.2f\n\n", pago_e);
        printf("Total de todas as vendas: R$ %.2f\n", total_arrecadado);
        printf("Media de valor de cada pedido: R$ %.2f\n\n", media);
    }

    return 0;
}
