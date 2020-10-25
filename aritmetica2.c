#include <stdio.h>

int main ()
{
    int a, b, div, rest;
    a= 15;
    b= 2;
    div= a/b;
    rest= a%b;

    printf("%d dividido por %d resulta em %d e tem resto %d", a, b, div, rest);

    return 0;
}
