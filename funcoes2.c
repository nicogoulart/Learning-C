#include <stdio.h>

void func1()
{
    int var = 10;

    printf ("func1: %d\n", var);
}

int main()
{
    int var = 5;

    printf ("main: %d\n", var);

    func1();

    printf ("main: %d\n", var);

    return 0;
}
