#include <stdio.h>
#include <math.h>
/* Calcula e imprime todos os "n�meros amigos"
de 2 at� 10.000 na tela. */

int main()
{
    int numero1, numero2, numero3, cont;
    /*
    numero1 = N�mero que ser� testado no la�o.
    numero2 = Somador dos divisores do n�mero1.
    n�mero3 = Somador dos divisores do n�mero2.
    cont = Divisores que s�o testados no la�o
            for aninhado.
    */

    printf ("NUMEROS AMIGOS DE 2 ATE 10.000:\n\n");

    for (numero1 = 2; numero1 <= 10000; numero1++)
    /* La�o principal, que ir� testar todos os n�meros
    de 2 at� 10.000 em busca de "n�meros amigos". */
    {
        numero2 = 0;
        numero3 = 0;
        //Inicia os somadores zerados.

        for (cont = 1; cont < numero1; cont++)
        /* La�o que ir� buscar os divisores do n�mero1
        e a sua respectiva soma (n�mero2). */
        {
            if (numero1 % cont == 0)
                numero2 = numero2 + cont;
                /* Caso o resto da divis�o do numero1 pelo
                contador seja zero, significa que ele � um
                divisor e deve ser acrescentado no n�mero2. */
        }

        for (cont = 1; cont < numero2; cont++)
        /* La�o que ir� buscar os divisores do n�mero2
        e a sua respectiva soma (n�mero3). */
        {
            if (numero2 % cont == 0)
                numero3 = numero3 + cont;
                /* Caso o resto da divis�o do numero2 pelo
                contador seja zero, significa que ele � um
                divisor e deve ser acrescentado no n�mero3. */
        }

        if (numero1 == numero3)
            printf ("%d e %d.\n", numero1, numero2);
    }

    printf ("\n");

    return 0;
}
