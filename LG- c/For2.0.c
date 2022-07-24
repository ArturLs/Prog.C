#include <stdio.h>

int main () {

    int x, n1, n2, m=0, i, c;

        printf("Digite a idade da pessoa 1: ");
        scanf("%d", &x);

        n1 = x;
        n2 = x;

    for(i=2; i<=10; i++){
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &x);
        m = m + x;

        if(x>n1)
        n1 = x;
        if (x<n2)
        n2 = x;
    
    }
      
      c = m/10;
      printf("A media das idades dessas 10 pessoas eh: %d\n", c);
      printf("A maior idade eh %d e a menor %d\n", n1, n2);

    return 0;
}