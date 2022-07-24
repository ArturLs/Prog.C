#include <stdio.h>
int i;

void Line(void) {
    
    for(i=0;i<50;i++)
        printf("*");
    printf("\n");
    
}

float Notas(){
    
    float x;
    
    do{
    
    printf("Digite a nota entre 0.00 e 10.00 do Aluno %d: ", (i+1));
    scanf("%f", &x);

    }while(x<0 || x>10);

    return x;

}


int main(){
    
    
    float N[10];
    float S=0, M=0, n1=0, n2;
    
    Line();
    for(i=0; i<10; i++){
    
    N[i] = Notas();
    
    }
    Line();
    
    
    n2= N[0];
    for (i=0; i<10; i++){
        
        S = S + N[i];

        if(N[i]>n1)
        n1 =N[i];
        if (N[i]<n2)
        n2 = N[i];
    
    }
    
    M = S/2;
    
    printf("A media das notas dos dez alunos eh: %.2f", M);
    printf("\n\n");
    printf("A maior nota foi %.2f e a menor %.2f \n", n1, n2);
    Line();

     

 return 0;

}



