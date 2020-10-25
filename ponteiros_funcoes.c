#include <stdio.h>

void troca (int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}

int main ()
{
    int a = 10, b = 20;

    printf ("a = %d, b = %d \n", a, b);

    troca (a, b);

    printf ("a = %d, b = %d \n", a, b);
}
