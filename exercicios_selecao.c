#include <stdio.h>
/* Informa se existem itens suficientes
no estoque da f�brica para atender ao
consumidor.

O programa recebe como entrada o n�mero
de itens no estoque e o n�mero de itens
requisitados.

Caso haja itens suficientes no estoque,
o programa deve retornar o novo valor
do estoque depois de atender ao pedido
do cliente. Do contr�rio, retorna uma
mensagem informando a falta de itens. */

int main()
{
    int estoque, pedido, novo;

    printf ("ATUALIZACAO DO ESTOQUE \n \n");

    printf ("Itens no Estoque: ");
    scanf ("%d", &estoque);

    printf ("Pedido do Cliente: ");
    scanf ("%d", &pedido);

    printf ("\n");

    novo = estoque - pedido;

    if (novo >= 0)
    printf ("Novo Estoque: %d \n", novo);

        else printf ("Nao ha produtos suficientes no estoque. \n");

    return 0;
}
