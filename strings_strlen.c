#include <stdio.h>
#include <string.h>
#define TAM 100

int main()
{
    char string_primeiro [TAM + 1], string_segundo [TAM + 1];

    printf ("Forneca um texto: ");
    fgets (string_primeiro, TAM, stdin);

    printf ("Forneca um texto: ");
    fgets (string_segundo, TAM, stdin);

    printf ("%s tem comprimento %d\n", string_primeiro, strlen (string_primeiro));
    printf ("%s tem comprimento %d", string_segundo, strlen (string_segundo));

    return 0;
}
