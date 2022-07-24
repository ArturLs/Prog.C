#include <stdio.h>
#include <string.h>
#include <time.h> 

int main (){
    srand(time(NULL));
    int x = rand() %256;
    int y = rand() %256;
    int sfx1, sfx2;

    printf("informe um prefixo do endereço IP, no seguinte molde X1.X2:\n\n");
    
    printf("informe um prefixo 'X1' do endereço IP: ");
    scanf("%d", &sfx1);

    printf("informe um prefixo 'X2' do endereço IP: ");
    scanf("%d", &sfx2);

    
    if(sfx1 > 255 || sfx1 < 0 || sfx2 > 255 || sfx2 < 0 ){
    int p =0;
    do{
    
    printf("\n");
    printf("Erro ao escolher o prefixo, numero deve estar entre 0 e 250 !\n\n ");
    
    if(sfx1 > 255 || sfx1 < 0){
    printf("informe um prefixo 'X1' do endereço IP: ");
    scanf("%d", &sfx1);
    if(sfx1 < 255 && sfx1 > 0)
    p++;
    }

    if(sfx2 > 255 || sfx2 < 0){
    printf("informe um prefixo 'X2' do endereço IP: ");
    scanf("%d", &sfx2);
    if(sfx2 < 255 && sfx2 > 0)
    p++;
    }

    }while(p!=2);
    }

    printf("-----------------------------------\n");
    printf("O seu IP: %d.%d.%d.%d\n", sfx1, sfx2 ,x, y);

    return 0;
}