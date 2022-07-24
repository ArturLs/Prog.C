#include <string.h>
#include <stdio.h>
#define p 5
#define s 2

int main (){
    char Loja_Nome[101];
    char Loja2_Nome[101];
    int i,l,c;
    float LP[s][p];
    float M[p];
    float S5[s];
    float S=0, x=0, C=0;

    printf("Digite o nome da loja 1: ");
    gets(Loja_Nome);

    printf("Digite o nome da loja 2: ");
    gets(Loja2_Nome);

    printf("\n");
    printf("----------------------------------------------------------\n\n");


    for(l=0; l<s; l++){
        for(c=0; c<p; c++){
            do{

            printf("Digite o valor (positivo) do produto %d da loja %d: ",(c+1), (l+1) );
            scanf("%f", &LP[l][c]);
            
            }while(LP[l][c]<0);
        }
        printf("\n");
    }

    printf("----------------------------------------------------------\n\n");


    for(c=0; c<p; c++){
        for(l=0; l<s; l++){
          
          S = LP[l][c] + x;
          x = LP[l][c];
        
        }
        C = S/2;
        M[c] = C;
        printf("A media do valor do produto %d (nas duas lojas): %.2f",(c+1) ,M[c]);
        printf("\n");

        
    }

    printf("\n");
    printf("----------------------------------------------------------\n\n");


    printf("A matriz que armazenou os 5 preços nas 2 lojas: \n");
    printf("\t\t \n");
    for(l=0; l<s; l++){
    for(c=0; c<p; c++){
        
        printf("%.2f\t ", LP[l][c]);
    
    } 
    printf("\n");
    }

    printf("\n");
    printf("----------------------------------------------------------\n\n");


        for(l=0; l<s; l++){
        x=0;
        S=0;
        for(c=0; c<p; c++){
           
           S = LP[l][c] + S;
        
        }
        S5[l] = S;
        printf("A soma dos valores gastos na compra de todos os produtos na loja %d: %.2f",(l+1) ,S5[l]);
        printf("\n");
    
    }
    
    printf("\n");
    printf("----------------------------------------------------------\n\n");


    if(S5[0] > S5[1]){
        
        printf("A loja que teria o maior gasto total seria ");
        puts(Loja_Nome);
    
    }else{
        if(S5[0] < S5[1]){
        
        printf("A loja que teria o maior gasto total seria ");
        puts(Loja2_Nome);
        
        }else{
            if(S5[0]=S5[1]){

            printf("As duas lojas teriam o mesmo gasto");

            }

        }
    }


    printf("\n");

    return 0;
}