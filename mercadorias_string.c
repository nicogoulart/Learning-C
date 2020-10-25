/* Informar o c�digo da mercadoria com pre�o determinado.
Entrada: pre�os de 90 mercadorias.
Sa�da: impress�o do c�digo da mercadoria que vale R$ 123,00 */

#include <stdio.h>
#define CODMAX 15
#define CODMIN 10

int main ()
{
    float preco[CODMAX - CODMIN + 1];
    int cod;
    int achou; /* Indicador ("flag"): vale 0 ou 1,
                valor verdadeiro indica que encontrou
                o c�digo. */

    for (cod = 0; cod <= CODMAX - CODMIN; cod ++)
    {
        printf ("Entre o preco da mercadoria com o codigo %d: ", CODMIN + cod);
        scanf ("%f", &preco[cod]);
    }

    //Procurar produto de pre�o R$ 123,00.

    achou = 0;
    cod = 0;

    do
    {
        if (preco[cod] == 123)
            achou = 1;

            else
                cod ++;
    }
    while (cod <= CODMAX - CODMIN && achou == 0);

    if (achou == 1)
        printf ("Codigo desejado: %d", CODMIN + cod);

        else
            printf ("Codigo nao encontrado!");

    return 0;
}
