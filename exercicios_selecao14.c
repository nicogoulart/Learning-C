#include <stdio.h>
/* Escreva um programa para fazer o cálculo das seguintes conversões entre sistemas de medida:
a) dada uma temperatura na escala Celsius, fornecer a equivalente em graus Fahrenheit, e vice-
versa;
fórmula de conversão: 1º F = (9 / 5)º C + 32
b) dada uma medida em polegadas, fornecer a equivalente em milímetros, e vice-versa;
fórmula de conversão: 1 pol = 24,5 mm
O programa deve mostrar uma tela com as quatro possíveis conversões de sistema de medida,
perguntando a seguir qual a conversão a ser realizada e qual o valor a ser convertido,
fornecendo o valor convertido como resposta. */

int main()
{
    int unid;
    float valor, celsius, fahrenheit;
    float milimetros, polegadas, conversao;

    printf ("Unidade de Medida [1 - C] [2 - F] [3 - mm] [4 - pol]: ");
    scanf ("%d", &unid);

    printf ("Forneca o valor: ");
    scanf ("%f", &valor);

    printf ("\n");

    if (unid == 1)
    {
        conversao = (9.0 / 5.0) * valor + 32.0;
        printf ("Conversao de Celsius para Fahrenheit: %.2f \n", conversao);
    }

        else if (unid == 2)
        {
            conversao = ((valor - 32.0) * 5.0) / 9.0;
            printf ("Conversao de Fahrenheit para Celsius: %.2f \n", conversao);
        }

            else if (unid == 3)
            {
                conversao = 0.0393701 * valor;
                printf ("Conversao de milimetros para polegadas: %.2f \n", conversao);
            }

                else if (unid == 4)
                {
                    conversao = 25.4 * valor;
                    printf ("Conversao de polegadas para milimetros: %.2f \n", conversao);
                }

                    else printf ("Unidade invalida. Tente novamente.");

    return 0;
}
