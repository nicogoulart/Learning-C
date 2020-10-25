#include <stdio.h>
#include <math.h>
/* Calcula e imprime todos os "números amigos"
de 2 até 10.000 na tela. */

int main()
{
    int numero1, numero2, numero3, cont;
    /*
    numero1 = Número que será testado no laço.
    numero2 = Somador dos divisores do número1.
    número3 = Somador dos divisores do número2.
    cont = Divisores que são testados no laço
            for aninhado.
    */

    printf ("NUMEROS AMIGOS DE 2 ATE 10.000:\n\n");

    for (numero1 = 2; numero1 <= 10000; numero1++)
    /* Laço principal, que irá testar todos os números
    de 2 até 10.000 em busca de "números amigos". */
    {
        numero2 = 0;
        numero3 = 0;
        //Inicia os somadores zerados.

        for (cont = 1; cont < numero1; cont++)
        /* Laço que irá buscar os divisores do número1
        e a sua respectiva soma (número2). */
        {
            if (numero1 % cont == 0)
                numero2 = numero2 + cont;
                /* Caso o resto da divisão do numero1 pelo
                contador seja zero, significa que ele é um
                divisor e deve ser acrescentado no número2. */
        }

        for (cont = 1; cont < numero2; cont++)
        /* Laço que irá buscar os divisores do número2
        e a sua respectiva soma (número3). */
        {
            if (numero2 % cont == 0)
                numero3 = numero3 + cont;
                /* Caso o resto da divisão do numero2 pelo
                contador seja zero, significa que ele é um
                divisor e deve ser acrescentado no número3. */
        }

        if (numero1 == numero3)
            printf ("%d e %d.\n", numero1, numero2);
    }

    printf ("\n");

    return 0;
}
