#include <stdio.h>
#define n 3

int main () {
    int M[n][n];
    int i, j, x;
    int Soma=0;

    printf("Digite valores entre 0 e 32 para preencher a matriz: \n\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            do{
            printf("Informe o valor da posicao [%d][%d] : ", i,j);
            scanf("%d", &M[i][j]);
            }while(M[i][j] <0 || M[i][j] > 32);
            
        }
        printf("\n");
    }
        
        for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        Soma = Soma + M[i][j];
        } }
        printf("\n");
        printf("A Soma de todos os elementos dessa matriz eh: %d\n", Soma);

        printf("----------------------------------------------------------\n");
        
        for(i=0; i<n; i++){
        printf("A linha '%d' a eh formada pelos elementos: ", i);
        for(j=0; j<n; j++){
         printf(" |%d| ", M[i][j]);
        
        }
        printf("\n");
    }





    return 0;

}
