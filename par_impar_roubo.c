#include <stdio.h>

int main ()
{
    int p, j1, j2, r, a;

    printf("Informe p, j1, j2, r, a: ");
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    if (((p != 0) && (p != 1)) || ((r != 0) && (r != 1)) || ((a != 0) && (a != 1)) || (j1 < 1) || (j2 < 1) || (j1 > 100) || (j2 > 100)){
        printf("Valores invalidos, tente novamente.");
    }

    else

    if ((p = 1) && (((j1 + j2) % 2) == 0)){
        printf("Jogador 1 ganha!");
    }

    else

    if ((p = 1) && (((j1 + j2) % 2) != 0)){
        if (r == 1){
            if (a == 1)
                printf("Jogador 2 ganha!");
            else
                printf("Jogador 1 ganha!");
        }
        else
            printf("Jogador 2 ganha!");
    }

    return 0;
}
