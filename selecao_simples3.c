#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("Esse numero e par!");
    }

    if (numero % 2 > 0){
        printf("Esse numero e impar!");
    }

    return 0;
}
