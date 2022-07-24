#include <stdio.h>

int main() {
    float X, Y, Z, S, P;

    printf("Digite o valor de X: ");
    scanf("%f", &X);
    printf("Digite o valor de Y: ");
    scanf("%f", &Y);
    printf("Digite o valor de Z: ");
    scanf("%f", &Z);
    S = Z + Y + X;
    P = X * Y * Z;
    printf("Soma dos valores fornecidos:%f \nProduto dos valores fornecidos:%f", S, P);

    return 0;
}