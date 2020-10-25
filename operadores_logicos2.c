#include <stdio.h>

int main()
{
    int a = 123, b = -456;
    char c = 'A', d = 'B';
    float e = 0.1, f = 0.0;

    printf("a && b: %2d\n", a && b);
    printf("c && d: %2d\n", c && d);
    printf("c || d: %2d\n", c || d);
    printf("!e || f: %d\n", !e || f);

    return 0;
}
