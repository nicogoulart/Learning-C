#include <stdio.h>

//Função que calcula o peso ideal
float pesoideal (char sex, float alt)
{
    float peso;

    if (sex == 'M' || sex == 'm')
        peso = alt * 72.7 - 58;

        else

            if (sex == 'F' || sex == 'f')
                peso = alt * 62.1 - 44.7;

    return peso;
}

int main()
{
    char sexo;

    float altura, peso;

    puts ("Entre o sexo da pessoa (M ou F): ");
    scanf (" %c", &sexo);

    puts ("Entre a altura da pessoa (em metros): ");
    scanf ("%f", &altura);

    //Chamada da função
    peso = pesoideal(sexo, altura);

    printf ("O peso ideal da pessoa e %.2f\n", peso);

    return 0;
}
