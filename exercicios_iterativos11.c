/* Foi realizada uma pesquisa em Porto Alegre, com um número desconhecido de pessoas.
De cada entrevistado foram colhidos os seguintes dados (parando a coleta quando o valor
zero é inserido no clube de preferência):
a) clube de preferência (1-Grêmio; 2-Internacional; 3-Outros);
b) salário;
c) cidade de origem (0-Porto Alegre; 1-Outras).

Deseja-se saber:
1) número de torcedores por clube;
2) média salarial dos torcedores do Grêmio e do Internacional;
3) número de pessoas nascidas em Porto Alegre que não torcem por nenhum dos dois primeiros
clubes;
4) número de pessoas entrevistadas. */

#include <stdio.h>

int main()
{
    int pessoas, clube;
    int gremio, inter, outro_time;
    int cidade, poa_nenhum;
    float salario, media_gremio, media_inter;

    pessoas = 0;
    gremio = 0;
    inter = 0;
    outro_time = 0;
    media_gremio = 0;
    media_inter = 0;
    poa_nenhum = 0;

    printf("PESQUISA EM PORTO ALEGRE COM UM NUMERO DESCONHECIDO DE PESSOAS.\n");
    printf("Programa se encerra quando zero é inserido no clube de preferência.\n\n");

    do
    {
        do
        {
            printf("Clube de preferencia [1 - Gremio][2 - Internacional][3 - Outros]: ");
            scanf("%d", &clube);

            if(clube != 0 && clube != 1 && clube != 2 && clube != 3)
            printf("Codigo invalido. Tente novamente.\n");
        }
        while(clube != 0 && clube != 1 && clube != 2 && clube != 3);

        if(clube != 0)
        {
            printf("Salario: ");
            scanf("%f", &salario);

            if(clube == 1)
            {
                media_gremio += salario;
                gremio++;
            }

            else if(clube == 2)
            {
                media_inter += salario;
                inter++;
            }

            else outro_time++;

            do
            {
                printf("Cidade de origem [0 - Porto Alegre][1 - Outros]: ");
                scanf("%d", &cidade);

                if(cidade != 0 && cidade != 1)
                printf("Codigo invalido. Tente novamente.\n");
            }
            while(cidade != 0 && cidade != 1);

            if(cidade == 1 && clube == 3) poa_nenhum++;

            pessoas++;
        }

        printf("\n\n");
    }
    while(clube != 0);

    media_gremio /= gremio;
    media_inter /= inter;

    printf("\n1) Numero de torcedores por clube\n");
    printf("Gremio: %d\n", gremio);
    printf("Internacional: %d\n", inter);
    printf("Outros: %d\n\n", outro_time);

    printf("2) Media salarial dos torcedores do Gremio e do Internacional\n");
    printf("Media salarial dos torcedores do Gremio: R$ %.2f\n", media_gremio);
    printf("Media salarial dos torcedores do Internacional: R$ %.2f\n\n", media_inter);

    printf("3) Numero de pessoas nascidas em Porto Alegre\nque nao torcem por nenhum dos dois primeiros clubes: %d\n\n", poa_nenhum);

    printf("4) Numero de pessoas entrevistadas: %d\n\n", pessoas);

    return 0;
}
