#include <stdio.h>
/* Transforma um valor informado em
intervalo temporal de horas, minutos
e segundos em apenas segundos. */

int main()
{
    int horas, minutos, segundos, segundos2;

    printf ("CONVERTE O TEMPO EM SEGUNDOS \n\n");

    printf ("Horas: ");
    scanf ("%d", &horas);

    printf ("Minutos: ");
    scanf ("%d", &minutos);

    printf ("Segundos: ");
    scanf ("%d", &segundos);

    printf ("\n");

    segundos2 = horas * 3600 + minutos * 60 + segundos;

    printf ("Tempo informado em segundos: %d \n", segundos2);

    return 0;
}
