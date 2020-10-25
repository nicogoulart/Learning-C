#include <stdio.h>
#define KM_MI 1.60934

float mi_para_km(float); //Protótipo

int main()
{
    float x, y;

    printf ("Informe a quantidade de milhas: ");
    scanf ("%f", &x);

    y = mi_para_km(x);

    printf ("%.2f milhas = %.2f km\n", x, y);

    return 0;
}

float mi_para_km(float mi)
{
    return mi*KM_MI;
}
