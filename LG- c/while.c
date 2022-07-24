#include <stdio.h>

int main () {

    int n, fat;

    printf("informe o valor para fatoriar: ");
    scanf("%d", &n);

    fat = 1;

    while(n>1){
        fat = fat * n;
        n = n - 1;
    }

    printf("fat: %d \n n: %d", fat, n);


  
    return 0;
}