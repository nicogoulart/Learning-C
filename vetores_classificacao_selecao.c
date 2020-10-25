//Selection Sort v1 p/ vetor com 10 elementos.

#include <stdio.h>
#define TAM 10

int main()
{
    int i, j; //variáveis de controle de iteração
    int aux, pos_menor; //variáveis de controle de troca
    int vetor [TAM];

    for (i = 0; i < TAM; i ++)
        //leitura dos dados
        printf ("Digite o valor %d: ", i + 1);
        scanf ("%d", &vetor[i]);

    for (i = 0; i < (TAM - 1); i ++)
    {
        pos_menor = i;

        for (j = (i + 1); j < TAM; j++)
        {
            if (vetor[j] < vetor[pos_menor])
                pos_menor = j;
        }

        if (i != pos_menor)
        // Faz a troca se elemento não está ordenado.
        {
            aux = vetor[i];
            vetor[i] = vetor[pos_menor];
            vetor[pos_menor] = aux;
        }
    }

    //incluir for para imprimir vetor
    return 0;
}
