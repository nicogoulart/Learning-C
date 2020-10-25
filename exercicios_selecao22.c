#include <stdio.h>
/* Fazer um programa que, tendo como entradas o sexo (M ou F) e a altura (em metros) de uma
pessoa, informe o peso ideal (em kg), sabendo que, para homens, o peso ideal é obtido por
altura x 72,7 – 58 e, para mulheres, por altura x 62,1 – 44,7 . */

int main()
{
    float altura, peso;
    char sexo;

    printf ("Sexo: ");
    scanf ("%c", &sexo);

    printf ("Altura: ");
    scanf ("%f", &altura);

    switch (sexo)
    {
        case 'm':
        case 'M':
            peso = altura * 72.7 - 58.0;
            printf ("Peso ideal: %.2f \n", peso);
            break;

        case 'f':
        case 'F':
            peso = altura * 62.1 - 44.7;
            printf ("Peso ideal: %.2f \n", peso);
            break;

        default: printf ("Comando invalido. Tente novamente. \n");
    }

    return 0;
}
