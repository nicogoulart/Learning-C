#include <stdio.h>

int main()
{
    int i;

    //Apresenta��o do cabe�alho:
    for (i = 1; i < 20; i++)
        printf ("*");

    printf ("\n");
    printf ("Numeros entre 1 e 5\n");

    for (i = 1; i < 20; i++)
        printf ("*");

    printf ("\n");

    //Escrita dos n�meros:
    for (i = 1; i <= 5; i++)
        printf ("%d\n", i);

    //Apresenta��o do rodap�
    for (i = 1; i < 20; i++)
        printf ("*");

    printf ("\n");

    return 0;
}
