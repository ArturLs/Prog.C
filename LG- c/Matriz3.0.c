#include <stdio.h>
#define n 3
#define N 2

int main () {
    float B[n][N];
    float A[N][n];
    float AxB[N][N];
    int l, c, x;
    
    
    for (l=0; l<N; l++){
    for(c=0; c<n; c++){
        printf("Digite o elemento da matriz A da linha |%d| e coluna |%d|: ",(l+1), (c+1) );
        scanf("%f", &A[l][c]);
    }
      printf("\n");
    }
    
    
    for (l=0; l<n; l++){
    for(c=0; c<N; c++){
        printf("Digite o elemento da matriz B da linha |%d| e coluna |%d|: ",(l+1), (c+1) );
        scanf("%f", &B[l][c]);
    }
      printf("\n");
    }

    for (l=0; l<N; l++){
    for(c=0; c<N; c++){
        for(x=0; x<n; x++){
       
       AxB[l][c] += A[l][x]* B[x][c];
    
    }
    }
    }

    printf("\n");
    printf("----------------------------------------------------------\n");

    printf("Matriz A|2x3| digitada foi: \n");
    printf("\t\t\t \n");
    for(l=0; l<N; l++){
    for(c=0; c<n; c++){
        printf("%.2f\t ", A[l][c]);
    } 
    printf("\n");
    }

    printf("\n");
    printf("----------------------------------------------------------\n");

    printf("Matriz B|3x2| digitada foi: \n");
    printf("\t\t \n");
    for(l=0; l<n; l++){
    for(c=0; c<N; c++){
        printf("%.2f\t ", B[l][c]);
    } 
    printf("\n");
    }

    printf("\n");
    printf("----------------------------------------------------------\n");

    printf("Matriz AxB|2x2| calculada foi: \n");
    printf("\t\t \n");
    for(l=0; l<N; l++){
    for(c=0; c<N; c++){
        printf("%.2f\t ", AxB[l][c]);
    } 
    printf("\n");
    }

    
 return 0;

}