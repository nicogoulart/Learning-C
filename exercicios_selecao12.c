#include <stdio.h>
/* Leia e apresente 4 valores inteiros, na ordem de leitura e em ordem decrescente (a ordem
inicial de fornecimento dos valores não deverá ser decrescente). */

int main()
{
    int n1, n2, n3, n4;

    printf ("n1: ");
    scanf ("%d", &n1);

    printf ("n2: ");
    scanf ("%d", &n2);

    printf ("n3: ");
    scanf ("%d", &n3);

    printf ("n4: ");
    scanf ("%d", &n4);

    printf ("\n");
    printf ("ORDEM DECRESCENTE: \n");

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf ("n1: %d / ", n1);

        if (n2 > n3 && n2 > n4)
        {
            printf ("n2: %d / ", n2);

            if (n3 > n4)
            printf ("n3: %d / n4: %d \n", n3, n4);

            else printf ("n4: %d / n3: %d \n", n4, n3);
        }

        else if (n3 > n2 && n3 > n4)
        {
            printf ("n3: %d / ", n3);

            if (n2 > n4)
            printf ("n2: %d / n4: %d \n", n2, n4);

            else printf ("n4: %d / n2: %d \n", n4, n2);
        }

        else
        {
            printf ("n4: %d / ", n4);

            if (n2 > n3)
            printf ("n2: %d / n3: %d \n", n2, n3);

            else printf ("n3: %d / n2: %d \n", n3, n2);
        }
    }


    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf ("n2: %d / ", n2);

        if (n1 > n3 && n1 > n4)
        {
            printf ("n1: %d / ", n1);

            if (n3 > n4)
            printf ("n3: %d / n4: %d \n", n3, n4);

            else printf ("n4: %d / n3: %d \n", n4, n3);
        }

        else if (n3 > n1 && n3 > n4)
        {
            printf ("n3: %d / ", n3);

            if (n1 > n4)
            printf ("n1: %d / n4: %d \n", n1, n4);

            else printf ("n4: %d / n1: %d \n", n4, n1);
        }

        else
        {
            printf ("n4: %d / ", n4);

            if (n1 > n3)
            printf ("n1: %d / n3: %d \n", n1, n3);

            else printf ("n3: %d / n1: %d \n", n3, n1);
        }
    }


    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf ("n3: %d / ", n3);

        if (n1 > n2 && n1 > n4)
        {
            printf ("n1: %d / ", n1);

            if (n2 > n4)
            printf ("n2: %d / n4: %d \n", n2, n4);

            else printf ("n4: %d / n2: %d \n", n4, n2);
        }

        else if (n2 > n1 && n2 > n4)
        {
            printf ("n2: %d / ", n2);

            if (n1 > n4)
            printf ("n1: %d / n4: %d \n", n1, n4);

            else printf ("n4: %d / n1: %d \n", n4, n1);
        }

        else
        {
            printf ("n4: %d / ", n4);

            if (n1 > n2)
            printf ("n1: %d / n2: %d \n", n1, n2);

            else printf ("n2: %d / n1: %d \n", n2, n1);
        }
    }


    else
    {
        printf ("n4: %d / ", n4);

        if (n1 > n2 && n1 > n3)
        {
            printf ("n1: %d / ", n1);

            if (n2 > n3)
            printf ("n2: %d / n3: %d \n", n2, n3);

            else printf ("n3: %d / n2: %d \n", n3, n2);
        }

        else if (n2 > n1 && n2 > n3)
        {
            printf ("n2: %d / ", n2);

            if (n1 > n3)
            printf ("n1: %d / n3: %d \n", n1, n3);

            else printf ("n3: %d / n1: %d \n", n3, n1);
        }

        else
        {
            printf ("n3: %d / ", n3);

            if (n1 > n2)
            printf ("n1: %d / n2: %d \n", n1, n2);

            else printf ("n2: %d / n1: %d \n", n2, n1);
        }
    }

    return 0;
}
