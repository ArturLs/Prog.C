#include <stdio.h>
#include <string.h>

int main () {
   FILE *fp;
   char texto[100];
   int linhas;
   
   //ela retorna um ponteiro, logo uma variavel recebe ela
   fp = fopen("text.txt", "r"); 
   

   if(fp==NULL)
   printf("Erro ao abrir");

   //funcao retorna EOF se chegou no final do arquivo, entao quando nao retorna 0
   while(!feof(fp)){
   fgets(texto, 100, fp);  //1=string/ vetor  2= tamanho , 3= ponteiro ---- Ler string de um arqv
    if(strlen(texto) < 99 ) //ver quantidade de linhas ja que cada vetor armazena no maximo 100 caracteres porem um com valor menor, significa que a linha acabou.
     linhas++;
     printf("%d: %s-------\n", linhas, texto);
   }


   fclose(fp);
   return 0;

}

//fputs(texto, f);   texto[20] = "bananna"   FILE *f escrever texto no arqv

//fputc = escrever um caracter no arqv ||| fgetc= ler um caracter no arqv --- caracter por caracter

///////////////////////////////////////////////////////////////////////////////////////////////////

/*

escrever um bloco de bytes em um arquivo
fwrite (void *buffer, int Bytes, int count, FILE *f)

buffer = ponteiro generico ex: v[2]

Bytes= tamanho de cada unidade a ser gravada

count = total de dados a serem gravado

f = ponteiro do arquivo  (para trabalhar com arquivo deve-se usar ponteiro(manipular o arqv) )

ex: 

fwrite(v, sizeof(int), 5, f)

fwrite(str, sizeof(char), 20, f)   char str[20]

fwrite(&x, sizeof(float), 5, f)    float *x

deve usar "Wb" no fopen - escrita binaria

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Para ler um bloco de bytes de um arquivo usa-se:
fread(void *buffer, int bytes, int count, FILE *f)

fread(v, sizeof(int), 5, f)

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

semelhante ao printf, porém, ao invés de
escrever na tela, escrevemos no arquivo, usando
o fprintf( )

fprintf(FILE *f, "tipos de saida", variaveis);

*/

