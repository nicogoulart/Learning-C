#include <stdio.h>

int main()
{
    int alunos = 0;
    float nota, soma;

    printf ("Informe a nota do aluno: ");
    scanf ("%f", &nota);

    while (nota <= 10.0)
    {
        alunos ++;
        soma += nota;

        printf ("Informe a nota do aluno: ");
        scanf("%f", &nota);
    }

    printf ("media = %.2f", soma/alunos);

    return 0;
}
