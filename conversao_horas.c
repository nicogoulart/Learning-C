#include <stdio.h>

int main ()
{
    /*Esse c�digo converte o valor digitado em segundos para
    o formato de horas, minutos e segundos atrav�s de opera��es
    matem�ticas simples.*/

    int h, m, s;
    printf("Digite o numero de segundos: ");
    scanf("%d", &s);

    h = s / 3600;
    m = (s % 3600) / 60;
    s = ((s % 3600) % 60);

    printf("%d horas, %d minutos e %d segundos!", h, m, s);

    return 0;
}
