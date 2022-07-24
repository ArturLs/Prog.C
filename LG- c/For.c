#include <stdio.h>

 int main() {

    float x, y, z, m, mt = 0;
    int i, f = 0;


    for(i = 0; i<5; i++){
       printf("Informe a media do person: ");
       scanf("%f%f%f", &x, &y, &z);
       m = (x+y+z)/3;
       printf("A media do arrombado %d eh: %f\n", (i+1), m);
       mt = m + mt;
       if(m == 10.)
           f = 1;
       
    }   

    mt = mt / 5;
    printf("A media dos arrombados eh: %f\n", mt);
    if(f==1)
    printf("Ha um arrombado que gabaritou");

    
    return 0;
 }