#include <stdio.h>

int main ()
{
    int doces, amigos;

    printf("Digite o numero de doces: ");
    scanf("%d", &doces);

    printf("Digite o numero de amigos: ");
    scanf("%d", &amigos);

    printf("Cada amigo ganhara %d doces!", doces/amigos);

    return 0;
}
