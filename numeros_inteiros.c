#include <stdio.h>

int main()
{
    int i;

    //Apresentação do cabeçalho:
    for (i = 1; i < 20; i++)
        printf ("*");

    printf ("\n");
    printf ("Numeros entre 1 e 5\n");

    for (i = 1; i < 20; i++)
        printf ("*");

    printf ("\n");

    //Escrita dos números:
    for (i = 1; i <= 5; i++)
        printf ("%d\n", i);

    //Apresentação do rodapé
    for (i = 1; i < 20; i++)
        printf ("*");

    printf ("\n");

    return 0;
}
