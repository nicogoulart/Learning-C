#include <stdio.h>
/* O departamento que controla o �ndice de polui��o do meio ambiente
fiscaliza 3 grupos de ind�strias que s�o altamente poluidoras do meio ambiente. O �ndice de
polui��o aceit�vel varia de 0.05 at� 0.25. Se o �ndice sobe para 0.3 as ind�strias do 1� grupo
s�o intimadas a suspenderem suas atividades; se o �ndice sobe para 0.4, as do 1� e do 2� grupos
s�o intimadas a suspenderem suas atividades; e se o �ndice sobe para 0.5, todos os tr�s grupos
devem ser notificados a paralisarem suas atividades. Escreva um programa que l� o �ndice de
polui��o medido e emite a notifica��o adequada aos diferentes grupos de empresas. */

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
