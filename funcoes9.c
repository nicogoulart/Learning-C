#include <stdio.h>
#include <math.h>

float dobro(float x)
{
    return 2*x;
}

float dobro_pi()
{
    return dobro(M_PI);
}

int main()
{
    float r;

    scanf ("%f", &r);

    printf ("Raio: %.2f\n", r);
    printf ("Diametro: %.2f\n", dobro(r));
    printf ("Perimetro: %.2f\n", r*dobro_pi());

    return 0;
}
