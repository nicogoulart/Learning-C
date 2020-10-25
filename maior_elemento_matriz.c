#include <stdio.h>
#include <stdlib.h>

#define NLIN 5 //Número de linhas da matriz.
#define NCOL 5 //Número de colunas da matriz.

/* Esse programa faz a leitura de dados
informados pelo usuário para criar uma
matriz, e retorna o maior elemento dessa
matriz e a posição desse elemento. */



int main ()
{
    int matriz[NLIN][NCOL], posicao, major, a, b;
    /*
    |matriz| -> a matriz do programa.
    |posicao| -> variável que indica a posição do maior elemento.
    |major| -> variável que armazena o maior elemento, resultado
            da função auxiliar "omaior".
    |a & b| -> contadores dos laços for, utilizados para ler
            os elementos da matriz, informados pelo usuário.
    */

    printf ("MAIOR ELEMENTO DA MATRIZ E A SUA POSICAO!\n\n");
    //Título do programa, por razões estéticas.


    /* Os laços for aninhados abaixo servem para ler
    os elementos da matriz, informados pelo usuário. */
    for (a = 0; a < NLIN; a ++)
    {
        for (b = 0; b < NCOL; b ++)
        {
            printf ("Elemento da linha %d e coluna %d: ", a, b);
            scanf ("%d", &matriz[a][b]);
        }

        printf ("\n");
        /* Entre cada final de coluna, imprimi uma
        quebra de parágrafo. */
    }

    major = omaior (matriz, &posicao);
    /* Executa a função auxiliar para
    encontrar o maior elemento da matriz. */

    printf ("O maior elemento da matriz: %d\n", major);
    printf ("A posicao do maior elemento (endereco relativo): %d\n", posicao);
    printf ("Linha da posicao do maior elemento: %d\n", posicao / NCOL);
    printf ("Coluna da posicao do maior elemento: %d\n\n", posicao % NCOL);
    /* Imprimi o maior elemento da matriz, a sua posição relativa
    e a linha e coluna da posição. */

    return 0;
}



int omaior (int matriz[NLIN][NCOL], int* pos)
{
    int maior, c, d;
    /*
    |maior| -> variável que irá guardar o maior elemento
            da matriz e retornar para a função principal.
    |*pos| -> ponteiro que recebe o endereço da variável
            "posicao" da função principal, e que irá guardar
            a posição relativa do maior elemento.
    |c & d| -> contadores dos laços for, utilizados para
            comparar os elementos da matriz e encontrar
            o maior entre todos.
    */

    maior = matriz[0][0];
    /* Inicia a variável "maior" com o primeiro
    elemento da matriz. */

    *pos = 0; //Inicia o ponteiro com o valor zero.

    /* Os laços for aninhados abaixo servem para
    encontrar o maior elemento da matriz e a sua
    posição. */
    for (c = 0; c < NLIN; c ++)
    {
        for (d = 0; d < NCOL; d ++)
        {
            if (matriz[c][d] > maior)
            {
                maior = matriz[c][d];
                *pos = c * NCOL + d;
                /* Se o elemento da matriz for maior que
                o valor anterior da variável "maior", adiciona
                esse elemento como o novo valor da variável
                "maior" e guarda a sua posição no ponteiro. */
            }
        }
    }

    return maior;
}
