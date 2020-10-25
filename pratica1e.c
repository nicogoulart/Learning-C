#include <stdio.h>

int main()
{
    int doces, amigos;

    printf ("Quantos doces? ");
    scanf ("%d", &doces);

    printf ("Quantos amigos? ");
    scanf ("%d", &amigos);

    printf ("Cada amigo ganhara %d doce(s)!", doces/amigos);

    return 0;
}
