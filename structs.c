#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[50];
    float altura;
    char sexo;
}tAluno;

int main(){

    int i, qtde;

       tAluno vAluno[10];

       printf("Quantos alunos: ");
       scanf("%d", &qtde);
       printf("\n");

       for(i=0; i<qtde; i++){
            fflush(stdin); //limpar para não pular
        printf("Nome: ");
        gets(vAluno[i].nome);


        printf("Matricula: ");
        scanf("%d", &vAluno[i].matricula);
        printf("\n");
       }
       for(i=0; i<qtde; i++){
           printf("%s %d\n", vAluno[i].nome, vAluno[i].matricula );
           printf("\n");

       }




}
