#include <stdio.h>

int main() {
    float C, K, F;

    printf("Digite o valor em celsius: ");
    scanf("%f", &C);
    K = C +273.15;
    F = C * 9/5 + 32;
    printf("A temperatura em Fahrenheit:%f \nA temperatura em Kelvin:%f", F, K);

    return 0;
}