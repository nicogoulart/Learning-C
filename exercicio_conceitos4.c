/* Processa notas de uma turma.
Entradas: 5 notas para cada um dos 10 alunos.
Saída: média da 1ª nota da turma, informar
quantos alunos tiveram nota acima dessa média. */

#include <stdio.h>
#define ALUNOS 10
#define NOTAS 5

int main()
{
    float notas [ALUNOS][NOTAS];
    int a, n;
    int cont;
    float soma, media;

    for (a = 0; a < ALUNOS; a++)
    {
        printf ("Notas do aluno %d: ", a + 1);

        for (n = 0; n < NOTAS; n ++)
            scanf ("%f", &notas[a][n]);
    }

    soma = 0;

    for (a = 0; a < ALUNOS; a ++)
        soma = soma + notas[a][0];

    media = soma / ALUNOS;

    printf ("Media 1a. nota: %2.2f\n", media);

    cont = 0;
    for (a = 0; a < ALUNOS; a++)
        /*Conta quantos alunos tem
        1a. nota > media da primeira nota. */
        if (notas[a][0] > media)
            cont ++;

    printf ("Numero de alunos com 1a. nota maior do que a media: %d", cont);

    return 0;
}
