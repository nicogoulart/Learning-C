#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf ("%d", &numero);

    if (numero == 10){
        printf("Esse numero e igual a 10!");
    }

    if (numero == 0){
        printf("Esse numero e igual a 0.");
    }

    return 0;
}
