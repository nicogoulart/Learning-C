#include <stdio.h>

int main()
{
    int d1, d2, convite, novo_convite, aceito, recusado, dancou;
    int c0, c1, c2, c3, c4, c5, c6, c7, c8, c9;

    convite = 0;
    aceito = 0;
    recusado = 0;

    c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;

    do
    {
        printf ("Digite o convite (d1 e d2): ");
        scanf (" %d %d", &d1, &d2);

        if ( (d1 >= 0 && d1 <=2) && (d2 >= 3 && d2 <= 9) )
        {
            if ( ((d1 + d2) % 2) == 0)
            {
                printf ("O convite foi recusado!\n");
                recusado ++;
                convite ++;
            }
            else
            {
                printf ("O convite foi aceito!\n");
                aceito ++;
                convite ++;

                switch (d1)
                {
                   case 0: c0 ++;
                   break;
                   case 1: c1 ++;
                   break;
                   case 2: c2 ++;
                }

                switch (d2)
                {
                    case 3: c3 ++;
                    break;
                    case 4: c4 ++;
                    break;
                    case 5: c5 ++;
                    break;
                    case 6: c6 ++;
                    break;
                    case 7: c7 ++;
                    break;
                    case 8: c8 ++;
                    break;
                    case 9: c9 ++;
                }
            }
        }

            else
            {
                printf ("O convite foi recusado!\n");
                recusado ++;
                convite ++;
            }

            do
            {
            printf ("Novo convite (1-sim, 2-nao)? ");
            scanf (" %d", &novo_convite);

                if (novo_convite != 1 && novo_convite != 2)
                printf ("Opcao invalida. Tente novamente.\n");
            }
            while (novo_convite != 1 && novo_convite != 2);
    }
    while (novo_convite == 1);

    if ( (c0 >= c1) && (c0 >= c2) && (c0 >= c3) && (c0 >= c4) && (c0 >= c5) && (c0 >= c6) && (c0 >= c7) && (c0 >= c8) && (c0 >= c9) )
    dancou = 0;

    if ( (c1 >= c0) && (c1 >= c2) && (c1 >= c3) && (c1 >= c4) && (c1 >= c5) && (c1 >= c6) && (c1 >= c7) && (c1 >= c8) && (c1 >= c9) )
    dancou = 1;

    if ( (c2 >= c0) && (c2 >= c1) && (c2 >= c3) && (c2 >= c4) && (c2 >= c5) && (c2 >= c6) && (c2 >= c7) && (c2 >= c8) && (c2 >= c9) )
    dancou = 2;

    if ( (c3 >= c0) && (c3 >= c1) && (c3 >= c2) && (c3 >= c4) && (c3 >= c5) && (c3 >= c6) && (c3 >= c7) && (c3 >= c8) && (c3 >= c9) )
    dancou = 3;

    if ( (c4 >= c0) && (c4 >= c1) && (c4 >= c2) && (c4 >= c3) && (c4 >= c5) && (c4 >= c6) && (c4 >= c7) && (c4 >= c8) && (c4 >= c9) )
    dancou = 4;

    if ( (c5 >= c0) && (c5 >= c1) && (c5 >= c2) && (c5 >= c3) && (c5 >= c4) && (c5 >= c6) && (c5 >= c7) && (c5 >= c8) && (c5 >= c9) )
    dancou = 5;

    if ( (c6 >= c0) && (c6 >= c1) && (c6 >= c2) && (c6 >= c3) && (c6 >= c4) && (c6 >= c5) && (c6 >= c7) && (c6 >= c8) && (c6 >= c9) )
    dancou = 6;

    if ( (c7 >= c0) && (c7 >= c1) && (c7 >= c2) && (c7 >= c3) && (c7 >= c4) && (c7 >= c5) && (c7 >= c6) && (c7 >= c8) && (c7 >= c9) )
    dancou = 7;

    if ( (c8 >= c0) && (c8 >= c1) && (c8 >= c2) && (c8 >= c3) && (c8 >= c4) && (c8 >= c5) && (c8 >= c6) && (c8 >= c7) && (c8 >= c9) )
    dancou = 8;

    if ( (c9 >= c0) && (c9 >= c1) && (c9 >= c2) && (c9 >= c3) && (c9 >= c4) && (c9 >= c5) && (c9 >= c6) && (c9 >= c7) && (c9 >= c8) )
    dancou = 9;

    printf ("Numero de convites: %d\n", convite);
    printf ("Numero de convites aceitos: %d\n", aceito);
    printf ("Numero de convites recusados: %d\n", recusado);
    printf ("O digito que mais dancou: %d\n", dancou);

    return 0;
}
