#include <stdio.h>

int main()
{
    int numero, somatorio;
    somatorio = 0;

    while (numero != 0)
    {
        printf ("Informe o numero a ser somado: ");
        scanf ("%d", &numero);

        somatorio = somatorio + numero;

        printf ("Somatorio: %d\n\n", somatorio);
    }

    return 0;
}
