#include <stdio.h>
#include <stdlib.h>

#define NLIN 5 //N�mero de linhas da matriz.
#define NCOL 5 //N�mero de colunas da matriz.

/* Esse programa faz a leitura de dados
informados pelo usu�rio para criar uma
matriz, e retorna o maior elemento dessa
matriz e a posi��o desse elemento. */



int main ()
{
    int matriz[NLIN][NCOL], posicao, major, a, b;
    /*
    |matriz| -> a matriz do programa.
    |posicao| -> vari�vel que indica a posi��o do maior elemento.
    |major| -> vari�vel que armazena o maior elemento, resultado
            da fun��o auxiliar "omaior".
    |a & b| -> contadores dos la�os for, utilizados para ler
            os elementos da matriz, informados pelo usu�rio.
    */

    printf ("MAIOR ELEMENTO DA MATRIZ E A SUA POSICAO!\n\n");
    //T�tulo do programa, por raz�es est�ticas.


    /* Os la�os for aninhados abaixo servem para ler
    os elementos da matriz, informados pelo usu�rio. */
    for (a = 0; a < NLIN; a ++)
    {
        for (b = 0; b < NCOL; b ++)
        {
            printf ("Elemento da linha %d e coluna %d: ", a, b);
            scanf ("%d", &matriz[a][b]);
        }

        printf ("\n");
        /* Entre cada final de coluna, imprimi uma
        quebra de par�grafo. */
    }

    major = omaior (matriz, &posicao);
    /* Executa a fun��o auxiliar para
    encontrar o maior elemento da matriz. */

    printf ("O maior elemento da matriz: %d\n", major);
    printf ("A posicao do maior elemento (endereco relativo): %d\n", posicao);
    printf ("Linha da posicao do maior elemento: %d\n", posicao / NCOL);
    printf ("Coluna da posicao do maior elemento: %d\n\n", posicao % NCOL);
    /* Imprimi o maior elemento da matriz, a sua posi��o relativa
    e a linha e coluna da posi��o. */

    return 0;
}



int omaior (int matriz[NLIN][NCOL], int* pos)
{
    int maior, c, d;
    /*
    |maior| -> vari�vel que ir� guardar o maior elemento
            da matriz e retornar para a fun��o principal.
    |*pos| -> ponteiro que recebe o endere�o da vari�vel
            "posicao" da fun��o principal, e que ir� guardar
            a posi��o relativa do maior elemento.
    |c & d| -> contadores dos la�os for, utilizados para
            comparar os elementos da matriz e encontrar
            o maior entre todos.
    */

    maior = matriz[0][0];
    /* Inicia a vari�vel "maior" com o primeiro
    elemento da matriz. */

    *pos = 0; //Inicia o ponteiro com o valor zero.

    /* Os la�os for aninhados abaixo servem para
    encontrar o maior elemento da matriz e a sua
    posi��o. */
    for (c = 0; c < NLIN; c ++)
    {
        for (d = 0; d < NCOL; d ++)
        {
            if (matriz[c][d] > maior)
            {
                maior = matriz[c][d];
                *pos = c * NCOL + d;
                /* Se o elemento da matriz for maior que
                o valor anterior da vari�vel "maior", adiciona
                esse elemento como o novo valor da vari�vel
                "maior" e guarda a sua posi��o no ponteiro. */
            }
        }
    }

    return maior;
}
