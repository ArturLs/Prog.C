#include <stdio.h>

int main (){

    int n,i,p;

    n=0;
    p=0;
    

    do{
    
    printf("Digite um numero maior ou igual a um, para saber se eh primo ou nao: ");
    scanf("%d", &n);
   
    }while(n<=1);
    
    for(i=2;i<=n;i++){
        if(n % i==0)
        p++;
        
    }

    if(p==1){
    printf("Esse numero eh primo\n");
    }else{
        printf("Esse numero nao eh primo\n");
    }
    
    return 0;
}