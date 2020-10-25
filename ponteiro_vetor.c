#include <stdio.h>

int main ()
{
    int vetor[5];
    int i;

    for (i = 0; i < 5; i ++)
    {
        printf ("Leitura com acesso tipo ponteiro %d: ", i);
        scanf ("%d", vetor + i);
    /* Já indica endereço de memória, por isso
    não vai o '&'. */
    }

    printf ("\n");
    printf ("Impressao com acesso tipo ponteiro: \n");

    for (i = 0; i < 5; i++)
        printf ("%d \n", *(vetor + i));

    printf ("\n");
    printf ("Impressao com acesso tipo vetor: \n");

    for (i = 0; i < 5; i ++)
        printf ("%d \n", vetor[i]);

    return 0;
}
