#include<stdlib.h>

/*void troca(int *c, int *d)
{
int temp = *c;
*c=*d;
*d=temp;
}


int main()
{
int a=2,b=3;
printf("Antes: a=%d, b=%d \n",a,b);
troca(&a,&b);
printf("Depois: a=%d, b=%d \n",a,b);
}
*/



void dobravalor(int vet[], int tamanho){  // int *vet

for(int i=0;i<tamanho;i++)
vet[i] = vet[i]*2;

}

int main(){

int i, vetor[5] = {3, 7, 9, 11, 32};

dobravalor(vetor,5);

for(i=0;i<5;i++)
printf("%d ",vetor[i]);
printf("\n");

}