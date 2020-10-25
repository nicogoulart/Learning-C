/* Procura maior elemento de um arranjo
e informa maior elemento e sua posição.

Entradas: 10 elementos lidos pelo teclado.
Saída: valor e posição do maior elemento. */

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

    //Inicialização de maior e posição
    maior = vet[0];
    pos = 0;

    //Procura do maior e de sua posição
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
