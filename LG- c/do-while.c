#include<stdio.h>

int main(){

    int p, s, f, i=3;

    p = 0;
    s = 1;
    printf("1: %d\n", p);
    printf("2: %d\n", s);

    do{
        f = p + s;
        printf("%d: %d\n", i, f);
        p = s;
        s = f;
        i++;
     }while(f < 10000);
      



    return 0;
}