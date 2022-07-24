#include <stdio.h>
#define pi 3.1415

int main() {
    float r, A, p;

    printf("Digite o valor do raio: \n ");
    scanf("%f", &r);
    A = pi * r * r;
    p = 2 * pi * r;
    printf("area:%f \nperimetro:%f", A, p);

    return 0;
}