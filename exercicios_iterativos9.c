/* Um total de N alunos de uma universidade
foram entrevistados. De cada um deles foram colhidas as
seguintes informa��es: o c�digo do curso que freq�enta
(E - Engenharia; C - Computa��o; A - Administra��o) e a idade.

Fa�a um programa que processe esses dados e que forne�a
as seguintes informa��es:

a) n�mero de alunos por curso;
b) n�mero de alunos com idade entre 20 e 25 anos, por curso;
c) qual o curso com menor m�dia de idade. */

#include <stdio.h>
#include <ctype.h>

int main()
{
    int alunos, a, c, e, idade, cont;
    int jovem_a, jovem_c, jovem_e;
    float media_a, media_c, media_e;
    char cod;

    a = 0;
    c = 0;
    e = 0;

    jovem_a = 0;
    jovem_c = 0;
    jovem_e = 0;

    media_a = 0;
    media_c = 0;
    media_e = 0;

    printf("Alunos: ");
    scanf("%d", &alunos);

    printf("\n");

    for(cont = 0; cont < alunos; cont++)
    {
        do
        {
            fflush(stdin);
            printf("Codigo %d: ", cont + 1);
            scanf("%c", &cod);

            cod = toupper(cod);

            if(cod != 'A' && cod != 'C' && cod != 'E')
            printf("Codigo invalido. Tente novamente.\n\n");
        }
        while(cod != 'A' && cod != 'C' && cod != 'E');

        printf("Idade %d: ", cont + 1);
        scanf("%d", &idade);

        if(cod == 'A')
        {
            a ++;
            media_a += idade;

            if(idade >= 20 && idade <= 25)
            jovem_a ++;
        }

        else if(cod == 'C')
        {
            c ++;
            media_c += idade;

            if(idade >= 20 && idade <= 25)
            jovem_c ++;
        }

        else
        {
            e ++;
            media_e += idade;

            if(idade >= 20 && idade <= 25)
            jovem_e ++;
        }

        printf("\n");
    }

    media_a /= a;
    media_c /= c;
    media_e /= e;

    printf("Administracao: %d alunos, %d jovens.\n", a, jovem_a);
    printf("Computacao: %d alunos, %d jovens.\n", c, jovem_c);
    printf("Engenharia: %d alunos, %d jovens.\n\n", e, jovem_e);

    //MEDIA A � a menor m�dia.
    if(media_a < media_c && media_a < media_e)
    printf("Administracao e o curso com menor media de idades.\n");

    //MEDIA C � a menor m�dia.
    else if(media_c < media_a && media_c < media_e)
    printf("Computacao e o curso com menor media de idades.\n");

    //MEDIA E � a menor m�dia.
    else if(media_e < media_a && media_e < media_c)
    printf("Engenharia e o curso com menor media de idades.\n");

    //MEDIA A & MEDIA C s�o as menores m�dias.
    else if(media_a == media_c && media_a < media_e)
    printf("Administracao e Computacao sao os cursos com menores medias de idades.\n");

    //MEDIA A & MEDIA E s�o as menores m�dias.
    else if(media_a == media_e && media_a < media_c)
    printf("Administracao e Engenharia sao os cursos com menores medias de idades.\n");

    //MEDIA C & MEDIA E s�o as menores m�dias.
    else if(media_c == media_e && media_c < media_a)
    printf("Computacao e Engenharia sao os cursos com menores medias de idades.\n");

    //Todas as m�dias s�o iguais.
    else printf("As medias de idades sao iguais para todos os cursos.\n");

    return 0;
}
