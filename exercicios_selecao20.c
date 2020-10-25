#include <stdio.h>
/* Fazer um programa para imprimir o conceito de um aluno, dada a sua nota. Supor notas
inteiras somente. O critério para conceitos é o seguinte:
nota inferiores a 3 - conceito E
nota de 3 a 5 - conceito D
notas 6 e 7 - conceito C
notas 8 e 9 - conceito B
nota 10 - conceito A */

int main()
{
    int nota;

    printf ("Nota do aluno: ");
    scanf ("%d", &nota);

    switch (nota)
    {
        case 0:
        case 1:
        case 2: printf ("Conceito: E \n");
        break;

        case 3:
        case 4:
        case 5: printf ("Conceito: D \n");
        break;

        case 6:
        case 7: printf ("Conceito: C \n");
        break;

        case 8:
        case 9: printf ("Conceito: B \n");
        break;

        case 10: printf ("Conceito: A \n");
        break;

        default: printf ("Nota invalida. Tente novamente. \n");
    }

    return 0;
}
