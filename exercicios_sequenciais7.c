#include <stdio.h>
/* Calcula a Resistência Equivalente de
três resistores em paralelo. Os valores
dos resistores são lidos pelo programa.

Fórmula da Resistência Equivalente:
1/Re = 1/R1 + 1/R2 + 1/R3 */

int main()
{
    float re, r1, r2, r3;

    printf ("CALCULO DA RESISTENCIA EQUIVALENTE\n\n");

    printf ("R1: ");
    scanf ("%f", &r1);

    printf ("R2: ");
    scanf ("%f", &r2);

    printf ("R3: ");
    scanf ("%f", &r3);

    printf ("\n");

    re = 1 / (1/r1 + 1/r2 + 1/r3);

    printf ("Resistencia Equivalente: %.2f\n", re);

    return 0;
}
