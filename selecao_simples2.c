#include <stdio.h>

int main()
{
    int valor;

    printf("Digite um numero inteiro entre 0 e 10: ");
    scanf("%d", &valor);

    if ((valor < 0) || (valor > 10)){
        printf("%d nao e um numero inteiro entre 0 e 10!", valor);
    }

    return 0;
}
