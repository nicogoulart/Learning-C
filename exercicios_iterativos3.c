/** Recebemos um valor x e uma precisão n e calculamos
a função exponencial e^x através da série de Taylor

e^x = 1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n! */

#include <stdio.h>

int main()
{
    float expoente;
    int nParcelas;
    double parcela, exponencial;
    int i;

    printf ("CALCULAREMOS e^x \n");

    /** Pedimos pelo valor de x. */
    printf ("Valor de x: ");
    scanf ("%f", &expoente);

    /** A precisao é medida por um valor
    n tal que (n - 1) é o número de parcelas
    consideradas na série. Para nParcelas < 1,
    temos a precisão mínima e^x = 1.
    Uma precisão perfeita exigiria infinitas
    parcelas. */
    printf ("Quao preciso voce quer que e^x seja? ");
    scanf ("%d", &nParcelas);

    /** As parcelas da série contém fatoriais,
    que crescem muito rápido. Para contornar
    esse problema reusamos cada parcela já
    calculado para calcular a próxima.

    (!) A técnica de reusar as parcelas se
    baseia nos seguintes fatos:

    Sabemos que
    e^x = parcela_0 + parcela_1 + parcela_2 +
        ... + parcela_k + ... parcela_n

    tal que para cada parcela_k
    parcela_k = x^k/k!

    Deduzimos que a parcela_(k+1) seguinte é
    tal que parcela_(k+1) = x^(k+1)/(k+1)!

    Podemos reescrever parcela_(k+1) em termos
    de parcela_k como

    parcela_(k+1) = (x^k * x) / k! * (k+1)
                = (x^k)/k! * x/(k+1)
                = parcela_k * x/(k+1)

    E assim eliminamos os fatoriais, como queríamos! :) */

    exponencial = 1;
    parcela = 1;

    for (i = 0; i < nParcelas; i++)
    {
        parcela *= expoente / (i + 1);
        exponencial += parcela;
    }

    /// Imprimimos o resultado final.
    printf ("e^%.0f = %f \n", expoente, exponencial);

    return 0;
}
