#include <stdio.h>

int main()
{
    //Esse código demonstra a utilização de operadores relacionais

    int x = 10, y = 20;
    float m = 10.0, n = 10.0, o = 3.14159265359, p= 3.14159265359;
    double q = 3.14159265359;

    printf("x == y: %d\n", x == y); //Deve retornar 0 (Falso)
    printf("x <= y: %d\n", x <= y); //Deve retornar 1 (Verdadeiro)
    printf("x >= y: %d\n", x >= y); //Deve retornar 0 (Falso)
    printf("x < y: %d\n\n", x < y); //Deve retornar 1 (Verdadeiro)

    n /= 100000;
    n += 100;
    n -= 100;
    n *= 100000;
    printf ("m: %.3f n: %.3f, m == n: %d\n\n", m, n, m == n);
    //m deve retornar 10.000, n deve retornar 9.918, m == n deve retornar 0 (Falso)

    printf("o: %.8f p: %.8f, q == p: %d\n", o, p, o == p);
    //o deve retornar 3.14159265, p deve retornar 3.14159265, o == p deve retornar 1 (Verdadeiro)
    printf("o: %.8f q: %.8f, o == p: %d\n", o, q, o == q);
    //o deve retornar 3.14159265, q deve retornar 3.14159265, o == q deve retornar 0 (Falso)

    return 0;
}
