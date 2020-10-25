#include <stdio.h>

#define pedras 6
#define salto 50

int main()
{
    int contador, soma, pulos, erro;
    int obstaculos[pedras];

    soma = 0;
    pulos = 0;
    erro = 0;

    for (contador = 0; contador <= pedras; contador ++)
    {
        printf ("Informe a distancia da pedra %d: ", contador + 1);
        scanf ("%d", &obstaculos[contador]);

        soma = soma + obstaculos[contador];

        if ((contador == 0) && (obstaculos[contador] > 50))
        {
            erro = erro + 1;
        }

        if ((contador > 0) && ((obstaculos[contador] - obstaculos[contador - 1]) > 50))
        {
            erro = erro + 1;
        }

        if (soma > 50)
        {
            do
            {
            pulos = pulos + 1;
            soma = soma - 50;
            }
            while (soma > 50);
        }
    }

    if (erro > 0)
        printf ("-1");

        else
                printf ("%d\n", pulos);

    return 0;
}
