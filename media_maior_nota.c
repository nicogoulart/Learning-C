#include <stdio.h>

int main()
{
    /*Esse algoritmo calcula a m�dia geral de uma turma de x alunos,
    e informa os dados do aluno que possui a maior m�dia.*/

    int alunos, matricula, contador, maior_nota;
    float media, media_antiga, media_geral, prova1, prova2, atividades, trabalho_final, maior_media;

    media_geral = 0; //Contador da m�dia geral da turma come�a em zero.

    //Registra o n�mero de alunos.
    printf ("Informe o numero de alunos: ");
    scanf ("%d", &alunos);

    //Contador cresce at� atingir o n�mero de alunos.
    for (contador = 1; contador <= alunos; contador++){
        //Registra a matr�cula do aluno.
        printf ("Informe a matricula do aluno: ");
        scanf ("%d", &matricula);

        //matr�cula superior ao numero de alunos [informa o erro e n�o computa].
        if (matricula > alunos){
            printf ("Matricula Invalida.\n");
            contador --;
        }

            else{
            //Registra as quatro notas do aluno.
                printf ("Informe as notas do aluno (prova1, prova2, atividades e trabalho_final): ");
                scanf ("%f %f %f %f", &prova1, &prova2, &atividades, &trabalho_final);

                /*Se o contador for diferente de um, registra a maior m�dia anterior em outra vari�vel
                que ser� usada adiante para calcula a maior m�dia da turma. Do contr�rio (se contador = 1) n�o existe m�dia anterior.*/
                if (contador > 1){
                media_antiga = maior_media;
                }

                //C�LCULO DA M�DIA DO ALUNO:
                //Agora a partir do contador inicial, executamos as opera��es.
                if (contador > 0){
                    media = (((float)(prova1 + prova2 + atividades + trabalho_final)) / 4); //Calcula a nova m�dia do aluno.
                    media_geral = media_geral + media;
                    /*Adiciona a m�dia do aluno na vari�vel que ser� usada
                    para calcula a m�dia aritm�tica geral da turma.*/

                    //Informa a m�dia do aluno.
                    printf("Media do aluno %d: %.2f\n", matricula, media);


                    //CALCULO DA MAIOR M�DIA DA TURMA:
                    /*para que a primeira m�dia informada (contador == 1) se inclua no teste da maior m�dia,
                    atribuimos o valor da m�dia do aluno ao valor da vari�vel que vamos
                    utilizar nos teste de m�dia.*/
                    if (contador == 1){
                    media_antiga = media;
                    }

                    /*Testa sucessivamente se as novas
                    m�dias s�o maiores do que as antigas.*/
                    if (media >= media_antiga){
                    maior_nota = matricula;
                    /*Caso a m�dia seja maior ou igual a m�dia antiga,
                    registra a matricula do aluno.*/
                    maior_media = media;
                    /*Caso a m�dia seja maior ou igual a m�dia antiga,
                    registra a m�dia do aluno.*/
                    }
                }
            }
    }

    //C�LCULO DA M�DIA GERAL DA TURMA:
    media_geral = media_geral / alunos; //Termina o c�lculo da m�dia aritm�tica geral da turma, dividindo o total pelo n�mero de alunos.
    printf ("A media geral da turma e %.2f. A maior media pertence ao aluno de matricula %d, que possui uma media de %.2f.", media_geral, maior_nota, maior_media);
    //Informa a m�dia geral da turma, o aluno que possui a maior m�dia e a respectiva m�dia desse aluno.

    return 0;
}
