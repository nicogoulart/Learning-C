/* Indicação dos alunos com nota menor do
que a média da turma.

Entradas: Número de alunos da turma, código
e nota dos alunos.

Saída: Impressão dos números e notas dos
alunos com nota menor que a média. */

#include <stdio.h>
#define MAXTURMA 60

int main()
{
    int numero[MAXTURMA];
    float nota[MAXTURMA];
    int tam_turma, ind;
    float media = 0;

    do
    {
        printf ("Digite o numero de alunos na turma: ");
        scanf ("%d", &tam_turma);

        if (tam_turma < 1 || tam_turma > 60)
            printf ("Valor invalido. Tente novamente.");
    }
    while (tam_turma < 1 || tam_turma > 60);

    for (ind = 0; ind < tam_turma; ind ++)
    //leitura dos dados
    {
        printf ("Digite o codigo do aluno %d: ", ind + 1);
        scanf ("%d", &numero[ind]);
        printf ("Digite a nota do aluno %d: ", ind + 1);
        scanf ("%f", &nota[ind]);
        media += nota[ind];
    }

    media = media / tam_turma;

    printf ("Media da turma: %0.2f\n", media);
    printf ("Alunos abaixo da media:\n");

    for (ind = 0; ind < tam_turma; ind++)
    //Verificação das notas.
    {
        if (nota[ind] < media)
            printf ("Aluno %d com nota %0.2f\n", numero[ind], nota[ind]);
    }

    return 0;
}
