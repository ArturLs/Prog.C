#include <stdio.h>
#define pi 3.1415

int main (){

    float r, A, P;
    char op;

    printf("Digite o valor da operacao, '1' (area da circunferencia), '2' (perimetro da circunferencia):");
    scanf("%c", &op);
    
    printf("Digite o valor do Raio: ");
    scanf("%f", &r);

    switch (op)
    {
    case '1':
       A = pi * r * r;
       printf("O valor da Area: %f \n", A);
       break;

    case '2':
      P = 2* pi* r;
      printf("O valor do perimetro: %f \n", P);   
      break;
    
    default:
      printf("o indicador de operação foi mal fornecido\n"); 
        break;
    }


    return 0;
}