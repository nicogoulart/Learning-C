#include <stdio.h>

int main()
{
    float altura;
    char sexo;

    do
    {
        printf ("Informe o sexo (masculino ou feminino): ");
        scanf (" %c", &sexo);

            if (sexo == 'm')
            {
                do
                {
                    printf ("Informe a altura: ");
                    scanf ("%f", &altura);

                        if (altura > 0)
                        {
                            printf ("O seu peso ideal e: %.2f", altura * 72.7 - 58);
                        }

                            else
                                printf ("Altura invalida. Tente novamente.\n");
                }
                while (altura <= 0);
            }

                else

                    if (sexo == 'f')
                    {
                        do
                        {
                            printf ("Informe a altura: ");
                            scanf ("%f", &altura);

                                if (altura > 0)
                                {
                                    printf ("O seu peso ideal e: %.2f", altura * 62.1 - 44.7);
                                }

                                    else
                                        printf ("Altura invalida. Tente novamente.\n");
                        }
                        while (altura <= 0);
                    }

                        else
                            printf ("Sexo informado invalido. Tente novamente.\n");
        }
        while (sexo != 'm' && sexo != 'f');

    return 0;
}
