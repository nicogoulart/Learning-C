#include <stdio.h>
#include <math.h>
/* Calcular a área ou o perímetro
de uma circunferência. Caso o operador
informado pelo usuário seja 1 retorna
a área, e se for 2 retorna o perímetro.
Do contrário retorna uma mensagem de erro.

Fórmulas da circunferência
ÁREA = pi. raio²
PERÍMETRO = 2 . pi . raio */

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
