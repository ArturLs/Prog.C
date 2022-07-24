#include<stdio.h>


int primo(int x){
    int p=0;
  
  for(int i=2; i<=x; i++ ){
      if(x % i == 0)
      p++;
    }
   
  if(p == 1){
  
  return 1;
  }else{

   return 0;
  }

}



void linha (int N){

    int i;

    for(i=0; i<N; i++){
          printf("*");
        }
        printf("\n");
    }    





int main () {
    int x, y;
    int P[1001];

    linha(115);
    printf("                                           Os numeros primos de 1 ate 1000\n");
    linha(115);
    printf("\n");

    for(x=2; x<1001; x++){
        y = primo(x);
        
        if(y == 1)
        printf(" %d ", x);
        
    }

    printf("\n\n");
    linha(115);


}