#include<stdio.h>
#include<string.h>
#define n 2


void Line(void) {
    
    for(int i=0;i<55;i++)
        printf("*");
    printf("\n");
    
}

typedef struct livro{
    char T[20];
    char A[20];
    char E[10];
    int codigo;
    float valor;

 }livro;

void ler_dados(livro l[n], int i){

        Line();  
        printf("\n");  

        printf("[%d]Informe o titulo do livro: ", (i+1));
        gets(l[i].T);
    

        printf("[%d]Informe o autor do livro: ",(i+1));
        gets(l[i].A);
    

        printf("[%d]Informe o estilo do livro: ",(i+1));
        gets(l[i].E);
        fflush(stdin);


        printf("[%d]Informe o codigo do livro: ",(i+1));
        scanf("%d", &l[i].codigo);
        fflush(stdin);
        getchar();

        printf("[%d]Informe o valor do livro: ",(i+1));
        scanf("%f", &l[i].valor);
        fflush(stdin);
        getchar();
        
        printf("\n");

}



void imprimir_dado (livro l[n], int i){

        
        printf("[%d] O titulo do livro: ", (i+1));
        puts(l[i].T);

        printf("[%d] O autor do livro: ", (i+1));
        puts(l[i].A);

        printf("[%d] O estilo do livro: ", (i+1));
        puts(l[i].E);

        printf("[%d] O codigo do livro: %d \n", (i+1), l[i].codigo);

        printf("[%d] O valor do livro: %.2f \n", (i+1), l[i].valor);

        Line();


    
}

int main (){
     
    int i;
    livro l[n];
    

    for(i=0; i<n; i++){
        ler_dados(l,i);
    }

    
    Line();
    printf("\n");
    printf("-----------------Os livros fornecidos------------------\n\n");
    Line();


    for(i=0; i<n; i++){
        imprimir_dado(l, i);
    }



    return 0;
}