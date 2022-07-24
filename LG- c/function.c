#include <stdio.h>
int i;


void Line(void) {
    
    for(i=0;i<30;i++)
        printf("*");
    printf("\n");
    
}


void menu(){

    Line();    
    printf("Selecione a operacao desejada: \n");
    Line();   
    
    printf("\t 1- Soma\n");
    printf("\t 2- Subtrair\n");
    printf("\t 3- Multiplicar\n");
    printf("\t 4- Potecia\n");
    printf("\t 5- Raiz\n");
    printf("\t 6- Sair\n");

}


int option(){

    int x;
    scanf("%d", &x);
    
    while(x<0 || x>6){

        menu();
        printf("\n");
        printf("Nao existe essa opcao! Selecione novamente: \n");
        scanf("%d", &x);
        printf("\n\n");


    }

    return x;

}


int main(){
    
    int x;

    menu();
    // x sera igual o valor retornado da Funcao
    x = option();     
    
}