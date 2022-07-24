#include <stdio.h>
#include <string.h>
#define n 100

void tex (char t[n]){
    
    printf("O nome do arquivo de texto a ser lido: ");
    gets(t);

}

int main () {
   
   
   
   FILE *x;
   char *ler[n];
   char texto[n];
   int lines=0;
   
   tex(&ler);

   x = fopen( ler, "r"); 
   

   if(x == NULL){
   printf("Erro ao abrir! arquivo inexistente\n-----\n");
   return 0;
   }


   while(!feof(x)){
   
   fgets(texto, 100, x);  
    if(strlen(texto) < 99 );
    lines++;

   }


   fclose(x);
    
    printf("Quantidade de linhas existentes no arquivo %d \n", lines);

   return 0;

}