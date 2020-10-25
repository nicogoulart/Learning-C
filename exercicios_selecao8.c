#include <stdio.h>
/* Um hotel com 75 apartamentos deseja fazer uma promoção especial de final de semana,
concedendo um desconto de 25% na diária. Com isto, espera aumentar sua taxa de ocupação
de 50 para 80%. Sendo dado o valor normal da diária, calcular e imprimir:
a) o valor da diária promocional;
b) o valor total arrecadado com 80% de ocupação e diária promocional;
c) o valor total arrecadado com 50% de ocupação e diária normal;
d) a diferença entre estes dois valores. */

int main()
{
    int ap;
    float normal, promocional, total80prom, total50norm, diferenca;

    ap = 75;

    printf ("Informe o valor da diaria normal: R$ ");
    scanf ("%f", &normal);

    printf ("\n");

    //a) o valor da diária promocional;
    promocional = (normal * 75.0) / 100.0;
    printf ("Valor da diaria promocional: R$ %.2f \n", promocional);

    //b) o valor total arrecadado com 80% de ocupação e diária promocional;
    total80prom = promocional * (((float)ap * 80.0) / 100);
    printf ("Total arrecadado com 80 de ocupacao e diaria promocional: R$ %.2f \n", total80prom);

    //c) o valor total arrecadado com 50% de ocupação e diária normal;
    total50norm = normal * (((float)ap * 50.0) / 100);
    printf ("Total arrecadado com 50 de ocupacao e diaria normal: R$ %.2f \n", total50norm);

    //d) a diferença entre estes dois valores.
    diferenca = total80prom - total50norm;
    printf ("Diferenca entre os valores: R$ %.2f \n", diferenca);

    return 0;
}
