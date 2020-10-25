#include <stdio.h>

int main()
{
    int p1, p2, c1, c2;

    printf("Informe p1, c1, p2, c2: ");
    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

    if ((p1 < 10) || (p2 < 10) || (c1 < 10) || (c2 < 10) || (p1 > 100) || (p2 > 100) || (c1 > 100) || (c2 > 100)){
        printf("Valores invalidos, tente novamente.");
    }

    else

    if ((p1 * c1) > (p2 * c2)){
        printf("-1");
    }

    else

    if((p1 * c1) < (p2 * c2)){
    printf("1");
    }

    else
    printf("0");

    return 0;
}
