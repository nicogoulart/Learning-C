#include <stdio.h>
/*  Faça um programa que lê 4 valores i, a, b e c onde i é um número inteiro e positivo e a, b, e c
são quaisquer valores reais. O programa deve escrever os valores lidos e:
a) se i = 1, escrever os três valores a, b e c em ordem crescente;
b) se i = 2, escrever os três valores a, b e c em ordem decrescente;
c) se i = 3, escrever os três valores a, b, e c de forma que o maior valor fique entre os outros
dois;
d) se i não for um dos três valores acima, dar uma mensagem indicando isto. */


int main()
{
    int i;
    float a, b, c;

    printf ("A: ");
    scanf ("%f", &a);

    printf ("B: ");
    scanf ("%f", &b);

    printf ("C: ");
    scanf ("%f", &c);

    printf ("i: ");
    scanf ("%d", &i);

    printf ("\n");

    if (i == 1)
    // a) se i = 1, escrever os três valores a, b e c em ordem crescente;
    {
        printf ("ORDEM CRESCENTE: \n");

        if (a < b && a < c)
        {
            printf ("a: %.2f / ", a);

            if (b < c) printf ("b: %.2f / c: %.2f \n", b, c);

            else printf ("c: %.2f / b: %.2f \n", c, b);
        }

        else if (b < a && b < c)
        {
            printf ("b: %.2f / ", b);

            if (a < c) printf ("a: %.2f / c: %.2f \n", a, c);

            else printf ("c: %.2f / a: %.2f \n", c, a);
        }

        else
        {
            printf ("c: %.2f / ", c);

            if (a < b) printf ("a: %.2f / b: %.2f \n", a, b);

            else printf ("b: %.2f / a: %.2f \n", b, a);
        }
    }

    else if (i == 2)
    // b) se i = 2, escrever os três valores a, b e c em ordem decrescente;
    {
        printf ("ORDEM DECRESCENTE: \n");

        if (a > b && a > c)
        {
            printf ("a: %.2f / ", a);

            if (b > c) printf ("b: %.2f / c: %.2f \n", b, c);

            else printf ("c: %.2f / b: %.2f \n", c, b);
        }

        else if (b > a && b > c)
        {
            printf ("b: %.2f / ", b);

            if (a > c) printf ("a: %.2f / c: %.2f \n", a, c);

            else printf ("c: %.2f / a: %.2f \n", c, a);
        }

        else
        {
            printf ("c: %.2f / ", c);

            if (a > b) printf ("a: %.2f / b: %.2f \n", a, b);

            else printf ("b: %.2f / a: %.2f \n", b, a);
        }
    }

    else if (i == 3)
    /* c) se i = 3, escrever os três valores a, b, e c de forma que o maior
    valor fique entre os outros dois; */
    {
        printf ("MAIOR VALOR FICA ENTRE OS OUTROS DOIS: \n");

        if (a < b && a < c)
        {
            printf ("a: %.2f / ", a);

            if (b > c) printf ("b: %.2f / c: %.2f \n", b, c);

            else printf ("c: %.2f / b: %.2f \n", c, b);
        }

        else if (b < a && b < c)
        {
            printf ("b: %.2f / ", b);

            if (a > c) printf ("a: %.2f / c: %.2f \n", a, c);

            else printf ("c: %.2f / a: %.2f \n", c, a);
        }

        else
        {
            printf ("c: %.2f / ", c);

            if (a > b) printf ("a: %.2f / b: %.2f \n", a, b);

            else printf ("b: %.2f / a: %.2f \n", b, a);
        }
    }

    // d) se i não for um dos três valores acima, dar uma mensagem indicando isto. */
    else printf ("Comando invalido. Tente novamente. \n");

    return 0;
}
