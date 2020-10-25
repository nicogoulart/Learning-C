#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <conio2.h>

#define LIM_X 40 //Limite do background na horizontal.
#define LIM_Y 20 //Limite do background na vertical.
#define MAXCAR 30 //Maximo de caracteres p/ o nome do jogador.

int chaves = 0; //Contador do número de chaves.
char player = 'B'; //Char que vai caracterizar o jogador.
char nome[MAXCAR]; //Nome do jogador.

void nome_jogador(); //RECEBE O NOME DO JOGADOR.
void background(); //CRIA O BACKGROUND DO JOGO.
void status_jogador(); //EXIBE O STATUS DO JOGADOR.

int main()
{
    int x = 3; //Posição inicial do jogador em x.
    int y = 3; //Posição inicial do jogador em y.
    char teclado;
    char espaco = 32;

    nome_jogador(); //Chama a função nome_jogador.
    background(); //Chama a função background.
    status_jogador(); //Chama a função status_jogador.

    textbackground(YELLOW); //Amarelo vai ser a cor do jogador.
    putchxy(x, y, player); //Cria a figura do jogador.

    if (kbhit())
    {
        teclado = getch();

        switch (teclado)
        {
            case 77:
                putchxy(x, y, espaco);
                x++;
                putchxy(x, y, player);
                break;

            case 75:
                putchxy(x, y, espaco);
                x--;
                putchxy(x, y, player);
                break;

            case 72:
                putchxy(x, y, espaco);
                y++;
                putchxy(x, y, player);
                break;

            case 80:
                putchxy(x, y, espaco);
                y--;
                putchxy(x, y, player);
                break;
        }
    }

    textbackground(BLACK); //Volta ao background normal.
    gotoxy(1, LIM_Y + 3); //Move o cursor para fora do escopo do jogo.

    return 0;
}

//RECEBE O NOME DO JOGADOR.
void nome_jogador()
{
    printf("Digite seu nome: ");
    scanf("%[^\n]", nome);
}

//CRIA O BACKGROUND DO JOGO.
void background()
{
    int borda; //Contador para adicionar a borda do background.

    textbackground(GREEN);

    //HORIZONTAL SUPERIOR
    for(borda = 0; borda < LIM_X; borda++)
    {
        gotoxy(borda + 1, 1);
        printf("O");
    }

    //VERTICAL ESQUERDO
    for(borda = 0; borda < LIM_Y; borda++)
    {
        gotoxy(1, borda + 1);
        printf("O");
    }

    //HORIZONTAL INFERIOR
    for(borda = 0; borda <= LIM_X; borda++)
    {
        gotoxy(borda + 1, LIM_Y + 1);
        printf("O");
    }

    //VERTICAL DIREITO
    for(borda = 0; borda < LIM_Y; borda++)
    {
        gotoxy(LIM_X + 1, borda + 1);
        printf("O");
    }
}

//EXIBE O STATUS DO JOGADOR.
void status_jogador()
{
    gotoxy(1, LIM_Y + 2);
    textbackground(BLACK);
    printf("Nome: %s \t Chaves: %d\n", nome, chaves);
}
