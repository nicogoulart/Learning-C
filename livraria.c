#include <stdio.h>

int main()
{
    char livro;
    int numero;
    float valor_a, valor_b, valor_c;

    printf("Informe a letra do livro: ");
    scanf("%c", &livro);

    printf("Informe o numero de exemplares comprados: ");
    scanf("%d", &numero);

    valor_a = 10 * numero;
    valor_b = 20 * numero;
    valor_c = 30 * numero;

    if (livro == 'a' || livro == 'A'){
        printf("Valor a ser pago: R$%.2f\n", valor_a);
    }

    if (livro == 'b' || livro == 'B'){
        printf("Valor a ser pago: R$%.2f\n", valor_b);
    }

    if (livro == 'c' || livro == 'C'){
        printf("Valor a ser pago: R$%.2f\n", valor_c);
    }

    if (numero > 10){
        printf("Voce comprou mais de 10 exemplares!");
    }

    return 0;
}
