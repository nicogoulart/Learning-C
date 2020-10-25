#include <stdio.h>

int main()
{
    int soma_idades, idade, contador;
    float media_idades;

    soma_idades = 0;

    for (contador = 1; contador <= 5; contador ++){
        printf ("Informe a idade do aluno %d: ", contador);
        scanf ("%d", &idade);

        soma_idades = soma_idades + idade;
    }

    media_idades = ((float)soma_idades / 5);

    printf ("A media das idades: %.2f", media_idades);

    return 0;
}
