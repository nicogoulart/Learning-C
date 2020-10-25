/* Procura maior elemento de um arranjo
e informa maior elemento e sua posi��o.

Entradas: 10 elementos lidos pelo teclado.
Sa�da: valor e posi��o do maior elemento. */

#include <stdio.h>
#define TAMVET 10

int main ()
{
    float vet [TAMVET];
    int index;
    int pos;
    float maior;

    //Preencher vetor por leitura.
    for (index = 0; index < TAMVET; index ++)
    {
        printf ("Digite o elemento %d do vetor: ", index + 1);
        scanf ("%f", &vet[index]);
    }

    //Inicializa��o de maior e posi��o
    maior = vet[0];
    pos = 0;

    //Procura do maior e de sua posi��o
    for (index = 1; index < TAMVET; index ++)
        if (vet [index] > maior)
        {
        maior = vet [index];
        pos = index;
        }

    //Resposta
    printf ("Maior valor (%.2f) ocorre na posicao (%d).", maior, pos + 1);

    return 0;
}
