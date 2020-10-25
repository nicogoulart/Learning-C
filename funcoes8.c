#include <stdio.h>
//Valida entrada, aceitando apenas letras

char le_letra()
{
    char x;
    do
    {
        scanf ("%c", &x);
    }
    while (!((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')));

    return x;
}

int main()
{
    char c = le_letra();

    printf ("%c\n", c);

    return 0;
}
