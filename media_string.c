//Calcula média da turma através de strings.
    /* Entrada: notas de 30 alunos
    Saida: média da turma e notas superiores à média. */

#include <stdio.h>
#define NUMALUNOS 30

int main()
{
    float nota[NUMALUNOS]; //Arranjo para as notas dos alunos.
    float media, soma;
    int aluno; //Variável de controle de repetição (for).

    soma = 0; //Inicializa soma

    for (aluno = 0; aluno < NUMALUNOS; aluno ++)
    //Soma as notas para o cálculo da média para cada aluno.
    {
        printf ("Digite a nota do aluno %d: ", aluno + 1);
        scanf ("%f", &nota[aluno]);
        soma += nota[aluno];
    }

    media = soma / NUMALUNOS;

    printf("Media da turma: %2.2f\n", media);
    printf("Notas acima da media:\n");

    for (aluno = 0; aluno < NUMALUNOS; aluno++)
    //Compara as notas com a média e imprime quando maior.
    {
        if (nota[aluno] > media)
            printf ("Aluno: %d // Nota: %2.2f\n", aluno + 1, nota[aluno]);
    }

    return 0;
}
