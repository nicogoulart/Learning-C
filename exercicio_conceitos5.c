/* Dada uma matriz inteira m com número de linhas igual a tlinha e
número de colunas igual a tcoluna, preenchê-la por leitura e imprimir:
a) o maior elemento de cada coluna da matriz;
b) a média dos elementos de cada linha;
c) o produto de todos os elementos diferentes de zero;
d) quantos elementos são negativos;
e) posição ocupada (linha-coluna) por um elemento cujo valor será
lido pelo programa (via teclado). Informar se houver mais de uma ocorrencia,
ou se o elemento não estiver presente na matriz; */


#include <stdio.h>
#define tlinha 5
#define tcoluna 5

int main()
{
    int coluna, linha, maior;

    for (coluna = 0; coluna < tcoluna; coluna++)
    //a) O maior elemento de cada coluna da matriz;
    {
        maior = matriz[0][coluna];

        for (linha = 1; linha < tlinha; linha++)
            if (maior < matriz[linha][coluna])
                maior = matriz[linha][coluna];

        printf ("Maior da coluna %d = %d", coluna, maior);
    }

return 0;
}
