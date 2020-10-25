#include <stdio.h>

int main()
{
    int nota;

    printf ("Digite a nota do aluno (0 a 10): ");
    scanf ("%d", &nota);

    switch (nota){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf ("Aluno reprovado!");
            break;
        case 6:
        case 7:
        case 8:
        case 9: printf ("Aluno aprovado!");
            break;
        case 10: printf ("Aluno aprovado com louvor!");
            break;
        default: printf ("Nota invalida.");
    }

    return 0;
}
