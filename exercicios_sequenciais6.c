#include <stdio.h>
/* Dado o custo de fábrica de um
veículo, calcula o custo do consumidor.
Considera a porcentagem do distribuidor
como 28% e os impostos como 45%. */

int main()
{
    float fabrica, consumidor, distribuidor, impostos;

    printf ("CUSTO DO VEICULO PARA O CONSUMIDOR\n\n");

    printf ("Custo de Fabrica: R$ ");
    scanf ("%f", &fabrica);

    distribuidor = (28 * fabrica) / 100;
    impostos = (45 * fabrica) / 100;
    consumidor = fabrica + distribuidor + impostos;

    printf ("Custo do Consumidor: R$ %.2f\n", consumidor);

    return 0;
}
