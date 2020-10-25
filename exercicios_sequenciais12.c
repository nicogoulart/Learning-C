#include <stdio.h>
#include <math.h>
/* Converte o número binário de
cinco dígitos em decimal. */

int main()
{
    int binario, decimal;
    int digito1, digito2, digito3, digito4, digito5;

    printf ("CONVERTE BINARIO DE 5 DIGITOS EM DECIMAL \n\n");

    printf ("Binario: ");
    scanf ("%d", &binario);

    digito5 = binario % 10;
    digito4 = (binario / 10) % 10;
    digito3 = (binario / 10 / 10) % 10;
    digito2 = (binario / 10 / 10 / 10) % 10;
    digito1 = (binario / 10 / 10 / 10 / 10) % 10;

    decimal = digito1 * pow(2,4) + digito2 * pow(2,3) + digito3 * pow(2,2) + digito4 * pow(2,1) + digito5 * pow(2,0);

    printf ("Decimal: %d \n", decimal);

    return 0;
}
