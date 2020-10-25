/* Retorna os divisores ou o fatorial do número informado
    pelo usuário, de acordo com a escolha do operador.*/

#include <stdio.h>

int main()
{
    int numero, fatorial, contador;
    char operador;
    /*
    numero = numero informado pelo usuário.
    fatorial = o fatorial do número.
    contador = contadores do laços do código.
    operador = caracter informado pelo usuário,
                que pode escolher entre 'd', 'D'
                ou 'f' e 'F', para escolher entre
                receber os divisores ou o fatorial
                do número informado, respectivamente.
    */

    fatorial = 1; //Inicia a variável 'fatorial'.

    printf ("Digite o numero e o operador: ");
    scanf ("%d %c", &numero, &operador);
    /* Leitura do número e do operador,
    informados pelo usuário. */

    if (numero <= 0 ) printf ("Numero invalido.\n");
    /* Se o número for negativo ou igual a zero,
    retorna que o valor é inválido. */


        else if (operador != 'd' && operador != 'D' && operador != 'f' && operador != 'F')
            printf ("Operador invalido.\n");
            /* Se o operador informado for diferente dos caracteres válidos, então
            retorna que o operador é inválido. */

            else
            {

                if (operador == 'd' || operador == 'D')
                /* Caso o operador seja 'd' ou 'D', realiza
                as operações abaixo. */
                {
                    printf ("Divisores de %d: ", numero);

                    for (contador = 1; contador <= numero; contador++)
                    /* Laço que realiza a demonstração dos divisores.
                    Ele começa com o contador valendo 1 e vai se
                    incrementando até chegar ao valor do número. */
                    {
                        if (!(numero % contador))
                        /* Se o resto da divisão entre o número
                        e o contador for zero então ele é um divisor,
                        e portanto é impresso na tela. */
                        {
                            if (contador < numero)
                            printf ("%d, ", contador);

                                else
                                printf ("%d.", contador);
                                /* Se o contador for igual ao número,
                                então ele termina a lista dos divisores. */
                        }
                    }
                }

                    else
                    /* Caso o operador seja 'f' ou 'F', realiza as
                    operações abaixo. */
                    {
                        printf ("Fatorial de %d = ", numero);

                        for (contador = numero; contador >= 1; contador--)
                        /* Laço que realiza o cálculo da fatorial do número.
                        O contador começa com o valor do número e vai
                        decrescendo até chegar a um valor maior ou igual a 1. */
                        {
                            fatorial = fatorial * contador;
                            /* Multiplica o valor do fatorial
                             com o contador. */

                            if (contador > 1)
                            printf("%d x ", contador);

                                else
                                printf("%d = %d\n", contador, fatorial);
                                /* Quando o contador for igual a 1,
                                termina a listagem dos multiplicadores
                                e retorna o fatorial do número. */
                        }
                    }
            }

    return 0;
}
