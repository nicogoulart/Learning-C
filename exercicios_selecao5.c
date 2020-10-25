#include <stdio.h>
/* Recebe o código de cinco cliente
e o preco de suas compras. Retorna:

a) o valor total pago pelos 5 clientes;
b) o valor da compra média efetuada;
c) o código dos clientes que efetuaram compras superiores a 20 reais;
e) o número de clientes que efetuaram compras inferiores a 50 reais. */

int main()
{
    int cod1, cod2, cod3, cod4, cod5;
    float preco1, preco2, preco3, preco4, preco5;
    float total, compra_media;

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

    //a) o valor total pago pelos 5 clientes;
    total = preco1 + preco2 + preco3 + preco4 + preco5;
    printf ("Total das compras dos clientes: R$ %.2f \n \n", total);

    //b) o valor da compra média efetuada;
    return 0;
}
