#include <stdio.h>

int main()
{
    /*Esse algoritmo calcula a média geral de uma turma de x alunos,
    e informa os dados do aluno que possui a maior média.*/

    int alunos, matricula, contador, maior_nota;
    float media, media_antiga, media_geral, prova1, prova2, atividades, trabalho_final, maior_media;

    media_geral = 0; //Contador da média geral da turma começa em zero.

    //Registra o número de alunos.
    printf ("Informe o numero de alunos: ");
    scanf ("%d", &alunos);

    //Contador cresce até atingir o número de alunos.
    for (contador = 1; contador <= alunos; contador++){
        //Registra a matrícula do aluno.
        printf ("Informe a matricula do aluno: ");
        scanf ("%d", &matricula);

        //matrícula superior ao numero de alunos [informa o erro e não computa].
        if (matricula > alunos){
            printf ("Matricula Invalida.\n");
            contador --;
        }

            else{
            //Registra as quatro notas do aluno.
                printf ("Informe as notas do aluno (prova1, prova2, atividades e trabalho_final): ");
                scanf ("%f %f %f %f", &prova1, &prova2, &atividades, &trabalho_final);

                /*Se o contador for diferente de um, registra a maior média anterior em outra variável
                que será usada adiante para calcula a maior média da turma. Do contrário (se contador = 1) não existe média anterior.*/
                if (contador > 1){
                media_antiga = maior_media;
                }

                //CÁLCULO DA MÉDIA DO ALUNO:
                //Agora a partir do contador inicial, executamos as operações.
                if (contador > 0){
                    media = (((float)(prova1 + prova2 + atividades + trabalho_final)) / 4); //Calcula a nova média do aluno.
                    media_geral = media_geral + media;
                    /*Adiciona a média do aluno na variável que será usada
                    para calcula a média aritmética geral da turma.*/

                    //Informa a média do aluno.
                    printf("Media do aluno %d: %.2f\n", matricula, media);


                    //CALCULO DA MAIOR MÉDIA DA TURMA:
                    /*para que a primeira média informada (contador == 1) se inclua no teste da maior média,
                    atribuimos o valor da média do aluno ao valor da variável que vamos
                    utilizar nos teste de média.*/
                    if (contador == 1){
                    media_antiga = media;
                    }

                    /*Testa sucessivamente se as novas
                    médias são maiores do que as antigas.*/
                    if (media >= media_antiga){
                    maior_nota = matricula;
                    /*Caso a média seja maior ou igual a média antiga,
                    registra a matricula do aluno.*/
                    maior_media = media;
                    /*Caso a média seja maior ou igual a média antiga,
                    registra a média do aluno.*/
                    }
                }
            }
    }

    //CÁLCULO DA MÉDIA GERAL DA TURMA:
    media_geral = media_geral / alunos; //Termina o cálculo da média aritmética geral da turma, dividindo o total pelo número de alunos.
    printf ("A media geral da turma e %.2f. A maior media pertence ao aluno de matricula %d, que possui uma media de %.2f.", media_geral, maior_nota, maior_media);
    //Informa a média geral da turma, o aluno que possui a maior média e a respectiva média desse aluno.

    return 0;
}
