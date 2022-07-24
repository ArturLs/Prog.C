#include <stdio.h>
#include <time.h>

void Line(void) {
    
    for(int i=0;i<50;i++)
        printf("*");
    printf("\n");
    
}


int dado() {

return 1 + (rand() % 6);

}



int main() {

int N[1001];
int x[6];
int i, u=0, d=0, t=0, q=0, c=0, s=0;
float porc[6];
float y;
srand(time(NULL));


for(int i=0; i<1001; i++){
    N[i]=dado();
}


for(i=0; i<1001; i++){

    if(N[i]==1)
    u++;
      
    if(N[i]==2)
    d++;

    if(N[i]==3)
    t++;

    if(N[i]==4)
    q++;

    if(N[i]==5)
    c++; 

    if(N[i]==6)
    s++;       
}


x[0]=u;
x[1]=d;
x[2]=t;
x[3]=q;
x[4]=c;
x[5]=s;

for(i=0; i<6; i++)
porc[i]= ((float)x[i]/1000)*100; 

Line();
printf("\nPorcentagem de lancamento de um dado mil vezes\n\n");
Line();
for(i=0; i<6; i++)
printf("A porcentagem de vezes que o numero %d saiu: %.2f%\n\n", (i+1),porc[i]);
Line();


return 0;

}