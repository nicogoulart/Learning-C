#include <stdio.h>
/* Calcula o salario bruto de um funcionário.
Recebe o número de horas trabalhadas, o valor
pago por hora e o número de filhos menores de
14 para o cálculo do Salário-Família.

Tabela do Salário-Família
R$ 859,88 --> R$ 44,09 por filho
R$ 859,89 a R$ 1.292,43 --> R$ 31,07 por filho
R$ 806,80 --> R$ 41,37 por filho
R$ 806,81 a R$ 1.212,64	--> R$ 29,16 por filho */

int main()
{
    int horas, filhos;
    float valor, calculo, familia, salario;

    printf ("CALCULO DO SALARIO BRUTO\n\n");

    printf ("Horas trabalhadas: ");
    scanf ("%d", &horas);

    printf ("Valor por hora: R$ ");
    scanf ("%f", &valor);

    printf ("Filhos menores de 14 anos: ");
    scanf ("%d", &filhos);

    calculo = (float)horas * valor;

    if (filhos > 0)
    {
        if (calculo <= 859.88)
        familia = (float)filhos * 44.09;

            else if (calculo <= 1292.43)
            familia = (float)filhos * 31.07;


        salario = calculo + familia;
    }

    else salario = calculo;

    printf ("\n");

    printf ("Salario Bruto: R$ %.2f\n", salario);

    return 0;
}
