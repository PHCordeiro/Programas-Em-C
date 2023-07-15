#include <stdio.h>
#include <stdlib.h>
#define LINHAS 4 
#define COLUNAS 4

int superiorDiagonalSecundaria(int matriz[][COLUNAS]){
    printf("Diagonal Secundária: \n");
    int linhas, colunas, auxiliar = COLUNAS-1;
    for(linhas = 0; linhas < LINHAS - 1; linhas++){
        printf("\n");
        for(colunas = 0; colunas < COLUNAS; colunas++){
            if(colunas < auxiliar){
                printf("%4d", matriz[linhas][colunas]);
            }
        }
        auxiliar--;
    }
}

int main(){
    int linha, coluna, primeiraMatriz[LINHAS][COLUNAS];
    srand(21);
    printf("Primeira Matriz: \n");
    for(linha = 0; linha < LINHAS; linha++){
        printf("\n\n");
        for(coluna = 0; coluna < COLUNAS; coluna++){
            primeiraMatriz[linha][coluna] = rand() % 30;
            printf("%4d", primeiraMatriz[linha][coluna]);
        }
    }
    printf("\n\n");
    superiorDiagonalSecundaria(primeiraMatriz);
}
