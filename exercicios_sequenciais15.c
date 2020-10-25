#include <stdio.h>
#include <math.h>
#define pi 3.14
/* Calcula o custo e o n�mero de latas de tintas
necess�rias para pintar um cilindro. A altura e o
raio do cilindro s�o informados pelo usu�rio.

Cada lata de tinta custa R$ 25,00 e rende 5 litros.
Cada litro de tinta rende 3 metros quadrados.
Cada lata de tinta rende 15 metros quadrados.

F�rmula da �rea do Cilindro:
pi . raio� + 2 . pi . raio . altura */

int main()
{
    int raio, altura, latas;
    float area, custo;

    printf ("PINTURA DO CILINDRO \n\n");

    printf ("Altura do Cilindro (metros): ");
    scanf ("%d", &altura);

    printf ("Raio do Cilindro (centimetros): ");
    scanf ("%d", &raio);

    raio = raio / 100; //Converte de cent�metros p/ metros.

    printf ("\n");

    area = pi * pow((float)raio, 2) + 2 * pi * (float)raio * (float)altura;

    latas = ceil(area / 15);
    custo = (float)latas * 25.0;

    printf ("Area do Cilindro: %.2f metros \n", area);
    printf ("Latas de Tinta: %d \n", latas);
    printf ("Custo Total: R$ %.2f \n", custo);

    return 0;
}
