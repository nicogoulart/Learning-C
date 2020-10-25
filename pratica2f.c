#include <stdio.h>
#include <math.h>

int main()
{
    int colunas, rende_lata, latas_numero;
    int latas_compradas, colunas_pintadas;
    float largura_col, altura_col;
    float area_col, total_area;
    float orcamento_univ, preco_lata, custo_total;

    colunas = 570; //Quantas colunas possui a universidade.
    rende_lata = 150; //Quantos metros quadrados rende uma lata de tinta.

    largura_col = 0.6; //Largura de uma coluna.
    altura_col = 3.4; //Altura de uma coluna.

    area_col = largura_col * altura_col * 4; //Área a ser pintada de uma coluna.
    total_area = area_col * ((float)colunas); //Área a ser pintada de todas as colunas.

    latas_numero = ceil(total_area / rende_lata); //Latas necessárias para pintas todas as colunas.

    printf ("PINTAR AS COLUNAS DA UFRGS\n");

    printf ("Orcamento: R$ ");
    scanf ("%f", &orcamento_univ); //Orçamento que a universidade possui.

    printf ("Preco da lata: R$ ");
    scanf ("%f", &preco_lata); //Preço de uma lata de tinta.

    printf ("\n");

    latas_compradas = orcamento_univ / preco_lata; //Quantas latas é possível comprar com o orçamento.
    colunas_pintadas = (latas_compradas * rende_lata) / area_col; //Quantas colunas são possíveis pintar com o orçamento.
    custo_total = preco_lata * ((float)latas_numero); //Custo para revitalizar totalmente as colunas.

    printf ("Numero de latas compradas: %d\n", latas_compradas);
    printf ("Numero de colunas pintadas: %d\n", colunas_pintadas);
    printf ("Custo para revitalizar todas as colunas: R$ %.2f\n", custo_total);

    return 0;
}
