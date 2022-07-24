#include <stdio.h>
#include <string.h>
#include <time.h> 
#define A  10
#define B 5

int main (){
    srand(time(NULL));
    int p=0,j;
    int a[A]; 
    int b[B];

printf("Valores do Vetor 1: ");
    for (int i = 0; i < A; i++){
        a[i] =  100+ (rand () %901);
        printf(" %d ", a[i]);
        
        
    }
printf("\n\n");
    
    printf("Valores do Vetor 2: ");
    for (int i = 0; i < B; i++){
        b[i] =  1 + (rand () %10);
        printf(" %d ", b[i]);
        
        
    }
    printf("\n\n");

    for (int i = 0; i < A; i++){
        printf ("\nO numero %d",a[i]);
        p=0;
        for (j = 0; j < B; j++){
            if (a[i] %b[j] == 0){
                printf ("\nEh divisivel por %d na posicao %d", b[j], j);
            }
            
            if (a[i] %b[j] != 0){
            p++;
        }
        
        }
    
       if(p==5){
       printf ("\nNao possui divisores no segundo vetor");}

       printf("\n");p=0;
       
    
    
    }



 return 0;

}