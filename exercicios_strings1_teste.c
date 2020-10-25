/** Recebe um texto de até 40 caracteres delimitado pelo FIM_DO_TEXTO
e imprime a distribuição de frequência do comprimento de palavras. */

#include <stdio.h>

#define FIM_DO_TEXTO '#'
#define MAX_TEXTO 40 ///O número de caracteres MAX_TEXTO também inclui o FIM_DO_TEXTO.
#define MAX_TAMANHO 40 ///O MAX_TAMANHO das palavras no texto será no máximo MAX_TEXT0,
                        ///situação que acontece quando temos uma única palavra preenchendo
                        ///todo o texto. */

int main()
{
    char texto[MAX_TEXTO]; ///String que vai receber o texto.
    int comprimentos[MAX_TAMANHO] = {0}; ///Preenche todo o vetor com zeros.
    int nCaracteres; ///Número de caracteres.
    int estaLendoPalavra;
    int i;


    ///LEITURA DO TEXTO
    ///Lemos um texto de MAX_TEXTO caracteres delimitado por um FIM_DO_TEXTO.

    printf ("Escreva um texto de ate %d caracteres com um %c no final.\n", MAX_TEXTO, FIM_DO_TEXTO);

    i = 0;

    do
    {
        /** Compomos o texto[] caracter a caracter até atingirmos o
        FIM_DO_TEXTO ou o limite MAX_TEXTO de caracteres. */

        texto[i] = getchar();
        i++;
    }
    while (texto[i-1] != FIM_DO_TEXTO && i < MAX_TEXTO);


    ///CONTAGEM DE CARACTERES
    /** Percorremos o texto[] contando o nCaracteres de cada palavra e
    as categorizamos de acordo com os seus comprimentos[].

    Podemos dividir os caracteres do texto[] em dois tipos: separadores (brancos,
    vírgulas e ponto) e !separadores (os outros caracteres). Palavras são formadas
    exclusivamente por !separadores.

    Então quando percorremos o texto[], podemos nos encontrar em um de dois estados:
    ou estaLendoPalavra ou !estaLendoPalavra. Logo, se sabemos em que estado estamos
    e que caractere estamos lendo, saberemos para qual estado devemos ir. */

    i = 0;
    estaLendoPalavra = 0;

    while (texto[i] != FIM_DO_TEXTO && i < MAX_TEXTO)
    {
        /// Se lemos um não-separador...
        if (texto[i] != ' ' && texto[i] != ',' && texto[i] != '.')
        {
            ///e não estávamos lendo uma palavra antes...
            if (!estaLendoPalavra)
            {
                ///então agora estaremos lendo uma nova palavra
                estaLendoPalavra = 1;

                ///e precisaremos contar a partir do início.
                nCaracteres = 1;
            }

            /** Mas se já estávamos lendo uma palavra... */
            else
            /**...então ainda a estamos lendo e precisamos continuar contando
            os seus caracteres. */
            nCaracteres++;
        }

        /** Se estávamos lendo uma palavra mas lemos um separador... */
        else if (estaLendoPalavra)
        {
            /** ...então já acabamos de ler essa palavra e agora não estamos mais. */
            estaLendoPalavra = 0;
            /** Portanto salvamos o comprimento da palavra na sua respectiva categoria. */
            /** (!) Como os arrays começam no índice 0, contamos as palavras de
            comprimento n em comprimentos[n - 1]. */
            comprimentos[nCaracteres - 1]++;
        }

        /** Passamos para o próximo caracter. */
        i++;
        /** Até lermos o FIM_DO_TEXTO ou já tivermos lido mais do que MAX_TEXTO. */
    }

    ///DETECTEÇÃO E TRATAMENTO DE ERRO
    if (i == MAX_TEXTO)
    printf ("\nVoce precisa por um %c no final do texto!", FIM_DO_TEXTO);

    else
    {
        i = 0;

        while (i < MAX_TAMANHO)
        {
            printf ("\nPalavras com %d caracteres: %d", i + 1, comprimentos[i]);
            i++;
        }
    }

    return 0;
}
