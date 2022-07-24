#include <stdio.h>
#include <string.h>
#define n 100

void letras(char *x, char *y){
    
    printf("--------------------------------------------------\n");

    printf("Informe a letra a ser trocada: ");
    gets(x);

    printf("\n");

    printf("Informe a letra para fazer a subtituicao: ");
    gets(y);

    printf("\n");

}

void cc (FILE *entrada, char *l, char *k){
    char c;
    FILE *N;
    
    N = fopen("teste.txt", "w");

    while ((c = getc(entrada)) != EOF){
        
        if (c == *k)
        c = *l;

        fprintf(N, "%c", c);
        
    }

    fclose(N);

}


void tex (char t[n]){
    
    printf("O nome do arquivo de texto a ser lido: ");
    gets(t);
    printf("--------------------------------------------------\n");

}


int main (){

    FILE *f;
    char *ler[n];
    char *X;
    char *Y;
    char *C;

    letras(&X, &Y);
    
    tex(&ler);

    f = fopen(ler, "r+");
    
   if (f == NULL) {
   printf("Erro ao abrir! arquivo inexistente\n-----\n");
   return 0;
   }

   cc(f, &Y, &X);

    fclose(f);

    return 0;
}