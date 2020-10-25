#include <stdio.h>

int main()
{
    int n1, n2;
    char op;

    printf ("Digite a operacao: ");
    scanf ("%d %c %d", &n1, &op, &n2);

    switch (op){
        case '+': printf ("%d %c %d = %d", n1, op, n2, n1 + n2);
                    break;
        case '-': printf ("%d %c %d = %d", n1, op, n2, n1 - n2);
                    break;
        case '*': printf ("%d %c %d = %d", n1, op, n2, n1 * n2);
                    break;
        case '/': if (n2 != 0)
                    printf ("%d %c %d = %d", n1, op, n2, n1 / n2);
                    else printf ("Divisao por zero");
                    break;
        default: printf ("Operador invalido");
    }

    return 0;
}
