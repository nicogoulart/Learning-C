#include <stdio.h>

int main()
{
    char c = 'a', e;

    printf("Digite um caractere: ");
    scanf("%c", &e);

    if (e != c){
        printf("Esse caractere e diferente.");
    }

    if (e == c){
        printf("Esse caractere e igual.");
    }

    return 0;
}
