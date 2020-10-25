#include <stdio.h>
/* Recebe cinco códigos e cinco preços
de produtos e retorna:

a) o código dos produtos cujo preço é superior a 20 reais;
b) o código e o preço correspondente dos produtos cujo preço é inferior a 10 reais;
c) o preço médio dos produtos;
d) o número de produtos com preço inferior à média. */

int main()
{
    int inferior;
    int cod1, cod2, cod3, cod4, cod5;
    float preco1, preco2, preco3, preco4, preco5;
    float media;

    inferior = 0;

    printf ("CINCO CODIGOS E CINCO PRECOS \n \n");

    printf ("Codigo 1: ");
    scanf ("%d", &cod1);
    printf ("Preco 1: R$ ");
    scanf ("%f", &preco1);

    printf ("\n");

    printf ("Codigo 2: ");
    scanf ("%d", &cod2);
    printf ("Preco 2: R$ ");
    scanf ("%f", &preco2);

    printf ("\n");

    printf ("Codigo 3: ");
    scanf ("%d", &cod3);
    printf ("Preco 3: R$ ");
    scanf ("%f", &preco3);

    printf ("\n");

    printf ("Codigo 4: ");
    scanf ("%d", &cod4);
    printf ("Preco 4: R$ ");
    scanf ("%f", &preco4);

    printf ("\n");

    printf ("Codigo 5: ");
    scanf ("%d", &cod5);
    printf ("Preco 5: R$ ");
    scanf ("%f", &preco5);

    printf ("\n");

    media = (preco1 + preco2 + preco3 + preco4 + preco5) / 5;

    //a) o código dos produtos cujo preço é superior a 20 reais;
    printf ("Codigo dos produtos cujo preco e superior a R$ 20,00 \n");

    if (preco1 > 20.0)
    printf ("Codigo 1: %d \n", cod1);

    if (preco2 > 20.0)
    printf ("Codigo 2: %d \n", cod2);

    if (preco3 > 20.0)
    printf ("Codigo 3: %d \n", cod3);

    if (preco4 > 20.0)
    printf ("Codigo 4: %d \n", cod4);

    if (preco5 > 20.0)
    printf ("Codigo 5: %d \n", cod5);

    printf ("\n");

    //b) o código e o preço correspondente dos produtos cujo preço é inferior a 10 reais;
    printf ("Codigo e Preco dos produtos cujo preco e inferior a 10 reais \n");

    if (preco1 < 10.0)
    printf ("Codigo 1: %d  //  Preco 1: R$ %.2f \n", cod1, preco1);

    if (preco2 < 10.0)
    printf ("Codigo 2: %d  //  Preco 2: R$ %.2f \n", cod2, preco2);

    if (preco3 < 10.0)
    printf ("Codigo 3: %d  //  Preco 3: R$ %.2f \n", cod3, preco3);

    if (preco4 < 10.0)
    printf ("Codigo 4: %d  //  Preco 4: R$ %.2f \n", cod4, preco4);

    if (preco5 < 10.0)
    printf ("Codigo 5: %d  //  Preco 5: R$ %.2f \n", cod5, preco5);

    printf ("\n");

    //c) o preço médio dos produtos;
    printf ("Preco Medio: R$ %.2f \n", media);
    printf ("\n");

    //d) o número de produtos com preço inferior à média.

    if (preco1 < media)
    inferior ++;

    if (preco2 < media)
    inferior ++;

    if (preco3 < media)
    inferior ++;

    if (preco4 < media)
    inferior ++;

    if (preco5 < media)
    inferior ++;

    printf ("Numero de produtos com preco inferior a media: %d \n", inferior);

    return 0;
}
