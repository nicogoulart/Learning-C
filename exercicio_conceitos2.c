/* Programa para exemplificar o uso do rand()
Entradas: não há
Saídas: 3 números aleatórios */

#include <stdio.h>

int main ()
{
    int cont;

    for (cont = 0; cont < 3; cont++)
        printf ("%d ", rand());

    printf("\n");

    return 0;
}
