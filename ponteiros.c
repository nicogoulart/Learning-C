#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, *x, *y;

    a = 10;
    x = &a;
    y = x;

    printf ("a = %d, x = %d, y = %d \n", a, *x, *y);
    printf ("a = %d, x = %p, y = %p \n\n", a, x, y);

    *x = 20;

    printf ("a = %d, x = %d, y = %d \n", a, *x, *y);
    printf ("a = %d, x = %p, y = %p \n\n", a, x, y);

    return 0;
}
