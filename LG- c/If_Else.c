#include <stdio.h>

int main(){

    float X, Y;
    printf("informe a coordenada X: ");
    scanf("%f", &X);
    printf("infomer a coordenada Y: ");
    scanf("%f", &Y);

    if(X==0 && Y==0){
        printf("origem\n");
    }else{
        if(X==0 && Y!=0){
            printf("eixo Y\n");
        }else{
            if(X!=0 && Y==0){
                printf("eixo X \n");
            }else{
                if(X>0 && Y>0 ){
                    printf("quadrante um\n");
                }
            }
        }
    }
}