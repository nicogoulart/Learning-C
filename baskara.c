#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void baskara (float, float, float, float*, float*);

int main ()
{
    float a, b, c, x1, x2;

    printf ("Informe o valor de a: ", a);
    scanf ("%f", &a);

    printf ("Informe o valor de b: ", b);
    scanf ("%f", &b);

    printf ("Informe o valor de c: ", c);
    scanf ("%f", &c);

    baskara (a, b, c, &x1, &x2);

    return 0;
}

void baskara (float a, float b, float c, float* x1, float* x2)
{
    *x1 = ( (- b) + (sqrt ( (pow (b, 2)) - (4 * a * c)) ) ) / (a * 2);
    *x2 = ( (- b) - (sqrt ( (pow (b, 2)) - (4 * a * c)) ) ) / (a * 2);

    printf ("\n\n RESULTADO DA FORMULA DE BASKARA: \n\n");
    printf ("x1 = %.2f \n", *x1);
    printf ("x2 = %.2f \n", *x2);
}
