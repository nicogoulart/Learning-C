#include <stdio.h>
#include <math.h>
/* Ler a coordenada de dois pontos
no plano cartesiano informados pelo
usu�rio, e retornar a dist�ncia entre
os dois pontos.

F�rmula da dist�ncia entre dois pontos:
raiz quadrada[(x2 - x1)� + (y2 - y1)�] */

int main()
{
    float x1, x2, y1, y2, distancia;

    printf ("CALCULO DA DISTANCIA ENTRE DOIS PONTOS\n\n");

    printf ("PRIMEIRO PONTO (x1, y1)\n");
    printf ("Informe a coordenada do primeiro ponto no eixo das abcissas (x1): ");
    scanf ("%f", &x1);
    //L� coordenada de x1.

    printf ("Informe a coordenada do primeiro ponto no eixo das ordenadas (y1): ");
    scanf ("%f", &y1);
    //L� coordenada de y1.

    printf ("\n");

    printf ("SEGUNDO PONTO (x2, y2)\n");
    printf ("Informe a coordenada do segundo ponto no eixo das abcissas (x2): ");
    scanf ("%f", &x2);
    //L� coordenada de x2.

    printf ("Informe a coordenada do segundo ponto no eixo das ordenadas (y2): ");
    scanf ("%f", &y2);
    //L� coordenada de y2.

    printf ("\n");

    distancia = sqrt ( pow((x2 - x1),2) + pow((y2 - y1),2) );
    //Calcula a dist�ncia com os valores fornecidos.

    printf ("Distancia entre os dois pontos: %f\n", distancia);

    return 0;
}
