#include <stdio.h>
#include <math.h>

int main()
{
    float numero, dist, aprox, erro;

    printf ("Informe o numero: ");
    scanf ("%f", &numero);

    printf ("Defina a distancia maxima toleravel: ");
    scanf ("%f", &dist);

    printf ("Aproximacao inicial: ");
    scanf ("%f", &aprox);

    erro = fabs((aprox * aprox) - numero);

    while (erro > dist)
    {
        printf ("\nAproximacao: %f\n", aprox);
        printf ("Erro: %f\n", erro);

        aprox = (aprox + (numero / aprox))/2;
        erro = fabs((aprox * aprox) - numero);
    }

    printf ("\nMETODO BABILONICO: %f", aprox);

    return 0;
}
