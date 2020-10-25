#include <stdio.h>

int main()
{
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if (valor == 10){
        printf("%d e igual a 10!", valor);
    }

    return 0;
}
