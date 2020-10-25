#include <stdio.h>

int main()
{
    int x, y;

    printf ("Digite as coordenadas x e y: ");
    scanf ("%d %d", &x, &y);

    if(x == 0) { //Testa se o valor de x é zero.
      if (y == 0)
        printf ("Ponto na origem!");
        //Se x e y foram zero, o ponto se encontra na origem (0,0).

      else
        printf ("Ponto no eixo das ordenadas!");
        //Se x for zero e y não, o ponto se encontra no eixo das ordenadas (0,y).
    }

        else //Caso o valor de x seja diferente de zero!

            if (y == 0) //Testa se o valor de y é zero.
                printf ("Ponto no eixo das abcissas!");
                //Se y for zero e x não, o ponto se encontra no eixo das abcissas (x,0).

                else //Caso ambos os valores sejam diferentes de zero!

                    if (x > 0){ //Testa se o valor de x é positivo.
                        if (y > 0)
                            printf ("O ponto se encontra no primeiro quadrante.");
                            //Se x e y forem positivos, então o ponto se encontra no primeiro quadrante (+x,+y).
                        else
                            printf("O ponto se encontra no quarto quadrante.");
                            //Se x for positivo e y negativo, o ponto se encontra no quarto quadrante (+x,-y).
                    }

                        else //Caso x seja negativo.

                            if (y > 0) //Testa se o valor de y é positivo.
                                printf("O ponto se encontra no segundo quadrante.");
                                // Se x for negativo e y positivo, o ponto se encontra no segundo quadrante (-x,+y).

                                else //Caso y seja negativo.
                                    printf("O ponto se encontra no terceiro quadrante.");
                                    //Se x for negativo e y negativo, o ponto se encontra no terceiro quadrante (-x,-y).
    return 0;
}
