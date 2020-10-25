#include <stdio.h>

int main()
{
    int moeda;

    printf ("Informe a moeda: ");
    scanf ("%d", &moeda);

    while (moeda != 0 && moeda != 1)
    {
        printf ("Valor invalido. Tente novamente.\n\n");

        printf ("Informe a moeda: ");
        scanf ("%d", &moeda);
    }

    if (moeda == 0) printf ("Cara.\n");

        else printf ("Coroa.\n");
}
