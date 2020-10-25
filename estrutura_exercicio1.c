#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PROD 3

struct produto
{
    char nome[31];
    char tipo[8];
    int quantidade [6];
    float media;
};

struct produto le_dados_produto()
{
    struct produto coisa;
    int b;
    float soma = 0;

    fflush (stdin);

    printf ("Digite nome do produto: ");
    fgets (coisa.nome, 30, stdin);

    fflush (stdin);

    printf ("Digite o tipo (Pequeno/Medio/Grande): ");
    scanf ("%s", coisa.tipo);

    for (b = 0; b < 6; b++)
    {
        printf ("Quantidade vendida no dia %d: ", b + 1);
        scanf (" %d", &coisa.quantidade[b]);

        soma = soma + coisa.quantidade[b];
    }

    coisa.media = (float)soma/6;

    return coisa;
}

void imprime_produto (struct produto coisa, int idx)
{
    int c;

    printf ("\n--- PRODUTO %d ---\n", idx + 1);

    printf ("\t Nome: %s\n", coisa.nome);
    printf ("\t Tipo: %s\n", coisa.tipo);
    printf ("\t Vendas nos ultimos 6 dias: ");

    for (c = 0; c < 6; c++)
        printf ("%5d ", coisa.quantidade[c]);

    printf ("\n");

    printf ("\t Media de vendas: %.2f\n", coisa.media);
}

int main()
{
    struct produto produtos[PROD];
    int a;

    for (a = 0; a < PROD; a++)
        produtos[a] = le_dados_produto();

    for (a = 0; a < PROD; a++)
        imprime_produto (produtos[a], a);

    return 0;
}
