/** Em uma pesquisa no R.U. perguntou-se a
cada aluno quantas refeições fez no mês anterior.
Faça um programa que leia os dados fornecidos por
m alunos (m fornecido pelo usuário), e retorne:

a) o número de alunos que fez menos de 10 refeições no mês;
b) o número de alunos que fez entre 10 e 20 refeições; e
c) o número de alunos que fez mais de 20 refeições. */

#include <stdio.h>

int main()
{
    int m, cont, ref, menos, medio, mais;

    menos = 0;
    medio = 0;
    mais = 0;

    printf ("QUANTAS REFEICOES NO MES ANTERIOR \n \n");

    printf ("Alunos entrevistados: ");
    scanf ("%d", &m);

    printf ("\n");

    for (cont = 1; cont <= m; cont ++)
    {
        printf ("Aluno %d: ", cont);
        scanf ("%d", &ref);

        if (ref < 10) menos++;
        else if (ref <= 20) medio++;
        else mais++;
    }

    printf ("\n");

    printf ("Numero de alunos que fez menos de 10 refeicoes: %d \n", menos);
    printf ("Numero de alunos que fez entre 10 e 20 refeicoes: %d \n", medio);
    printf ("Numero de alunos que fez mais de 20 refeicoes: %d \n", mais);

    return 0;
}
