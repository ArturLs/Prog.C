#include<stdio.h>

int main () {
    
    int x, y;

    printf("Escolha um número inteiro entre 1 e 10: ");
    scanf("%d", &y);

    x = 3;


    do{
    
        if(y==x){
            printf("De primeira ");
        }else{
            if(y==2){
                printf("Quase acertou, o número é um pouco maior. Escolha um número inteiro entre 1 e 10: ");
                scanf("%d", &y);
            }else{
                if(y==4){
                printf("Quase acertou, o número é um pouco menor. Escolha um número inteiro entre 1 e 10: ");
                scanf("%d", &y);

                }else{
                    if(y>4 || y<2){
                        printf("valor consideravelmente longe. tente novamente: ");
                        scanf("%d", &y);

                    }
                }
            }
        }
               
               
        
    }while(x!=y);

    printf("acertou, parabens :)");

    return 0;
}