#include<stdio.h>
#define tam 12
 
 void change (int vet[tam], int a, int b){
    
    int i;

   for(i=0; i<tam; i++){
       
       if(vet[i]==a){
           vet[i]=b;
       }
    }

    
 }

void Line(void) {
    
    for(int i=0;i<55;i++)
        printf("*");
    printf("\n");
    
}


 int main (){
    
    int vet[tam];
    int a, b,i;

    for(i=0; i<tam; i++){
        printf("Informe o valor do vetor na posicao [%d]: ",(i+1));
        scanf("%d", &vet[i]);
    }
    
    Line();
    printf("Informe o valor que deseja trocar que esta no vetor: ");
    scanf("%d", &a);
 
    printf("Informe o valor que deseja substituit no vetor: ");
    scanf("%d", &b);
    Line();

    printf("Vetor digitado = ");
    for(i=0; i<tam; i++){
    printf(" |%d| ",vet[i]);}
    printf("\n");
       
    change(&vet, a, b);

    printf("\n");
    printf("Vetor substituido = ");
    for(i=0; i<tam; i++){
    printf(" |%d| ",vet[i]);
    }

    printf("\n");
    Line();
      

 
 }