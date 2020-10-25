#include <stdio.h>
#include <math.h>
/* Ler a coordenada de dois pontos
no plano cartesiano informados pelo
usuário, e retornar a distância entre
os dois pontos.

Fórmula da distância entre dois pontos:
raiz quadrada[(x2 - x1)² + (y2 - y1)²] */

int main()
{
    float x1, x2, y1, y2, distancia;

    printf ("CALCULO DA DISTANCIA ENTRE DOIS PONTOS\n\n");

    printf ("PRIMEIRO PONTO (x1, y1)\n");
    printf ("Informe a coordenada do primeiro ponto no eixo das abcissas (x1): ");
    scanf ("%f", &x1);
    //Lê coordenada de x1.

    printf ("Informe a coordenada do primeiro ponto no eixo das ordenadas (y1): ");
    scanf ("%f", &y1);
    //Lê coordenada de y1.

    printf ("\n");

    printf ("SEGUNDO PONTO (x2, y2)\n");
    printf ("Informe a coordenada do segundo ponto no eixo das abcissas (x2): ");
    scanf ("%f", &x2);
    //Lê coordenada de x2.

    printf ("Informe a coordenada do segundo ponto no eixo das ordenadas (y2): ");
    scanf ("%f", &y2);
    //Lê coordenada de y2.

    printf ("\n");

    distancia = sqrt ( pow((x2 - x1),2) + pow((y2 - y1),2) );
    //Calcula a distância com os valores fornecidos.

    printf ("Distancia entre os dois pontos: %f\n", distancia);

    return 0;
}
