#include <stdio.h>
#define nome 80
#define NOTAS 2
#define FREQ 2

int main()
{
    int a, alunos;

    do
    {
    printf ("Informe o numero de alunos: ");
    scanf (" %d", &alunos);

        if (alunos < 0 || alunos > 40)
            printf ("Valor invalido. Tente novamente.\n");
    }
    while (alunos < 0 || alunos > 40);


    char string[alunos][nome];
    float info[alunos][NOTAS][FREQ];


    for (a = 0; a < alunos; a++)
    {
            printf ("\nInforme o nome do aluno %d: ", a + 1);
            scanf (" %[^\n]", &string[a]);

            do
            {
            printf ("Informe a nota do aluno %d: ", a + 1);
            scanf (" %f", &info[a][1][0]);

                if (info[a][1][0] < 0 || info[a][1][0] > 10)
                    printf ("Valor invalido. Tente novamente.\n");
            }
            while (info[a][1][0] < 0 || info[a][1][0] > 10);


            do
            {
            printf ("Informe a frequencia do aluno %d: ", a + 1);
            scanf (" %f", &info[a][1][1]);

                if  (info[a][1][1] < 0 || info[a][1][1] > 45)
                    printf ("Valor invalido. Tente novamente.\n");
            }
            while (info[a][1][1] < 0 || info[a][1][1] > 45);
    }


    for (a = 0; a < alunos; a++)
    {
        printf ("\nAluno %d: %s\n", a + 1, string[a]);
        printf ("Nota Final: %.2f\n", info[a][1][0]);
        printf ("Frequencia: %.0f\n", info[a][1][1]);

            if (info[a][1][1] < 34)
                printf ("Resultado: FF\n");

                else

                    if (info[a][1][0] >= 8.5)
                        printf ("Resultado: A\n");

                        else

                            if ((info[a][1][0] >= 7.5) && (info[a][1][0] <= 8.4))
                                printf ("Resultado: B\n");

                                else

                                    if ((info[a][1][0] >= 6) && (info[a][1][0] <= 7.4))
                                        printf ("Resultado: C\n");

                                        else
                                            printf ("Resultado: D\n");
    }

    return 0;
}
