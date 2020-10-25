//Insertion Sort v1 p/ vetor com X elementos.

#include <stdio.h>
#define TAM 100

int main()
{
    int i, j; //Variáveis de controle de iteração.
    int atual; //Variável de controle de troca.
    int vetor[TAM]; //Vetor que será organizado.

    //Leitura dos dados
    for (i = 0; i < TAM; i++)
    {
        printf ("Vetor[i]: ", i);
        scanf ("%d", & vetor[i]);
    }

    printf ("\nVETOR ORIGINAL:\n");
    for (i = 0; i < TAM; i++)
    {
        printf ("vetor[%d] = %d", i, vetor[i]);
    }

    for (i = 1; i < TAM; i++)
    {
        atual = vetor[i];
        j = i - 1;

        while ((j >= 0) && (atual < vetor[j]))
        {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }

        vetor[j + 1] = atual;
    }

    printf ("VETOR ORGANIZADO:\n");
    for (i = 0; i < TAM; i++)
    {
        printf ("vetor[%d] = %d", i, vetor[i]);
    }

    return 0;
}
