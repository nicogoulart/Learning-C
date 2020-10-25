#include <stdio.h>

int main ()
{
    int bFalso = 0, bVerdade = 1;

    printf ("bVerdade: %12d\n", bVerdade);
    printf ("bFalso: %14d\n", bFalso);
    printf ("bVerdade && bFalso: %2d\n", bVerdade && bFalso);
    printf ("bVerdade && !bFalso: %d\n", bVerdade && !bFalso);
    printf ("bVerdade || bFalso: %2d\n", bVerdade || bFalso);
    printf ("!bVerdade || bFalso: %d\n", !bVerdade || bFalso);

    return 0;
}
