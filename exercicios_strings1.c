/** 1. Faça um programa que recebe um texto de até 40 caracteres e gera, em um vetor, a
distribuição de freqüência de comprimento de palavras. Considere que no texto
podem aparecer palavras de até 10 caracteres. As palavras podem estar separadas por
espaços em branco ou pelos caracteres vírgula e ponto. O final do texto é sinalizado
pelo caracter #. */

#include <stdio.h>
#include <string.h>

#define MAXCAR 40 ///máximo possível de caracteres na string.
#define MAXPALAVRAS 12 ///máximo possível de palavras para a string.
#define SPACE 32 ///código ascii do espaço.
#define VIRGULA 44 ///código ascii da vírgula.
#define PONTOVIRGULA 59 ///código ascii do ponto-e-vírgula.

int main()
{
    int cont, char_palavras[MAXPALAVRAS];
    char texto[MAXCAR];

    int numero_palavras = 0; ///Inicializa o número de palavras da string.
    char_palavras[numero_palavras] = 0; ///Inicializa o primeiro elemento do arranjo.

    ///Recebe o texto.
    printf("Texto (ate 40 caracteres):\n");
    fgets(texto, MAXCAR - 1, stdin);

    ///Percorre a string até o final ou até encontrar '\0' ou '#'.
    for(cont = 0; cont != '\0' && cont != '#' && cont < MAXCAR; cont++)
    {
        /** Caso encontre espaço, vírgula ou ponto-e-vírgula,
        aumenta o contador do número de palavras e inicializa
        o próximo elemento do arranjo char_palavras. */
        if(texto[cont] == SPACE || texto[cont] == VIRGULA || texto[cont] == PONTOVIRGULA)
        {
            numero_palavras++;
            char_palavras[numero_palavras] = 0;
        }

        /** Do contrário, aumenta o número de
        caracteres da palavra em questão. */
        else char_palavras[numero_palavras]++;
    }

    ///Informa o número de palavras na string.
    printf("\nNUMERO DE PALAVRAS: %d\n\n", numero_palavras);

    /** Percorre todos os elementos válidos do arranjo char_palavras
    e informa o número de caracteres de cada palavra. */
    for(cont = 0; cont < numero_palavras; cont++)
    printf("PALAVRA %d: %d caracteres.\n", cont + 1, char_palavras[cont]);

    return 0;
}
