/** 2. Dado um texto, identificar cada palavra deste texto e verificar se é
palíndroma. Uma palavra palíndroma é aquela que apresenta a mesma grafia
quando lida a partir do início ou de trás para diante.
Exemplo: RIR, SOLOS, ASA, RALAR, AMA.

O programa deve utilizar uma função booleana para verificar se uma palavra
identificada no texto é palíndroma. A saída do programa deve ser uma tabela
listando as palavras identificadas e, para cada uma, a mensagem dizendo se é
ou não palíndroma. */

#include <stdio.h>
#include <string.h>

#define MAXCAR 20
#define FIM '#'

int main()
{
    char texto[MAXCAR];

    printf("Escreva um texto de ate %d caracteres terminado em #:\n", MAXCAR);

    return 0;
}
