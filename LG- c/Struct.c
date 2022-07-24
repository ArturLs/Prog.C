#include<stdio.h>
#include<string.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    int hora, minuto, segundo;

}Hora;

typedef struct{
    int codigo;
    char nome[50];
    char origem[40],destino[4];
    Data data;
    Hora hora;
    float valor;

}bilhete;

int main(){
    bilhete x;
    
    
    printf("Informe o nome do passageiro: ");
    gets(x.nome);

    printf("Informe a origem: ");
    gets(x.origem);

    printf("Informe o destino: ");
    gets(x.destino);

    printf("Informe o codigo: ");
    scanf("%d", &x.codigo);

    
    printf("Informe o dia: ");
    scanf("%d", &x.data.dia);

    printf("Informe o mes: ");
    scanf("%d", &x.data.mes);

    printf("Informe o ano: ");
    scanf("%d", &x.data.ano);


    printf("Informe o hora: ");
    scanf("%d", &x.hora.hora);

    printf("Informe o minuto: ");
    scanf("%d", &x.hora.minuto);


    printf("Nome = %s \n", x.nome);
    printf("Data = %d/%d/%d \n", x.data.dia, x.data.mes, x.data.ano);
    printf("Hora = %05d : %02d \n", x.hora.hora, x.hora.minuto);


    


    
   


    return 0;
}