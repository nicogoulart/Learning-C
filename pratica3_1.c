#include <stdio.h>

int main()
{
    int n1, n2, novo_convite;
    int aceito, rejeitado;
    int zero, um, dois;

    aceito = 0;
    rejeitado = 0;

    zero = 0;
    um = 0;
    dois = 0;

    do
    {
        do
        {
            printf ("n1: ");
            scanf ("%d", &n1);

            if (n1 < 0 || n1 > 9)
                printf ("Digitos invalidos. Tente novamente.\n");
        }
        while (n1 < 0 || n1 > 9);

        do
        {
            printf ("n2: ");
            scanf ("%d", &n2);

            if (n2 < 0 || n2 > 9)
                printf ("Digitos invalidos. Tente novamente.\n");
        }
        while (n2 < 0 || n2 > 9);

        if (n1 > 2) rejeitado++;

            else if (n2 < 3) rejeitado++;

                else if ((n1 + n2) % 2 == 0) rejeitado++;

                    else aceito++;
                        if (n1 == 0) zero++;
                        else if (n1 == 1) um++;
                        else dois++;

        do
        {
            printf ("Novo convite? (1 - Sim, 2 - Nao) ");
            scanf (" %d", &novo_convite);

            if (novo_convite != 1 && novo_convite != 2)
                printf ("Opcao invalida. Tente novamente.\n");
        }
        while (novo_convite != 1 && novo_convite != 2);

        printf ("\n");
    }
    while (novo_convite == 1);

    printf ("Convites aceitos: %d\n", aceito);
    printf ("Convites rejeitados: %d\n", rejeitado);

    if (zero > um && zero > dois)
        printf ("O digito 0 (zero) foi quem teve mais convites aceitos.\n");

        else if (um > zero && um > dois)
            printf ("O digito 1 (um) foi quem teve mais convites aceitos.\n");

            else printf ("O digito 2 (dois) foi quem teve mais convites aceitos.\n");

    return 0;
}
