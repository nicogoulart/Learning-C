#include <stdio.h>
/* Dado um número de 3 algarismos, construir outro
número de 4 algarismos, de acordo com a seguinte regra:

a) Os três primeiros algarismos, contados da esquerda
para a direita, são iguais aos do número dado;

b) O quarto algarismo é um dígito de controle calculado
da seguinte forma: digito4 = (primeiro algarismo + segundo algarismo x 3 + terceiro
algarismo x 5) %7; */

int main()
{
    int numero, digito1, digito2, digito3, digito4, novo_numero;

    printf ("CONSTRUIR OUTRO NUMERO \n\n");

    printf ("Numero: ");
    scanf ("%d", &numero);

    digito3 = numero % 10;
    digito2 = (numero / 10) % 10;
    digito1 = (numero / 10 / 10) % 10;

    digito4 = (digito1 + digito2 * 3 + digito3 * 5) % 7;
    novo_numero = digito1 * 1000 + digito2 * 100 + digito3 * 10 + digito4;

    printf ("Novo Numero: %d \n", novo_numero);

    return 0;
}
