#include <stdio.h>

//Implementação
void escreve_linha (int n, char c)
{
    int i;

    for (i = 1; i <= n; i++)
        printf ("%c", c);

    printf ("\n");
}

int main ()
{
    int i;

    //Apresentação do cabeçalho
    escreve_linha(20,'#');

    printf ("Numeros entre 1 e 5\n");

    escreve_linha(10, '-');

    printf ("\n");

    //Escrita dos números

    for (i = 1; i <= 5; i++)
    {
        printf ("%d: ", i);
        escreve_linha (i, '*');
    }

    escreve_linha (20, '#');

    printf ("\n");

    return 0;
}
