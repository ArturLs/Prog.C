#include <stdio.h>
#include <string.h>

int main (){

    char texto[501];
    int i, l;
    char str [10] = "palavra d";
    char str1 [10] = {'a', 'b'};

    printf("Informe um texto de 500 caracteres: ");
    gets(texto);

    l = strlen(texto);
    
    for (i=0; i<l; i++){
        if(texto[i] == 'a')
        texto [i] = '@';

        printf("%c", texto[i]);
    }

    //puts(texto);

    return 0;
}

/*int i;  
for (i=0; i<strlen(str); i++){
srt[i] += 32
}

troca de maiusculo para minusculo
*/