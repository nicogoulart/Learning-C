/* Programa para exemplificar o uso do rand().
Modifica o valor do rand() utilizando a biblioteca
<time.h>, que utiliza os segundos do computador.

Entradas: não há.
Saídas: 3 números aleatórios. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL)); //inicializa a semente dinamicamente
    int cont;

    for (cont = 0; cont < 3; cont++)
        printf ("%d ", rand());

    printf("\n");

    return 0;
}

