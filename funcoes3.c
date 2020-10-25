#include <stdio.h>

int var = 0;

void func1()
{
    var = 10;
    printf ("func1: %d\n", var);
}

int main()
{
    var = 5;

    printf ("main: %d\n", var);

    func1();

    printf ("main: %d\n", var);

    return 0;
}
