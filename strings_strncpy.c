#include <stdio.h>
#include <string.h>
#define TAM 100

int main ()
{
    char string_origem[TAM], string_destino[TAM];

    printf ("Forneca um nome: ");
    fgets (string_origem, TAM, stdin);

    strncpy (string_destino, string_origem, TAM);

    printf ("String copiada: %s", string_destino);

    return 0;
}
