#include <stdio.h>
#include <math.h>

#define NOTAS 3
#define ALUNOS 30

typedef struct aluno
{
    char nome[16];
    float nota[NOTAS];
    float media;
    char conceito;
} aluno;

void le_dados_alunos (aluno* alunos, int tam)
{
    int i, j;

    for (j = 0; j < tam; j++)
        printf ("\nAluno %d: ", j + 1);

    printf ("\n Nome: ");
    fgets (alunos[j].nome, 15, stdin);

    alunos[j].media = 0;

    printf ("Digite as %d notas: ", NOTAS);
}


