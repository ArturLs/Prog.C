#include<stdio.h>
#include<string.h>
#define t 501

void C (char V[t], char x, int *p){

    int i,c=0;

    for(i=0; i<t; i++){
        if(V[i] == x)
        c++;
    }

    *p = c;

}


int main (){
    
    char V[t];
    char x;
    int p;
    

    
    printf("Informe o texto: ");
    gets(V);
    printf("Informe o caracter: ");
    scanf("%c", &x);   
    

    C(V, x, &p);

   printf("O numero de repeticoes da letra |%c|: %d\n", x, p);

    
 
}