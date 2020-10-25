#include <stdio.h>
#include <math.h>

typedef struct ponto
{
    float x;
    float y;
} ponto;

void le_ponto (ponto*);
float calcula_dist (ponto*, ponto*);

int main()
{
    ponto p1, p2;
    float dist;

    le_ponto (&p1);
    le_ponto (&p2);

    dist = calcula_dist (&p1, &p2);

    printf ("\nDistancia: %f\n", dist);

    return 0;
}

void le_ponto (ponto* pnt)
{
    printf ("\nCoordenadas do Ponto: ");
    scanf ("%f f", &pnt->x, &pnt->y);

    /* ou scanf ("%f %f", &(*pnt).x, &(*pnt).y); */
}

float calcula_dist (ponto* a, ponto* b)
{
    float quadX, quadY;

    quadX = pow (a->x - b->x, 2);
    //ou quadX = pow ((*a).x - (*b).x, 2);

    quadY = pow (a->y - b->y, 2);
    //ou quadY = pow ((*c).y - (*b).y, 2);

    return sqrt (quadX + quadY);
}
