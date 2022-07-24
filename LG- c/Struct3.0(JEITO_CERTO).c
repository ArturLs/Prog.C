//professor como eu faco para inves de usar x.T, substituir por x->T ? na parte do livro ler(){...} 

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

livro ler(){

    livro x;
        
        Line();  
        printf("\n");  

        printf("Informe o titulo do livro: ");
        gets(x.T);
        fflush(stdin);

        
        
    

        printf("Informe o autor do livro: ");
        gets(x.A);
        fflush(stdin);
        
    

        printf("Informe o estilo do livro: ");
        gets(x.E);
        fflush(stdin);
        
       


        printf("Informe o codigo do livro: ");
        scanf( "%d", &x.codigo);
        fflush(stdin);
        getchar();


        printf("Informe o valor do livro: ");
        scanf("%f", &x.valor);
        fflush(stdin);
        getchar();
        
        printf("\n");

        return x;

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
        l[i] = ler();
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


