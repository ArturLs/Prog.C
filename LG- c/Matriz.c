#include <stdio.h>
#define n 4

int main () {
    int M[n][n];
    int i, j;
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Informe o valor da posicao [%d][%d] : ", i,j);
            scanf("%d", &M[i][j]);
        }
         
        printf("\n");
    }
        printf("   0\t1\t2\t3 \n");
        printf("----------------------------\n");
        for(i=0; i<n; i++){
            printf("%d| ", i);
        for(j=0; j<n; j++){
            printf("%d\t" , M[i][j]);
        }
         
        printf("\n");
    }
    
    return 0;
}