/* Fazer um programa que calcule o resultado final das eleições para a presidência de um clube, sabendo-
se que:
a) existem três chapas concorrendo;
b) os eleitores votaram fornecendo o número da chapa escolhida (valor entre 1 e 3);
O programa deverá processar os votos recebidos e fornecer o total de votos de cada uma das chapas, o
total de votos em branco (valor 0) e o total de votos nulos. Além disso, o programa deverá verificar se a
chapa mais votada é vencedora no primeiro turno da eleição (mais de 50% dos votos) ou se deverá
ocorrer um segundo turno. */

#include <stdio.h>

int main()
{
    int membros_clube, metade, voto, cont;
    int chapa1 = 0, chapa2 = 0, chapa3 = 0, branco = 0, nulo = 0, validos = 0;

    printf("Informe o numero de membros do clube: ");
    scanf("%d", &membros_clube);

    printf("\n");

    for(cont = 0; cont < membros_clube; cont++)
    {
        printf("Voto %d: Chapa ", cont + 1);
        scanf("%d", &voto);

        if(voto == 0) branco++;

        else if(voto == 1)
        {
            chapa1++;
            validos++;
        }

        else if(voto == 2)
        {
            chapa2++;
            validos++;
        }

        else if(voto == 3)
        {
            chapa3++;
            validos++;
        }

        else nulo++;
    }

    metade = validos / 2;

    printf("\nResultado da votacao: ");
    printf("\nChapa 1: %d", chapa1);
    printf("\nChapa 2: %d", chapa2);
    printf("\nChapa 3: %d", chapa3);
    printf("\nBrancos: %d", branco);
    printf("\nNulos: %d\n\n", nulo);

    //CHAPA 1
    if(chapa1 > chapa2 && chapa1 > chapa3)
    {
        //C1 vencedor invicto.
        if(chapa1 > metade)
        printf("Chapa 1 vencedor invicto!\n");

        //C1 vencedora. Necessidade de segundo turno com a C2.
        else if(chapa2 >= chapa3)
        printf("Chapa 1 vencedora. Necessidade de segundo turno com a Chapa 2.\n");

        //C1 vencedora. Necessidade de segundo turno com a C3.
        else printf("Chapa 1 vencedora. Necessidade de segundo turno com a Chapa 3.\n");
    }

    //CHAPA 2
    else if(chapa2 > chapa1 && chapa2 > chapa3)
    {
        //C2 vencedor invicto.
        if(chapa2 > metade)
        printf("Chapa 2 vencedor invicto!\n");

        //C2 vencedora. Necessidade de segundo turno com a C1.
        else if(chapa1 >= chapa3)
        printf("Chapa 2 vencedora. Necessidade de segundo turno com a Chapa 1.\n");

        //C2 vencedora. Necessidade de segundo turno com a C3.
        else printf("Chapa 2 vencedora. Necessidade de segundo turno com a Chapa 3.\n");
    }

    //CHAPA 3
    else if(chapa3 > chapa1 && chapa3 > chapa2)
    {
        //C3 vencedor invicto.
        if(chapa3 > metade)
        printf("Chapa 3 vencedor invicto!\n");

        //C3 vencedora. Necessidade de segundo turno com a C1.
        else if(chapa1 >= chapa2)
        printf("Chapa 3 vencedora. Necessidade de segundo turno com a Chapa 1.\n");

        //C3 vencedora. Necessidade de segundo turno com a C2.
        else printf("Chapa 3 vencedora. Necessidade de segundo turno com a Chapa 2.\n");
    }

    //Empate triplo!
    else if(chapa1 == chapa2 && chapa1 == chapa3)
    printf("Empate Triplo! Necessidade de segundo turno.\n");

    //Empate C1 & C2.
    else if(chapa1 == chapa2)
    printf("Empate entre Chapa 1 e Chapa 2. Necessidade de segundo turno.\n");

    //Empate C1 & C3.
    else if(chapa1 == chapa3)
    printf("Empate entre Chapa 1 e Chapa 3. Necessidade de segundo turno.\n");

    //Empate C2 & C3.
    else printf("Empate entre Chapa 2 e Chapa 3. Necessidade de segundo turno.\n");

    return 0;
}
