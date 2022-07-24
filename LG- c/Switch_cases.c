#include <stdio.h>

int main () {

char letras;

printf("Informe uma letra qualquer do alfabeto: ");
scanf("%c", &letras);

switch (letras)
{
case 'A':
case 'a':
case 'e':
case 'E':
case 'I':
case 'i':
case 'o':
case 'O':
case 'U':
case 'u':

printf("Vogal\n");
    break;

default:

printf("Consoante\n");
    break;
}

 return 0; 

}