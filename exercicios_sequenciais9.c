#include <stdio.h>
/* Retorna o último algorismo de
um número inteiro informado pelo
usuário. */

int main()
{
    int numero, algorismo;

    printf ("RETORNA O ULTIMO ALGORISMO DE UM NUMERO INTEIRO \n\n");

    printf ("Numero: ");
    scanf ("%d", &numero);

    algorismo = numero % 10;

    printf ("Ultimo Algorismo: %d \n", algorismo);

    return 0;
}
