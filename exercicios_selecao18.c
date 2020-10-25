#include <stdio.h>
#include <math.h>
/* Ler 4 valores a, b, c, e x. Para os valores lidos:
a) se x='a', verificar se os primeiros três valores podem ser coeficientes de uma equação do 2º
grau com raízes reais. Neste caso, calcular e imprimir estas raízes;
b) se x='b', verificar se os primeiros três valores podem formar um triângulo; neste caso,
imprimir a área deste triângulo;
c) se x='c' e se todos os valores forem positivos, calcular e imprimir a área do trapézio que
tem a e b por bases e c por altura;
d) se x='d', considerar que os três primeiros valores, se positivos, correspondem a resistências
elétricas e calcular a resistência equivalente considerando sua associação em série e em
paralelo;
e) para qualquer outro valor de x emitir uma mensagem de erro.
Obs: informar também se a operação solicitada não pode ser executada, dando o motivo. */

int main()
{
    float a, b, c, delta, bhaskara, raiz1, raiz2;
    float trapezio, serie, paralelo;
    char x;

    printf ("a: ");
    scanf ("%f", &a);

    printf ("b: ");
    scanf ("%f", &b);

    printf ("c: ");
    scanf ("%f", &c);

    fflush(stdin);

    printf ("X: ");
    scanf ("%c", &x);

    printf ("\n");

    if (x == 'a' || x == 'A')
    {
        printf ("EQUACAO DO SEGUNDO GRAU \n");
        delta = pow(b, 2) - 4.0 * a * c;

        if (delta > 0)
        {
            raiz1 = (- b + sqrt(delta)) / (a * 2.0);
            raiz2 = (- b - sqrt(delta)) / (a * 2.0);

            printf ("x1: %.2f / x2: %.2f \n", raiz1, raiz2);
        }

        else if (delta == 0)
        {
            raiz1 = (- b + sqrt(delta)) / (a * 2.0);
            printf ("x1 & x2: %.2f \n", raiz1);
        }

        else printf ("Essa equacao nao possui raizes reais. \n");
    }

    else if (x == 'b' || x == 'B')
    {
        printf ("TRIANGULO \n");

        if ((a + b) > c && (a + c) > b && (b + c) > a)
        {
            if (a == b && b == c)
            printf ("Triangulo Equilatero. \n");

            else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
            printf ("Triangulo Isosceles. \n");

            else printf ("Triangulo Escaleno. \n");
        }

        else printf ("Nao e um triangulo. \n");
    }

    else if (x == 'c' || x == 'C')
    {
        printf ("TRAPEZIO \n");

        trapezio = ((a + b) * c) / 2;
        printf ("Area do Trapezio: %.2f \n", trapezio);
    }

    else if (x == 'd' || x == 'D')
    {
        printf ("RESISTENCIA EQUIVALENTE \n");

        serie = a + b + c;
        paralelo = 1 / (1/a + 1/b + 1/c);

        printf ("Circuito em Serie: %.2f \n", serie);
        printf ("Circuito em Paralelo: %.2f \n", paralelo);
    }

    else printf ("Valor invalido. Tente novamente. \n");

    return 0;
}
