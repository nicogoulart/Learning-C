#include <stdio.h>

int main()
{
    int multiplicador, multiplicando;

    for (multiplicador = 1; multiplicador <= 10; multiplicador++){
        printf ("Tabuada de %d: \n", multiplicador);

        for (multiplicando = 1; multiplicando <= 10; multiplicando++){
            printf ("%d x %d = %d\n", multiplicador, multiplicando, multiplicador*multiplicando);
        }
        printf("\n");
    }

    return 0;
}
