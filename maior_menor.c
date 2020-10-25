#include <stdio.h>
#define PESSOAS 10

int main()
{
    int a;
    float altura[PESSOAS], soma, media;

    soma = 0;

    for (a = 0; a < PESSOAS; a++)
    {
        printf ("Informe a altura da pessoa %d: ", a + 1);
        scanf ("%f", &altura[a]);

        soma += altura[a];
    }

    media = soma / PESSOAS;

    printf ("\nMedia = %f\n", media);

    printf ("\nPessoas maiores do que a media:\n");
    for (a = 0; a < PESSOAS; a++)
    {
        if (altura[a] > media)
            printf ("Pessoa %d\n", a + 1);
    }

    printf ("\nPessoas menores do que a media:\n");
    for (a = 0; a < PESSOAS; a++)
    {
        if (altura[a] < media)
            printf ("Pessoa %d\n", a + 1);
    }

    return 0;
}
