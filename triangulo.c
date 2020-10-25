#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite o comprimento do lado a: ");
    scanf("%d", &a);

    printf("Digite o comprimento do lado b: ");
    scanf("%d", &b);

    printf("Digite o comprimento do lado c: ");
    scanf("%d", &c);

    if ((a + b) > c){
        printf("Os tres comprimentos formam um triangulo!");
    }

    else{
        printf("Os tres comprimentos nao formam um triangulo...");
    }

    return 0;
}
