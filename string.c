#include <stdio.h>

#define MAX 5

int main()
{
    int i, j, valor[MAX];

    for (i = 0; i < MAX; i++)
    {
        printf ("Valor [%d]: ", i);
        scanf ("%d", &valor[i]);
    }

    for (j = 0; j < MAX; j++)
    {
        printf ("Valor [%d]: %d\n", j, valor[j]);
    }

    return 0;
}
