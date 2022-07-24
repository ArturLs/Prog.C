#include <stdio.h>

int maior(int a, int b){
    
    int m;
    
    if(a > b){
        m = a;
    }else{
        m = b;
    }


    return m;
}


int main (){
    
    int m;
    int x,y,z;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    m = maior(x,y);
    m = maior(m, z);
    printf("Maior: %d\n", m);


    return 0;
}