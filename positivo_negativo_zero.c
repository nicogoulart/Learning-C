#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (num < 0)
        printf("numero negativo\n");

        else

            if (num == 0)
                printf("zero\n");

                else
                    printf("numero positivo\n");
    return 0;
}

