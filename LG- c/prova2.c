#include <stdio.h>
#include <string.h>
#define n 3

void Line(void) {
    
    for(int i=0;i<55;i++)
        printf("*");
    printf("\n");
    
}


typedef struct metricas{
     
    float pontos, rebotes, assistencias, plusminus;

} metricas; 


typedef struct informacoes{
    
    char nome[30];
    int idade;
    int posicao;
    char time[30];
    float score;
    metricas metricass;
;


}atleta;


atleta le_atleta(){
    
    atleta atl;

    Line();
    printf("\n");

    printf("Informe o nome do atleta: ");
    gets(atl.nome);
    fflush(stdin);

    printf("Informe o time do atleta: ");
    gets(atl.time);
    fflush(stdin);

    printf("Informe a idade do atleta: ");
    scanf("%d", &atl.idade );
    fflush(stdin);

    do{
    printf("Informe a posicao do atleta (entre 1 a 5): ");
    scanf("%d", &atl.posicao );
    fflush(stdin);
    }while(atl.posicao >5 || atl.posicao <1);


    le_metricas(&atl.metricass);

    printf("\n");
    
  

    return atl;
    
}

void le_metricas(metricas *x){

    printf("\n");

    printf("Informe os pontos do atleta: ");
    scanf("%f",  &x->pontos);


    printf("Informe a quantidade de rebotes do atleta: ");
    scanf("%f", &x->rebotes );

    printf("Informe o numero de assistencias do atleta: ");
    scanf("%f", &x->assistencias);

    printf("Informe o numero de plusminus do atleta: ");
    scanf("%f", &x->plusminus);
    getchar();

    printf("\n");
   

    Line();


}


void computa_scores (atleta l[n], int i){
    
    FILE *N;
    N = fopen("scores.txt", "w+");    
   l[i].score = ( l[i].metricass.pontos + 5*l[i].metricass.assistencias + 3* l[i].metricass.rebotes + 10* l[i].metricass.plusminus );
    
    
    for(int u=0; u<n; u++){
    fprintf(N, "Score atleta %d = %.2f\n", (u+1) ,l[u].score );
    }



    fclose(N);


}


void imprimir_dados(atleta l[n], int i){

   printf("Atleta [%d] = %s, com %.2f pontos, %.2f assistencias, %.2f rebotes e %.2f plusminus \n ", (i+1),l[i].nome ,l[i].metricass.pontos, l[i].metricass.assistencias, l[i].metricass.rebotes, l[i].metricass.plusminus);

   printf("O Score dele foi de %.2f\n\n",  l[i].score);

}



int main(){

    int i;
    atleta v[n];

    for(i=0;i<n;i++){
        v[i]= le_atleta();
    }

  
   for(i=0; i<n; i++){
       computa_scores(v, i);
   }

   
   for(i=0; i<n; i++){
       imprimir_dados(v, i);
   }

      for(i=0; i<n; i++){
       
       if( (v[i].score >= v[0].score)  &&  (v[i].score >= v[1].score)  &&  (v[i].score >= v[2].score) ){
          
        printf("O atleta que sera o MVP sera |%s|, com o score de %.2f\n\n", v[i].nome, v[i].score);

       
       }
   
   }

    Line();
 
    return 0;
}