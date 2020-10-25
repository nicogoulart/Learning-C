#include <stdio.h>
#include <string.h>
#define TAM 100

int main()
{
    char string_origem[TAM];
    char string_destino[TAM] = "O rato roeu ";

    printf ("Forneca um texto: ");
    fgets (string_origem, TAM, stdin);

    strncat (string_destino, string_origem, TAM);
    printf ("String: %s", string_destino);

    return 0;
}
