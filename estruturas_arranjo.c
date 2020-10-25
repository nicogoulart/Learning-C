#include <stdio.h>
#include <string.h>

#define NOTAS 3

struct aluno
{
    char nome[16];
    float nota[NOTAS];
    float media;
    char conceito;
};

int main()
{
    struct aluno aluno1;
    int i;

    aluno1.media = 0;

    printf ("\nNome: ");
    fgets (aluno1.nome, 15, stdin);

    for (i = 0; i < NOTAS; i++)
    {
        printf ("Nota %d: ", i + 1);
        scanf ("%f", &aluno1.nota[i]);

        while (aluno1.nota[i] < 0 || aluno1.nota[i] > 10)
        {
            printf ("Nota invalida. Tente novamente.");
            printf ("Nota %d: ", i + 1);
            scanf ("%f", &aluno1.nota[i]);
        }

        aluno1.media += aluno1.nota[i];
    }

    aluno1.media = aluno1.media / NOTAS;

    if (aluno1.media >= 9)
        aluno1.conceito = 'A';

        else if (aluno1.media >= 7.5)
            aluno1.conceito = 'B';

            else if (aluno1.media >= 6)
                aluno1.conceito = 'C';

                else aluno1.conceito = 'D';

    printf ("\n\nResultado:\n");

    /* Para não ter que digitar espaços,
    formata string literal. */
    printf ("\n%-15s prova1 prova2 prova3 media conc", "Nome do Aluno");
    printf ("\n%-15s", aluno1.nome);

    for (i = 0; i < NOTAS; i++)
    {
        printf ("%6.2f", aluno1.nota[i]);
    }

    printf ("%6.2f", aluno1.media);
    printf (" %c\n\n", aluno1.conceito);

    return 0;
}
