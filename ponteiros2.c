#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, *c, d, e, *f, *g;

    a = 10;
    c = &a; //Ponteiro "c" recebe endereço da variável "a".
    b = *c; //Variável "b" recebe valor apontado pelo ponteiro "c".
    d = c; //Variável "d" recebe valor do endereço do ponteiro "c."
    e = &c; //Variável "e" recebe endereço do ponteiro "c".
    f = a; //Ponteiro "f" recebe o endereço e valor de "a".
    g = c; //Ponteiro "g" recebe o valor do ponteiro "c".

    printf ("ENDERECOS DE MEMORIA: \n\n");
    printf ("a = %p \n", a);
    printf ("b = %p \n", b);
    printf ("c = %p \n", c);
    printf ("*c = %p \n", *c);
    printf ("d = %p \n", d);
    printf ("e = %p \n", e);
    printf ("f = %p \n", f);
    printf ("g = %p \n", g);
    printf ("*g = %p \n", *g);

    printf ("VALORES DAS VARIAVEIS E PONTEIROS: \n\n");
    printf ("a = %d \n", a);
    printf ("b = %d \n", b);
    printf ("c = %d \n", c);
    printf ("*c = %d \n", *c);
    printf ("d = %d \n", d);
    printf ("e = %d \n", e);
    printf ("f = %d \n", f);
    printf ("g = %d \n", g);
    printf ("*g = %d \n", *g);

    return 0;
}
