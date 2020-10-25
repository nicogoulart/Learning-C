#include <stdio.h>

int main()
{
    int a = 1;

    while (a < 5)
        a = a + 1;

    printf("%d\n\n", a);

    /////////////////

    int b = 1;

    while (b <= 5)
    {
        printf ("%d\n", b);

        b = b + 1;
    }

    printf ("%d\n\n", b);

    /////////////////////

    int c = 6, d = 0;

    while ( (c - 2) > (d + 1) )
    {
        printf("%d, %d\n", c, d);

        c = c - 1;
    }

    printf ("%d, %d\n\n", c, d);

    /////////////////////

    int e = 0;

    while (e < 5)
    {
        e = e + 1;

        printf ("%d\n", e);
    }

    return 0;
}
