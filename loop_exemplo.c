#include <stdio.h>

int main()
{
    int val1, val2, inicio, fim, controle;

    printf ("Informe val1 e val2: ");
    scanf ("%d %d", &val1, &val2);

    if (val1 > val2){
        val1 = fim, val2 = inicio;
    }

    else{
        val1 = inicio, val2 = fim;
    }

    if (inicio % 2){
        inicio = inicio + 1;
    }

    controle = inicio;

    for (controle; controle <= fim; controle = controle + 2){
        printf ("%d \n", controle);
        }

    return 0;
}
