#include <stdio.h>
/* Dados tr�s valores, calcular a
m�dia aritm�tica e harm�nica desses
tr�s valores.

F�rmula da M�dia Harm�nica:
3 / (1/a + 1/b + 1/c) */
int main()
{
    float a, b, c, ma, mh;

    printf ("MEDIA ARITMETICA E HARMONICA (DE TRES VALORES)\n\n");

    printf ("Informe o valor a: ");
    scanf ("%f", &a);

    printf ("Informe o valor b: ");
    scanf ("%f", &b);

    printf ("Informe o valor c: ");
    scanf ("%f", &c);

    printf ("\n");

    ma = (a + b + c) / 3;
    mh = 3 / (1/a + 1/b + 1/c);

    printf ("Media Aritmetica: %.2f\n", ma);
    printf ("Media Harmonica: %.2f\n", mh);

    return 0;
}
