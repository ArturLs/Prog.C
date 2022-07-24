#include<stdio.h>
#include<string.h>
#define n 5

void Line(void) {
    
    for(int i=0;i<55;i++)
        printf("*");
    printf("\n");
    
}


typedef struct {

    char nome[50];
    int cavalos;
    float valor;

}carros;


int main(){

    carros v[n];
    
    int i; 
    float max;

    
    for(i=0; i<n; i++){
       
        printf("[%d] Informe o nome do carro: ", (i+1));
        gets(v[i].nome);
        fflush(stdin);
        

        printf("[%d] Informe o valor: ", (i+1));
        scanf("%f", &v[i].valor);
        fflush(stdin);
    

        printf("[%d] Informe a quantidade de cavalos: ", (i+1));
        scanf("%d", &v[i].cavalos);
        fflush(stdin);
        getchar();

        Line();
    }
     
    printf("Informe o Valor Maximo: ");
    scanf("%f", &max);
    
    Line();
    
    puts("Nome dos carros com preço menor ou igual ao preço máximo informado: \n");
    for(i=0;i<n;i++){
        
        if(v[i].valor<=max){
        printf("|%.2f USD| -> ", v[i].valor);
        puts(v[i].nome);
        }

    }
    
    printf("\n");
    Line();



   return 0;
}