#include <stdio.h>
#define DIGITOS 6

int main ()
{
    int dv, dc, cc[DIGITOS], cont, calc, sp;
    int np[DIGITOS] = {1,2,3,5,7,11};

    dc = 0;
    calc = 0;
    sp = 0;

        do
        {
        for (cont = 0; cont < DIGITOS; cont++)
        {
            printf ("Informe o digito %d: ", cont + 1);
            scanf ("%d", &cc[cont]);
        }

        printf ("Informe o digito verificador: ");
        scanf ("%d", &dv);

        for (cont = 0; cont < DIGITOS; cont++)
        {
            calc = cc[cont] * np[cont];
            sp = sp + calc;
        }

        dc = sp % 9;

        if (dc != dv)
            printf ("Codigo incorreto. Tente novamente.\n");
        }
        while (dc != dv);

        printf ("\nCodigo da conta: %d\n", cc);
        printf ("Digito verificador: %d\n", dv);
        printf ("DIGITADO CORRETAMENTE.\n");

    return 0;
}
