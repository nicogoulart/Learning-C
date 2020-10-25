#include <stdio.h>

int main()
{
    float soma, n1, n2, fatorial;

    soma = 0;
    fatorial = 1;

    for (n1 = 100; n1 >= 1; n1 --)
    {
        for (n2 = 0; n2 <= 99; n2 ++)
        {
            if (n2 > 1)
            fatorial *= n2;

            soma += n1 / fatorial;
        }
    }

    printf ("Soma: %.2f \n", soma);

    return 0;
}
