/** 1. Fa�a um programa que recebe um texto de at� 40 caracteres e gera, em um vetor, a
distribui��o de freq��ncia de comprimento de palavras. Considere que no texto
podem aparecer palavras de at� 10 caracteres. As palavras podem estar separadas por
espa�os em branco ou pelos caracteres v�rgula e ponto. O final do texto � sinalizado
pelo caracter #. */

#include <stdio.h>
#include <string.h>

#define MAXCAR 40 ///m�ximo poss�vel de caracteres na string.
#define MAXPALAVRAS 12 ///m�ximo poss�vel de palavras para a string.
#define SPACE 32 ///c�digo ascii do espa�o.
#define VIRGULA 44 ///c�digo ascii da v�rgula.
#define PONTOVIRGULA 59 ///c�digo ascii do ponto-e-v�rgula.

int main()
{
    int cont, char_palavras[MAXPALAVRAS];
    char texto[MAXCAR];

    int numero_palavras = 0; ///Inicializa o n�mero de palavras da string.
    char_palavras[numero_palavras] = 0; ///Inicializa o primeiro elemento do arranjo.

    ///Recebe o texto.
    printf("Texto (ate 40 caracteres):\n");
    fgets(texto, MAXCAR - 1, stdin);

    ///Percorre a string at� o final ou at� encontrar '\0' ou '#'.
    for(cont = 0; cont != '\0' && cont != '#' && cont < MAXCAR; cont++)
    {
        /** Caso encontre espa�o, v�rgula ou ponto-e-v�rgula,
        aumenta o contador do n�mero de palavras e inicializa
        o pr�ximo elemento do arranjo char_palavras. */
        if(texto[cont] == SPACE || texto[cont] == VIRGULA || texto[cont] == PONTOVIRGULA)
        {
            numero_palavras++;
            char_palavras[numero_palavras] = 0;
        }

        /** Do contr�rio, aumenta o n�mero de
        caracteres da palavra em quest�o. */
        else char_palavras[numero_palavras]++;
    }

    ///Informa o n�mero de palavras na string.
    printf("\nNUMERO DE PALAVRAS: %d\n\n", numero_palavras);

    /** Percorre todos os elementos v�lidos do arranjo char_palavras
    e informa o n�mero de caracteres de cada palavra. */
    for(cont = 0; cont < numero_palavras; cont++)
    printf("PALAVRA %d: %d caracteres.\n", cont + 1, char_palavras[cont]);

    return 0;
}
