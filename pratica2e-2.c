#include <stdio.h>
#include <math.h>

int main()
{
    int i, d, n;
    float x, montante;

    printf ("Quantia inicial: ");
    scanf ("%f", &x);

    printf ("Percentual: ");
    scanf ("%d", &i);

    printf ("Dias da aplicacao: ");
    scanf ("%d", &d);

    printf ("\n");

    n = d / 30;
    montante = x * pow((1 + (((float)i)/100)), ((float)n));

    printf ("Montante final da aplicacao: R$ %.2f\n", montante);

    return 0;
}
