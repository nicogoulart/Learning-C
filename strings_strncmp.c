#include <stdio.h>
#include <string.h>
#define TAM 100

int main()
{
    char string_primeiro[TAM + 1];
    char string_segundo [TAM + 1];

    printf ("Forneca um texto: ");
    fgets (string_primeiro, TAM, stdin);

    printf ("Forneca um texto: ");
    fgets (string_segundo, TAM, stdin);

    printf ("Resultado da comparacao: \n%s%s= %d", string_primeiro, string_segundo, strncmp(string_primeiro, string_segundo, TAM));

    return 0;
}
