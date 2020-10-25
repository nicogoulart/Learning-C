#include <stdio.h>

int main()
{
    int ingressos, custo;

    printf ("Informe o numero de ingressos: ");
    scanf ("%d", &ingressos);

    printf ("Informe o custo dos ingressos: ");
    scanf ("%d", &custo);

    printf ("O seu ganho foi de %d reais!\n", ingressos*custo);

   return 0;
}
