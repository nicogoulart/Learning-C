#include <stdio.h>
/* Calcula o menor numero de notas e moedas
que deve ser dado de troco para um pagamento
efetuado.

Notas: 50, 20 e 10 reais.
Moedas: 1 real ou 50, 10, 5 e 1 centavos. */

int main()
{
    float preco, pagamento, troco;
    int nota50, nota20, nota10;
    int moeda100, moeda50, moeda10, moeda5, moeda1;

    printf ("MENOR TROCO PARA O PAGAMENTO \n\n");

    printf ("Preco do produto: R$ ");
    scanf ("%f", &preco);

    printf ("Pagamento realizado: R$ ");
    scanf ("%f", &pagamento);

    troco = pagamento - preco;

    printf ("Troco necessario: R$ %.2f \n\n", troco);

    nota50 = troco / 50;
    troco = troco - 50 * nota50;

    nota20 = troco / 20;
    troco = troco - 20 * nota20;

    nota10 = troco / 10;
    troco = troco - 10 * nota10;

    moeda100 = troco / 1;
    troco = troco - 1 * moeda100;

    moeda50 = troco / 0.5;
    troco = troco - 0.5 * moeda50;

    moeda10 = troco / 0.1;
    troco = troco - 0.1 * moeda10;

    moeda5 = troco / 0.05;
    troco = troco - 0.05 * moeda5;

    moeda1 = troco / 0.01;

    printf ("Troco ideal: \n");
    printf ("Notas de 50 reais: %d \n", nota50);
    printf ("Notas de 20 reais: %d \n", nota20);
    printf ("Notas de 10 reais: %d \n", nota10);
    printf ("Moedas de 1 real: %d \n", moeda100);
    printf ("Moedas de 50 centavos: %d \n", moeda50);
    printf ("Moedas de 10 centavos: %d \n", moeda10);
    printf ("Moedas de 5 centavos: %d \n", moeda5);
    printf ("Moedas de 1 centavo: %d \n", moeda1);

    return 0;
}
