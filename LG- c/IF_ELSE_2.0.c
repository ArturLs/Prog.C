#include <stdio.h>

int main(){

    float x, y, z, M;
    
    printf("O tamanho da primeira: ");
    scanf("%f", &x);
    printf("O tamanho da segunda pessoa:");
    scanf("%f", &y);
    printf("O tamanho da segunda pessoa: ");
    scanf("%f", &z);

    if( x<1.5 && y<1.5 && z<1.5){
        printf("3 pessoas tem menos de 1,5 metros");
        
        }else{ 
            
            if( (x<1.5 && y<1.5) || (y<1.5 && z<1.5) || (x<1.5 && z<1.5) ){
            printf("2 pessoas tem menos de 1,5 metros");
            
            }else{
                if(y<1.5 || z<1.5 || x<1.5){
                    printf("1 pessoas tem menos de 1,5 metros");

               
                }else{
                   if(x>=1.5 && y>=1.5 && z>=1.5){
                        printf("3 pessoas tem uma altura maior ou igual a 1,5 metros");

                   }else{
                       if((x>=1.5 && y>=1.5) || (y>=1.5 && z>=1.5) || (x>=1.5 && z>=1.5)){
                            printf("2 pessoas tem uma altura maior ou igual a 1,5 metros");
                       }else{
                           if(y>=1.5 || z>=1.5 || x>=1.5){
                               printf("1 pessoas tem uma altura maior ou igual a 1,5 metros");


                           }


                       }



                   }

                }
            }

         }


     M = (x+y+z)/3;
    if(M>1.5){
        printf("\nA media das alturas calculada, foi maior que 1.5");

    }else{
        if(M<1.5){
           printf("\nA media das alturas calculada, foi menor que 1.5"); 
        }else{
            if(M=1.5){
                printf("\nA media das alturas calculada, foi igual a 1.5");
            }
        }
    }        
    
    
    
    
    }