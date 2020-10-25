#include <stdio.h>
#include <ctype.h>

int main()
{
    char codc, code, codl, codf; //Codigo.
    int estqc, estqe, estql, estqf; //Estoque.
    float pc, pe, pl, pf; //Preço.

    char pedido; //Código do pedido.
    int unidades; //Unidades do pedido.
    float total; //Total da compra.

    int unc, une, unl, unf; //Unidades vendidas;
    float totc, tote, totl, totf; //Total faturado em cada produto.
    float total_vendas = 0; //Total de todas as vendas.

    codc = 'C';
    code = 'E';
    codl = 'L';
    codf = 'F';

    estqc = 50;
    estqe = 20;
    estql = 30;
    estqf = 5;

    pc = 3;
    pe = 2.5;
    pl = 1.2;
    pf = 4.5;

    unc = 0;
    une = 0;
    unl = 0;
    unf = 0;

    totc = 0;
    tote = 0;
    totl = 0;
    totf = 0;

    total_vendas = 0;

    //Tabela dos Produtos
    printf("Codigo \t\t Produto \t\t Estoque \t Preco(R$) \n");
    printf("%c \t\t Caderno 50 fls \t %d \t\t %3.2f \n", codc, estqc, pc);
    printf("%c \t\t Esferografica \t\t %d \t\t %3.2f \n", code, estqe, pe);
    printf("%c \t\t Lapis \t\t\t %d \t\t %3.2f \n", codl, estql, pl);
    printf("%c \t\t Folha A4 - pac \t %d \t\t %3.2f \n\n\n", codf, estqf, pf);

    printf ("Unidades: ");
    scanf (" %d", &unidades);

    printf("Pedido: ");
    scanf(" %c", &pedido);

    pedido = toupper(pedido); //Converte para maiuscula.

    switch(pedido)
    {
        case 'C':
            if (estqc - unidades >= 0)
            {
                estqc = estqc - unidades;
                total = pc * unidades;

                unc = unc + unidades;
                totc = totc + total;

                printf("\nTotal = R$ %.2f \n\n", total);
            }
                else printf("\nEstoque insuficiente. Estoque atual = %d \n", estqc);
            break;


        case 'E':
            if (estqe - unidades >= 0)
            {
                estqe = estqe - unidades;
                total = pe * unidades;

                une = une + unidades;
                tote = tote + total;

                printf("\nTotal = R$ %.2f \n\n", total);
            }
                else printf("\nEstoque insuficiente. Estoque atual = %d \n", estqe);
            break;


        case 'L':
            if (estql - unidades >= 0)
            {
                estql = estql - unidades;
                total = pl * unidades;

                unl = unl + unidades;
                totl = totl + total;

                printf("\nTotal = R$ %.2f \n\n", total);
            }
                else printf("\nEstoque insuficiente. Estoque atual = %d \n", estql);
            break;


        case 'F':
            if (estqf - unidades >= 0)
            {
                estqf = estqf - unidades;
                total = pf * unidades;

                unf = unf + unidades;
                totf = totf + total;

                printf("\nTotal = R$ %.2f \n\n", total);
            }
                else printf("\nEstoque insuficiente. Estoque atual = %d \n", estqf);
            break;


        default: printf("Codigo invalido. \n");
    }

    total_vendas = total_vendas + total;

    //Relatório
    printf("* \t\t\t\t\t RELATORIO DE VENDAS DO DIA \t\t\t\t * \n");
    printf("\n* \t\t Produto \t\t\t Unidades Vendidas \t Total Faturado\t\t * \n");
    printf("* \t\t\t\t\t\t\t\t\t\t\t\t *\n");
    printf("* \t\t Caderno 50 fls \t\t %d \t\t\t R$ %.2f \t\t *\n", unc, totc);
    printf("* \t\t Caderno 50 fls \t\t %d \t\t\t R$ %.2f \t\t *\n", une, tote);
    printf("* \t\t Caderno 50 fls \t\t %d \t\t\t R$ %.2f \t\t *\n", unl, totl);
    printf("* \t\t Caderno 50 fls \t\t %d \t\t\t R$ %.2f \t\t *\n", unf, totf);
    printf("\n* \t\t TOTAL DE VENDAS DO DIA \t\t\t\t R$ %.2f \t\t *\n", total_vendas);

    return 0;
}
