#include <stdio.h>
#include <math.h>
#define n 10

int main (){
    int V[n], i, soma=0, var=0;
    float M, des;
    
    for(i=0; i<10; i++){
        printf("Digite o valor do numero %d: ", (i+1));
        scanf("%d", &V[i]);
        soma = soma + V[i];
    }

    M = (float)soma/ n;
    printf("\n");
    printf("A media dos valores eh: %.2f\n", M);
    printf("-----------------------------------\n");

      printf("Os valores acima da media: ");
      for(i=0; i<10; i++){
          if(V[i]>M)
          printf("%d ", V[i]);
      }
       
       printf("\n");
       printf("-----------------------------------\n");

      for(i=0; i<10; i++){
          var = var + pow(V[i]-M, 2);
      }

      var = var/n;
      des = sqrt(var);
      printf("O desvio padrao eh: %.3f \n", des);
      



 return 0;
}