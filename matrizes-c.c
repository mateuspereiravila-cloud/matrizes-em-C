// Código do Mateus Ávila, feito no programiz
#include <stdio.h>

int main() {

    int l, c, i, j, k;
    k=0;

    printf("===Construtor de Matrizes===\n");
    printf("\nDigite a quantidade de linhas para a matriz ");
    scanf("%d", &c);
    printf("\nDigite a quantidade de colunas para a matriz ");
    scanf("%d", &l);
    int mat[l][c];

    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("\nDigite o valor para a matriz [%d][%d] ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nSua matriz final é:\n");
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("[%d] ", mat[i][j]);
            k++;
            if(k % l == 0){
                printf("\n");
            }
        }
    }
}