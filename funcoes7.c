#include <stdio.h>

float inv(float x)
{
    return 1/x;
}

int main()
{
    float x;

    printf ("Informe x: ");
    scanf ("%f", &x);

    if (inv(x) > 1)
        printf ("%.2f pequeno.\n", x);

        else
            printf ("%.2f grande.\n", x);

    printf ("(1/%.2f = %.2f)\n", x, inv(x));

    return 0;
}
