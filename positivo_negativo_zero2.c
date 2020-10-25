#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 0)
        printf("O numero e zero!");

        else

            if ( !(num % 2) )
                printf("o numero e par\n");

                else
                    printf("o numero e impar\n");
    return 0;
}
