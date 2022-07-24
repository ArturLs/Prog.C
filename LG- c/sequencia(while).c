#include<stdio.h>

int main(){
    int x, y;

    printf("Digite o valor de algum numero, ou digite 0 para interromper a sequencia: ");
    scanf("%d", &x);

    y=x;

    while(x != 0){
        printf("Digite o valor de outro numero, ou digite 0 para interromper a sequencia:");
        scanf("%d", &x);

        if(y > x && x!=0){
        printf("Esse foi o maior valor ate agora %d. ", y);
        }
        y = x;
    }

 printf("Voce finalizou sua sequencia...");
    
   return 0;

}