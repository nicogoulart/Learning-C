#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4;

    printf("%d\n", (a > b ) || ( c < d )); //Deve retornar 1 (Verdadeiro)
    printf("%d\n", d > 2 * 2); //Deve retornar 0 (Falso)
    printf("%d\n", !(a < b)); //Deve retornar 0 (Falso)
    printf("%d\n", (a + c == b)); //Deve retornar 0 (Falso)
    printf("%d\n", (a == b) && (a >= c)); //Deve retornar 0 (Falso)
    printf("%d\n", (a != b) || (a != c)); //Deve retornar 1 (Verdadeiro)
    printf("%d\n", !((a >= b) || (a + c))); //Deve retornar 0 (Falso)

    return 0;
}
