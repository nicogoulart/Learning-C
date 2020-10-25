#include <stdio.h>

struct aluno
{
    char escola[18];
    char nome[15];
    char sexo;
    int idade;
};


int main()
{
    struct aluno aluno1;

    aluno1 = le_dados_aluno();
    imprime_dados_aluno(aluno1);

    return 0;
}


struct aluno le_dados_aluno()
{
    struct aluno aluno1;

    printf ("Escola: ");
    fgets (aluno1.escola, 18, stdin);

    printf ("Nome: ");
    fgets (aluno1.nome, 15, stdin);

    printf ("Sexo: ");
    scanf ("%c", &aluno1.sexo);

    printf ("Idade: ");
    scanf ("%d", &aluno1.idade);

    return aluno;
}


void imprime_dados_aluno(struct aluno aluno1)
{
    printf ("\n\nRESULTADO\n");
    printf ("Escola: %s", &aluno1.escola);
    printf ("Nome: %s", &aluno1.nome);
    printf ("Sexo: %c", &aluno1.sexo);
    printf ("Idade: %d", &aluno1.idade);
}
