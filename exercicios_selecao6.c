#include <stdio.h>
/* Dados tr�s valores (a, b & c),
retorna se eles podem ou n�o ser
o comprimento de um tri�ngulo.
Caso a resposta seja afirmativa,
retorna se o tri�ngulo � is�sceles,
equilatero ou escaleno. */

int main()
{
    int a, b, c;

    printf ("a: ");
    scanf ("%d", &a);

    printf ("b: ");
    scanf ("%d", &b);

    printf ("c: ");
    scanf ("%d", &c);

    printf ("\n");

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        if (a == b && b == c)
        printf ("Triangulo Equilatero. \n");

            else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
            printf ("Triangulo Isosceles. \n");

                else printf ("Triangulo Escaleno. \n");
    }

        else printf ("Nao e um triangulo. \n");

    return 0;
}
