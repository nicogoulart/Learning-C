#include <stdio.h>
/* Escrever um programa que lê as horas de início e de término de um
jogo, ambas subdivididas em 2 valores distintos, a saber: horas e minutos. O programa deve
calcular e escrever a duração total do jogo, também em horas e minutos, considerando que o
tempo máximo do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia
seguinte. */

int main()
{
    int hora_inicio, hora_fim, min_inicio, min_fim, hora_jogo, min_jogo;

    printf ("DURACAO DO JOGO \n \n");

    printf ("Hora do inicio: ");
    scanf ("%d %d", &hora_inicio, &min_inicio);

    printf ("Hora do termino: ");
    scanf ("%d %d", &hora_fim, &min_fim);

    printf ("\n");

    if (hora_inicio < hora_fim)
    //Caso o jogo termine no mesmo dia, porém
    //em outra hora.
    {
        hora_jogo = hora_fim - hora_inicio;
        min_jogo = min_fim - min_inicio;

        if (min_jogo < 0)
        {
            hora_jogo --;
            min_jogo = min_jogo + 60;
        }
    }

        else if (hora_inicio > hora_fim)
        //Caso o jogo termine no dia seguinte.
        {
            hora_jogo = 24 - hora_inicio + hora_fim;
            min_jogo = min_fim - min_inicio;

            if (min_jogo < 0)
            {
                hora_jogo --;
                min_jogo = min_jogo + 60;
            }
        }

            else if (hora_inicio == hora_fim)
            //Caso o jogo dure menos de uma hora.
            {
                hora_jogo = 0;
                min_jogo = min_fim - min_inicio;

                if (min_jogo < 0)
                //Se os minutos forem negativos significa
                //que na verdade o jogo terminou no outro dia!
                {
                    hora_jogo = 24 - hora_inicio + hora_fim;
                    min_jogo = min_fim - min_inicio;

                        if (min_jogo < 0)
                        {
                            hora_jogo --;
                            min_jogo = min_jogo + 60;
                        }
                }
            }

    printf ("Duracao do Jogo: %d horas & %d minutos \n", hora_jogo, min_jogo);

    return 0;
}
