#include<stdio.h>
#include <string.h>

void linha (int N, int M, char C){

    int i, j;

    for(i=0; i<N; i++){
        printf("\n");
        for(j=0; j<M; j++){
            printf("%c", C);
        }
    }    

}

int main (){
     
   int N, M;
   char C;

   printf("Informe o caractere: ");
   scanf("%c",&C);

   printf("Informe o numero de linha: ");
   scanf("%d", &N);

   printf("Informe o numero de caracteres: ");
   scanf("%d", &M);


   printf("\nN = %d, M = %d, Caractere = '%c' \n", N, M, C);
   linha(N, M, C);
   printf("\n");


   return 0;
}