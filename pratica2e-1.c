#include <stdio.h>
#include <math.h>

int main()
{
    int participantes, area, times, salas;
    float aluguel, custo;

    printf ("Informe o numero de participantes: ");
    scanf ("%d", &participantes);

    printf ("Informe a area da sala: ");
    scanf ("%d", &area);

    printf ("Informe o custo do aluguel: ");
    scanf ("%f", &aluguel);

    printf ("\n");

    times = participantes / 3;
    salas = times / pow( ((sqrt(area)) - 1), 2);
    custo = salas*aluguel;

    printf ("Total de times competindo: %d\n", times);
    printf ("Numero minimo de salas: %d\n", salas);
    printf ("Custo total do aluguel: %.2f\n", custo);

    return 0;
}
