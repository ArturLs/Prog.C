#include <stdio.h>
#define n 10

int main (){
    int V[n], i, x=0, y=0, in=0;


    for(i=0; i<10; i++){
        printf("%d: Informe o valor =  ", (i+1));
        scanf("%d", &V[i]);
    }

   //ver qual eh o maior entre os valores
    for(i=0; i<10; i++){
      if(V[i]>x && V[i]>y){
        y = V[i];
        in = i;
      }
      x = V[i];
    }
    
  printf("\nValor maximo = %d \nSeu indice = %d \n", y, in);

   printf("\n");
  
  printf("Elementos com índice maior que %d são: | ", in);
  for(i=0; i<10; i++){
    
    if(in<i)
    printf(" %d |", V[i]);
  } 


  printf("\n\nElementos com índice menor que %d são: | ", in);
  for(i=0; i<10; i++){
    if(in>i)
    printf(" %d |", V[i]);
  }

    printf("\n\n");
   
   return 0;


    
}
