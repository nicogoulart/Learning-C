//testa função fgets

#include <stdio.h>
#define TAMANHO 30

int main()
{
    int seguir;
    char name[TAMANHO + 1];

    seguir = 1;

    while (seguir)
    {
        puts ("Nome:");
        fgets (name, TAMANHO, stdin);

        if (name[0] == '\n')
            //para quando sem conteúdo - enter direto
            seguir = 0;

            else
                printf ("Nome Informado: %s", name);
    }

    return 0;
}
