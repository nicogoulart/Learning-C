#include <stdio.h>
/* Retorna o �ltimo algorismo de
um n�mero inteiro informado pelo
usu�rio. */

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
