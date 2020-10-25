#include <stdio.h>

int main ()
{
    int n, idade, soma, menoridade, contador;
    float media;

    printf ("Informe o numero de pessoas: ");
    scanf ("%d", &n);

    soma = 0;
    menoridade = 0;

    for (contador = 1; contador <= n; contador ++){
        printf ("Informe a idade da pessoa %d: ", contador);
        scanf ("%d", &idade);

        soma = soma + idade;

        if (idade < 18)
            menoridade = menoridade + 1;
    }

    media = (float)soma / n;

    printf ("O numero de pessoas no grupo e %d, a media entre as idade e %.2f e ha %d menores de idade.", n, media, menoridade);

    return 0;
}
