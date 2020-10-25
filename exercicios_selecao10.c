#include <stdio.h>
/* O departamento que controla o índice de poluição do meio ambiente
fiscaliza 3 grupos de indústrias que são altamente poluidoras do meio ambiente. O índice de
poluição aceitável varia de 0.05 até 0.25. Se o índice sobe para 0.3 as indústrias do 1º grupo
são intimadas a suspenderem suas atividades; se o índice sobe para 0.4, as do 1º e do 2º grupos
são intimadas a suspenderem suas atividades; e se o índice sobe para 0.5, todos os três grupos
devem ser notificados a paralisarem suas atividades. Escreva um programa que lê o índice de
poluição medido e emite a notificação adequada aos diferentes grupos de empresas. */

int main()
{
    float ind;

    printf ("Indice de Poluicao: ");
    scanf ("%f", &ind);

    if (ind < 0.3)
    printf ("Indice normalizado. \n")

        else if (ind >= 0.3 && ind < 0.4)
        printf ("Industrias do grupo 1 devem suspender suas atividades. \n");

            else if (ind >= 0.4 && ind < 0.5)
            printf ("Industrias do grupo 1 e 2 devem suspender suas atividades. \n");

                else printf ("Todas as industrias devem suspender suas atividades. \n");

    return 0;
}
