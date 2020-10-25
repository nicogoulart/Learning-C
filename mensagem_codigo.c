#include <stdio.h>

int main()
{
    int cod;

    printf ("Digite o codigo (1 a 4): ");
    scanf ("%d", &cod);

    switch(cod){
        case 1: printf ("Mensagem 1");
                break;
        case 2: printf ("Mensagem 2");
                break;
        case 3: printf ("Mensagem 3");
                break;
        case 4: printf ("Mensagem 4");
                break;
        default: printf ("ERRO");
    }

    return 0;
}
