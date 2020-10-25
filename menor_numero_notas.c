#include <stdio.h>

int main ()
{
    /*Esse código calcula o menor número de notas possíveis para dar o troco ao cliente.*/

    int troco, moeda100, moeda50, moeda20, moeda10, moeda5, moeda2, moeda1, total;

    printf("Informe o troco do cliente: ");
    scanf("%d", &troco);

    moeda100 = troco / 100;
    moeda50 = troco % 100 / 50;
    moeda20 = troco % 100 % 50 / 20;
    moeda10 = troco % 100 % 50 % 20 / 10;
    moeda5 = troco % 100 % 50 % 20 % 10 / 5;
    moeda2 = troco % 100 % 50 % 20 % 10 % 5 / 2;
    moeda1 = troco % 100 % 50 % 20 % 10 % 5 % 2;
    total = moeda100 + moeda50 + moeda20 + moeda10 + moeda5 + moeda2 + moeda1;

    printf("O numero minimo de notas para fornecer o troco: %d", total);

    return 0;
}
