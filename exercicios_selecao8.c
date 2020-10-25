#include <stdio.h>
/* Um hotel com 75 apartamentos deseja fazer uma promo��o especial de final de semana,
concedendo um desconto de 25% na di�ria. Com isto, espera aumentar sua taxa de ocupa��o
de 50 para 80%. Sendo dado o valor normal da di�ria, calcular e imprimir:
a) o valor da di�ria promocional;
b) o valor total arrecadado com 80% de ocupa��o e di�ria promocional;
c) o valor total arrecadado com 50% de ocupa��o e di�ria normal;
d) a diferen�a entre estes dois valores. */

int main()
{
    int ap;
    float normal, promocional, total80prom, total50norm, diferenca;

    ap = 75;

    printf ("Informe o valor da diaria normal: R$ ");
    scanf ("%f", &normal);

    printf ("\n");

    //a) o valor da di�ria promocional;
    promocional = (normal * 75.0) / 100.0;
    printf ("Valor da diaria promocional: R$ %.2f \n", promocional);

    //b) o valor total arrecadado com 80% de ocupa��o e di�ria promocional;
    total80prom = promocional * (((float)ap * 80.0) / 100);
    printf ("Total arrecadado com 80 de ocupacao e diaria promocional: R$ %.2f \n", total80prom);

    //c) o valor total arrecadado com 50% de ocupa��o e di�ria normal;
    total50norm = normal * (((float)ap * 50.0) / 100);
    printf ("Total arrecadado com 50 de ocupacao e diaria normal: R$ %.2f \n", total50norm);

    //d) a diferen�a entre estes dois valores.
    diferenca = total80prom - total50norm;
    printf ("Diferenca entre os valores: R$ %.2f \n", diferenca);

    return 0;
}
