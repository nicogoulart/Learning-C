#include <stdio.h>

int main ()
{
    char inicio, fim;
    inicio = 'A';
    fim = 'E';

    printf("numero de letras entre %c e %c: %d", inicio, fim, fim - inicio - 1);

    return 0;
}
