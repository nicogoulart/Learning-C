#include <stdio.h>
#include <math.h>
/* Calcular a �rea ou o per�metro
de uma circunfer�ncia. Caso o operador
informado pelo usu�rio seja 1 retorna
a �rea, e se for 2 retorna o per�metro.
Do contr�rio retorna uma mensagem de erro.

F�rmulas da circunfer�ncia
�REA = pi. raio�
PER�METRO = 2 . pi . raio */

int main()
{
    int op, raio;
    float area, perimetro;

    printf ("CIRCUNFERENCIA \n \n");

    printf ("Operador [1 - Area] [2 - Perimetro]: ");
    scanf ("%d", &op);

    printf ("Raio (centimetros): ");
    scanf ("%d", &raio);

    if (op == 1)
    {
        area = M_PI * (float)pow(raio, 2);
        printf ("Area da Circunferencia: %.2f \n", area);
    }

        else if (op == 2)
        {
            perimetro = 2.0 * M_PI * (float)raio;
            printf ("Perimetro da Circunferencia: %.2f \n", perimetro);
        }

            else printf ("Operador Invalido. \n");

    return 0;
}
