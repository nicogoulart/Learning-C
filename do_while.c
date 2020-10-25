#include <stdio.h>

int main ()
{
    int alunos = 0;
    float nota, soma = 0;

    do
    {
        scanf ("%f", &nota);

        if (nota <= 10.0)
        {
            alunos ++;
            soma += nota;
        }

    }
    while (nota <= 10.0);

    printf ("media = %f", soma/alunos);

    return 0;
}
