//Escrita de números inteiros
#include <stdio.h>

//Preenche linha com asteriscos
void escreve_asteriscos ()
{
    int i;

    for (i = 0; i < 20; i++)
        printf ("*");

    printf ("\n");
}

void escreve_numeros_1_a_5()
{
    int i;

    for (i = 1; i <= 5; i++)
        printf ("%d\n", i);
}

int main()
{
    escreve_asteriscos();

    printf ("Numeros entre 1 e 5\n");

    escreve_asteriscos();
    escreve_numeros_1_a_5();
    escreve_asteriscos();

    return 0;
}
