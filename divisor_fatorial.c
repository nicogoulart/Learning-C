/* Retorna os divisores ou o fatorial do n�mero informado
    pelo usu�rio, de acordo com a escolha do operador.*/

#include <stdio.h>

int main()
{
    int numero, fatorial, contador;
    char operador;
    /*
    numero = numero informado pelo usu�rio.
    fatorial = o fatorial do n�mero.
    contador = contadores do la�os do c�digo.
    operador = caracter informado pelo usu�rio,
                que pode escolher entre 'd', 'D'
                ou 'f' e 'F', para escolher entre
                receber os divisores ou o fatorial
                do n�mero informado, respectivamente.
    */

    fatorial = 1; //Inicia a vari�vel 'fatorial'.

    printf ("Digite o numero e o operador: ");
    scanf ("%d %c", &numero, &operador);
    /* Leitura do n�mero e do operador,
    informados pelo usu�rio. */

    if (numero <= 0 ) printf ("Numero invalido.\n");
    /* Se o n�mero for negativo ou igual a zero,
    retorna que o valor � inv�lido. */


        else if (operador != 'd' && operador != 'D' && operador != 'f' && operador != 'F')
            printf ("Operador invalido.\n");
            /* Se o operador informado for diferente dos caracteres v�lidos, ent�o
            retorna que o operador � inv�lido. */

            else
            {

                if (operador == 'd' || operador == 'D')
                /* Caso o operador seja 'd' ou 'D', realiza
                as opera��es abaixo. */
                {
                    printf ("Divisores de %d: ", numero);

                    for (contador = 1; contador <= numero; contador++)
                    /* La�o que realiza a demonstra��o dos divisores.
                    Ele come�a com o contador valendo 1 e vai se
                    incrementando at� chegar ao valor do n�mero. */
                    {
                        if (!(numero % contador))
                        /* Se o resto da divis�o entre o n�mero
                        e o contador for zero ent�o ele � um divisor,
                        e portanto � impresso na tela. */
                        {
                            if (contador < numero)
                            printf ("%d, ", contador);

                                else
                                printf ("%d.", contador);
                                /* Se o contador for igual ao n�mero,
                                ent�o ele termina a lista dos divisores. */
                        }
                    }
                }

                    else
                    /* Caso o operador seja 'f' ou 'F', realiza as
                    opera��es abaixo. */
                    {
                        printf ("Fatorial de %d = ", numero);

                        for (contador = numero; contador >= 1; contador--)
                        /* La�o que realiza o c�lculo da fatorial do n�mero.
                        O contador come�a com o valor do n�mero e vai
                        decrescendo at� chegar a um valor maior ou igual a 1. */
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
                                e retorna o fatorial do n�mero. */
                        }
                    }
            }

    return 0;
}
