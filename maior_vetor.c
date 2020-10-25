#include <stdio.h>
#define NUM 5

int omaior (int vetor[NUM], int* posicao)
{
    int i, maior = vetor[0];

    *posicao = 0;

    for (i = 1; i < NUM; i ++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            *posicao = i;
        }
    }

    return maior;
}


int main ()
{
    int vetor[NUM], i, major, pos, x;

    for (i = 0; i < NUM; i ++)
    {
        printf ("Elemento do vetor %d: ", i);
        scanf ("%d", &vetor[i]);
    }

    major = omaior (vetor, &pos);

    printf ("\nO maior elemento: %d \n", major);
    printf ("Posicao do maior elemento: %d \n", pos);

    return 0;
}
