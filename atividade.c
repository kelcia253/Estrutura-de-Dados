#include <stdio.h>
#include <stdlib.h>
#define maxlin 3
#define maxcol 4

int main(){

    int lin,col;
    int matriz[maxlin][maxcol] = {{1,2,3,4},{5,6,7,8},{9,1,2,3}};
    int soma =0;
    float media = 0;


    //Primeiro for vai passar nas linhas e depois vamos fazer outro for para as colunas

    for(lin = 0; lin<maxlin; lin++ ){
        for(col = 0; col<maxcol; col++){
            //Acessar célula especifica = linha x coluna
            printf("%d", matriz[lin][col]);
             printf("\n");
           soma = soma + matriz[lin][col];



        }
         printf("\n");
        printf("Seu resultado: %d", soma);
        printf("\n");
         media = (float)soma/ (maxlin*maxcol);
         printf("Sua média é: %.2f", media);
        printf("\n");
         printf("\n");
    }





}
