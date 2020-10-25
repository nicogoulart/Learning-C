#include <stdio.h>
#include <math.h>
/* BASE GABRIEL
Testa se um número informado está na Base Gabriel.
Caso o resultado seja positivo, faz a conversão do número para decimal.

PRIMEIRA REGRA: Apenas números 0, 1 e 2.
SEGUNDA REGRA: Apenas um número 2.
TERCEIRA REGRA: Apenas zeros ou nada antes do 2.*/

int main()
{
    int testes, numero, cont;
    int digito, caracter;
    int booleano, dig_dois, acumulador, potencia;
    /*
    testes = Número de testes a ser realizado pelo algoritmo.
    numero = Número a ser testado.
    cont = Contador do laço for.
    digito = Digito do número.
    caracter = Variável auxiliar p/ o número a ser testado.
    booleano = Booleano.
    dig_dois = Número de digitos 2.
    acumulador = Acumulador do cálculo da base.
    potencia = Potência para o cálculo da base.
    */

    printf ("Informe o numero de testes: ");
    scanf ("%d", &testes);
    //Recebe o número de testes a serem realizados.

    printf ("\n");

    for (cont = 0; cont < testes; cont++)
    //Laço for para a realização dos testes.
    {
        acumulador = 0; //Acumulador do cálculo da base.
        potencia = 1; //Potência para o cálculo da base.

        booleano = 0; //Booleano.

        digito = 0; //Começa o digito com o valor zero.
        dig_dois = 0; //Contador de números 2 para a REGRA DOIS.

        printf ("Informe o numero: ");
        scanf ("%d", &numero);
        //Recebe o número a ser testado.

        caracter = numero; //Coloca o número na variável auxiliar.

        while (caracter > 0 && booleano == 0)
        /* Realiza o laço while para verificar se
        o número está na Base Gabriel. Enquanto o
        caracter for maior do que zero e o booleano
        continuar com o valor inicial. */
        {
            if (digito == 1)
            /* Caso o digito anterior seja igual a 1, testa se
            o próximo digito será 2. Caso seja, informa que o
            número não é da Base Gabriel. */
            {
                digito = caracter % 10;
                //O digito será igual ao resto da divisão por 10.

                caracter = caracter / 10;
                //Divide o número por 10 para a próxima retirada do digito.

                if (digito == 2)
                //TERCEIRA REGRA: Apenas zeros ou nada antes do 2.
                    booleano ++; //Caso exista algum número 1 antes do 2, sai do laço.

                    else if (digito != 0 && digito != 1 && digito != 2)
                    //PRIMEIRA REGRA: Apenas números 0, 1 e 2.
                        booleano ++; //Caso o número seja diferente de 0, 1 ou 2, sai do laço while.

                        else if (digito == 2)
                        //SEGUNDA REGRA: Apenas um número 2.
                            dig_dois ++;

                            if (dig_dois > 1)
                                booleano ++; //Caso existam mais de dois números dois, sai do laço while.
            }

                else
                //Caso o digito anterior seja diferente de 1, realiza a operação normal.
                {
                    digito = caracter % 10;
                    //O digito será igual ao resto da divisão por 10.

                    caracter = caracter / 10;
                    //Divide o número por 10 para a próxima retirada do digito.

                        if (digito != 0 && digito != 1 && digito != 2)
                        //PRIMEIRA REGRA: Apenas números 0, 1 e 2.
                            booleano ++; //Caso o número seja diferente de 0, 1 ou 2, sai do laço while.

                            else if (digito == 2)
                            //SEGUNDA REGRA: Apenas um número 2.
                                dig_dois ++;

                                if (dig_dois > 1)
                                    booleano ++;
                }

            acumulador = acumulador + digito * (pow(2, potencia) - 1);
            //Calcula a conversão da Base Gabriel para decimal.
            potencia ++;
        }

        if (booleano == 0)
            printf ("Conversao do numero %d para decimal: %d\n\n", numero, acumulador);

            else printf ("Esse numero nao esta na Base Gabriel.\n\n");
            //Informa ao usuario que o número não está na Base Gabriel.
    }

    return 0;
}
