#include <stdio.h>
#define NUM 50

int main()
{
    int a, cont, character;
    char string[NUM];

    a = 0;
    cont = 0;
    character = 0;

    fflush (stdin);
    printf ("Escreva a sua string: ");
    fgets (string, NUM, stdin);

    while (string[a] != '\0' && string[a] != '\n')
    {
        character ++;
        a ++;
    }

    for (a = 0; a < NUM; a++)
    {
        if (string[a] == 'r')
        {
            string[a] = 'l';
            cont ++;
        }

            else if (string[a] == 'R')
            {
                string[a] = 'L';
                cont ++;
            }
    }

    printf ("Essa e a string do Cebolinha: %s", string);
    printf ("Numero de letras trocadas: %d\n", cont);
    printf ("Total de letras na frase: %d\n", character);

    return 0;
}
