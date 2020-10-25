#include <stdio.h>
#define NCOL 10
#define NLIN 5

void zera_matriz(int mat[NLIN][NCOL])
{
    int i,j;

    for (i = 0; i < NLIN; i ++)
        for (j = 0; j < NCOL; j++)
            mat[i][j] = 0;
}

int main ()
{
    int matriz[NLIN][NCOL];

    zera_matriz (matriz);

    return 0;
}
