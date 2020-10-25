#include <stdio.h>

int main (){
    int x, y;
    char op;

    printf("digite o calculo desejado (operando operador operando): ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
        printf("resultado = %d", x + y);

        else

            if (op == '-')
                printf("resultado = %d", x - y);

                else

                    if (op == '*')
                        printf("resultado = %d", x * y);

                        else

                            if (op == '/'){
                                if (y != 0)
                                printf("resultado = %d", x / y);
                                    else
                                        printf("divisao por zero!");
                                }

                                else
                                    printf("operador invalido.");
    return 0;
}
