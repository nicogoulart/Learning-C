#include <stdio.h>

int main()
{
    int projeto, producao;

    printf ("Informe os meses de projeto: ");
    scanf ("%d", &projeto);

    printf ("Informe os meses de producao: ");
    scanf ("%d", &producao);

    switch (projeto + producao){
        case 2: printf ("R$ 1.000,00");
                break;
        case 3: printf ("R$ 1.500,00");
                break;
        case 4: printf ("R$ 2.000,00");
                break;
        default: printf ("R$ 2.500,00");
    }

    return 0;
}
