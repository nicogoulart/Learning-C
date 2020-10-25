#include <stdio.h>
#define ALUNOS 40
#define NOME 80

int main()
{
    int i, numero, freq[ALUNOS];
    float notas[ALUNOS];
    char nomes[ALUNOS][NOME];

    do
    {
        printf ("INFORME O NUMERO DE ALUNOS: ");
        scanf ("%d", &numero);

        if (numero < 0 || numero > ALUNOS)
            printf ("Numero invalido. Tente novamente.\n\n");
    }
    while (numero < 0 || numero > ALUNOS);

    printf ("\n");
    printf ("INFORME OS DADOS DOS ALUNOS:\n");

    for (i = 0; i < numero; i++)
    {
        fflush (stdin);

        printf ("Nome do aluno %d: ", i + 1);
        fgets (nomes[i], NOME, stdin);

        do
        {
            printf ("Nota do aluno %d: ", i + 1);
            scanf ("%f", &notas[i]);

            if (notas[i] < 0 || notas[i] > 10)
                printf ("Numero invalido. Tente novamente.\n");
        }
        while (notas[i] < 0 || notas[i] > 10);

        do
        {
            printf ("Frequencia do aluno %d: ", i + 1);
            scanf ("%d", &freq[i]);

            if (freq[i] < 0 || freq[i] > 45)
                printf ("Numero invalido. Tente novamente.\n");
        }
        while (freq[i] < 0 || freq[i] > 45);

        printf ("\n");
    }

    printf ("\n");
    printf ("BOLETIM DA TURMA:\n");

    for (i = 0; i < numero; i++)
    {
        fflush (stdin);

        printf ("ALUNO %d\n", i + 1);
        printf ("Nome: %s", nomes[i]);
        printf ("Nota: %.2f\n", notas[i]);
        printf ("Frequencia: %d\n", freq[i]);

        if (freq[i] < 33)
            printf ("Conceito: FF\n");

            else if (notas[i] >= 8.5)
                printf ("Conceito: A\n");


                else if (notas[i] >= 7.5)
                    printf ("Conceito: B\n");


                    else if (notas[i] >= 6)
                        printf ("Conceito: C\n");


                        else printf ("Conceito: D\n");

        printf ("\n");
    }

    return 0;
}
