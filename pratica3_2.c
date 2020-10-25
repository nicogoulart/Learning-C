#include <stdio.h>
#include <math.h>
/* BASE GABRIEL
Testa se um n�mero informado est� na Base Gabriel.
Caso o resultado seja positivo, faz a convers�o do n�mero para decimal.

PRIMEIRA REGRA: Apenas n�meros 0, 1 e 2.
SEGUNDA REGRA: Apenas um n�mero 2.
TERCEIRA REGRA: Apenas zeros ou nada antes do 2.*/

int main()
{
    int testes, numero, cont;
    int digito, caracter;
    int booleano, dig_dois, acumulador, potencia;
    /*
    testes = N�mero de testes a ser realizado pelo algoritmo.
    numero = N�mero a ser testado.
    cont = Contador do la�o for.
    digito = Digito do n�mero.
    caracter = Vari�vel auxiliar p/ o n�mero a ser testado.
    booleano = Booleano.
    dig_dois = N�mero de digitos 2.
    acumulador = Acumulador do c�lculo da base.
    potencia = Pot�ncia para o c�lculo da base.
    */

    printf ("Informe o numero de testes: ");
    scanf ("%d", &testes);
    //Recebe o n�mero de testes a serem realizados.

    printf ("\n");

    for (cont = 0; cont < testes; cont++)
    //La�o for para a realiza��o dos testes.
    {
        acumulador = 0; //Acumulador do c�lculo da base.
        potencia = 1; //Pot�ncia para o c�lculo da base.

        booleano = 0; //Booleano.

        digito = 0; //Come�a o digito com o valor zero.
        dig_dois = 0; //Contador de n�meros 2 para a REGRA DOIS.

        printf ("Informe o numero: ");
        scanf ("%d", &numero);
        //Recebe o n�mero a ser testado.

        caracter = numero; //Coloca o n�mero na vari�vel auxiliar.

        while (caracter > 0 && booleano == 0)
        /* Realiza o la�o while para verificar se
        o n�mero est� na Base Gabriel. Enquanto o
        caracter for maior do que zero e o booleano
        continuar com o valor inicial. */
        {
            if (digito == 1)
            /* Caso o digito anterior seja igual a 1, testa se
            o pr�ximo digito ser� 2. Caso seja, informa que o
            n�mero n�o � da Base Gabriel. */
            {
                digito = caracter % 10;
                //O digito ser� igual ao resto da divis�o por 10.

                caracter = caracter / 10;
                //Divide o n�mero por 10 para a pr�xima retirada do digito.

                if (digito == 2)
                //TERCEIRA REGRA: Apenas zeros ou nada antes do 2.
                    booleano ++; //Caso exista algum n�mero 1 antes do 2, sai do la�o.

                    else if (digito != 0 && digito != 1 && digito != 2)
                    //PRIMEIRA REGRA: Apenas n�meros 0, 1 e 2.
                        booleano ++; //Caso o n�mero seja diferente de 0, 1 ou 2, sai do la�o while.

                        else if (digito == 2)
                        //SEGUNDA REGRA: Apenas um n�mero 2.
                            dig_dois ++;

                            if (dig_dois > 1)
                                booleano ++; //Caso existam mais de dois n�meros dois, sai do la�o while.
            }

                else
                //Caso o digito anterior seja diferente de 1, realiza a opera��o normal.
                {
                    digito = caracter % 10;
                    //O digito ser� igual ao resto da divis�o por 10.

                    caracter = caracter / 10;
                    //Divide o n�mero por 10 para a pr�xima retirada do digito.

                        if (digito != 0 && digito != 1 && digito != 2)
                        //PRIMEIRA REGRA: Apenas n�meros 0, 1 e 2.
                            booleano ++; //Caso o n�mero seja diferente de 0, 1 ou 2, sai do la�o while.

                            else if (digito == 2)
                            //SEGUNDA REGRA: Apenas um n�mero 2.
                                dig_dois ++;

                                if (dig_dois > 1)
                                    booleano ++;
                }

            acumulador = acumulador + digito * (pow(2, potencia) - 1);
            //Calcula a convers�o da Base Gabriel para decimal.
            potencia ++;
        }

        if (booleano == 0)
            printf ("Conversao do numero %d para decimal: %d\n\n", numero, acumulador);

            else printf ("Esse numero nao esta na Base Gabriel.\n\n");
            //Informa ao usuario que o n�mero n�o est� na Base Gabriel.
    }

    return 0;
}
