#include <stdio.h>
#include <math.h>



struct ponto
{
    float x;
    float y;
};

int main()
{
    struct ponto p1, p2;
    float dist;

    printf ("\nCoordenada X do Ponto 1: ");
    scanf ("%f", &p1.x);

    printf ("Coordenada Y do Ponto 1: ");
    scanf ("%f", &p1.y);

    printf ("\nCoordenada X do Ponto 2: ");
    scanf ("%f", &p2.x);

    printf ("Coordenada Y do Ponto 2: ");
    scanf ("%f", &p2.y);

    dist = sqrt (pow(p1.x - p2. x, 2) + pow(p1.y - p2.y, 2));

    printf ("\nDistancia: %.2f\n", dist);

    return 0;
}
