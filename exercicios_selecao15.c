#include <stdio.h>
/* Escrever um programa para ler os valores das coordenadas cartesianas de um ponto e imprimir
os valores lidos, seguidos do número (1 a 4) do quadrante em que o ponto está situado, ou do
valor -1, se o ponto estiver situado sobre um dos eixos, ou do valor 0, se estiver na origem. */

int main()
{
    int x, y;

    printf ("Coordenada x: ");
    scanf ("%d", &x);

    printf ("Coordenada y: ");
    scanf ("%d", &y);

    printf ("\n");

    if (x > 0)
    {
        if (y > 0) printf ("Primeiro Quadrante. \n");

            else if (y < 0) printf ("Quarto Quadrante. \n");

                else printf ("Eixo das Abcissas. \n");
    }

        else if (x < 0)
        {
            if (y > 0) printf ("Segundo Quadrante. \n");

                else if (y < 0) printf ("Terceiro Quadrante. \n");

                    else printf ("Eixo das Abcissas. \n");
        }

            else
            {
                if (y > 0) printf ("Eixo das Ordenadas. \n");

                    else if (y < 0) printf ("Eixo das Ordenadas. \n");

                        else printf ("Origem. \n");
            }

    return 0;
}
