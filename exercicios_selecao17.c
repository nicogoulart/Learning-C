#include <stdio.h>
#include <math.h>
/* Fazer a conversão de um ângulo, dado em graus, minutos e segundos, para radianos. */

int main()
{
    int graus, minutos, segundos;
    float total, radianos;

    printf ("Angulo (graus, minutos e segundos): ");
    scanf ("%d %d %d", &graus, &minutos, &segundos);

    //Essa conversão está errada na parte dos minutos e segundos.
    total = (float)graus + (float)minutos * 0.1 + (float)segundos * 0.01;
    radianos = (total * M_PI) / 180.0;

    printf ("Radianos: %.2f rad \n", radianos);

    return 0;
}
