/* Programa para exemplificar o uso do rand()
Entradas: n�o h�
Sa�das: 3 n�meros aleat�rios */

#include <stdio.h>

int main ()
{
    int cont;

    for (cont = 0; cont < 3; cont++)
        printf ("%d ", rand());

    printf("\n");

    return 0;
}
