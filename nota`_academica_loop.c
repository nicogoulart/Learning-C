#include <stdio.h>

int main()
{
    int contador, aluno;
    float media;

    for (contador = 1; contador <= 5; contador ++)
    {
        printf ("Informe o numero e nota do aluno %d: ", contador);
        scanf ("%d %f", &aluno, &media);

        if (media < 6)
            printf ("Aluno %d reprovado.\n", aluno);

        else
            printf ("Aluno %d aprovado!\n", aluno);
    }

    return 0;
}
