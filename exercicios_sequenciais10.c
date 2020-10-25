#include <stdio.h>
/* Inverte a ordem de um número inteiro informado
pelo usuário. O número deve conter 3 dígitos e eles
devem ser diferentes de zero. */

int main()
{
    int numero, digito1, digito2, digito3, novo_numero;

    printf ("INVERTE A ORDEM DE 3 DIGITOS \n\n");

    printf ("Numero: ");
    scanf ("%d", &numero);

    digito1 = numero % 10;
    digito2 = (numero / 10) % 10;
    digito3 = (numero / 10 / 10) % 10;

    novo_numero = digito1 * 100 + digito2 * 10 + digito3;

    printf ("Novo Numero: %d \n", novo_numero);

    return 0;
}
