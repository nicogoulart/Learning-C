#include <stdio.h>
#include <string.h>



struct endereco
{
    char rua[50];
    int numero;
    char bairro[20];
    char cidade[30];
    char sigla_estado[3]; //2 letras + '\0'
    char cep[10];
};

struct ficha
{
    char nome[50];
    char telefone[16];
    struct endereco end;
};



int main()
{
    struct ficha ficha1;

    printf ("\nINFORME OS SEUS DADOS ABAIXO\n\n");

    printf ("Nome: ");
    fgets (ficha1.nome, 50, stdin);

    printf ("Telefone: ");
    fgets (ficha1.telefone, 16, stdin);

    printf ("Rua: ");
    fgets (ficha1.end.rua, 50, stdin);

    printf ("Numero: ");
    scanf (" %d", &ficha1.end.numero);

    fflush(stdin);

    printf ("Bairro: ");
    fgets (ficha1.end.bairro, 20, stdin);

    printf ("Cidade: ");
    fgets (ficha1.end.cidade, 30, stdin);

    printf ("Sigla do Estado: ");
    fgets (ficha1.end.sigla_estado, 3, stdin);

    fflush(stdin);

    printf ("CEP: ");
    fgets (ficha1.end.cep, 10, stdin);


    printf ("\nIMPRESSAO DOS VALORES INFORMADOS\n\n");

    printf ("Nome: %s", ficha1.nome);
    printf ("Telefone: %s", ficha1.telefone);
    printf ("Rua: %s", ficha1.end.rua);
    printf ("Numero: %d\n", ficha1.end.numero);
    printf ("Bairro: %s", ficha1.end.bairro);
    printf ("Cidade: %s", ficha1.end.cidade);
    printf ("Sigla do Estado: %s\n", ficha1.end.sigla_estado);
    printf ("CEP: %s", ficha1.end.cep);

    return 0;
}
