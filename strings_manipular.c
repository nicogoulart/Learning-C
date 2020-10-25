#include <stdio.h>
#define TAMSTRING 30

int main()
{
    int num;
    char str1[TAMSTRING + 1], str2[TAMSTRING+1];
    int cont = 0; // contador para caracteres de strings

    printf("Entre o texto: ");

    fgets (str1, TAMSTRING, stdin);
    // varre a string lida até achar '\0'

    while (str1[cont] != '\0')
    {
        str2[cont] = str1[cont];
        cont ++;
    }

    str2[cont] = '\0'; //insere o delimitador ao final da string
    printf ("|%s|", str2);

    return 0;
}
