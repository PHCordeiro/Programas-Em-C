#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 5

int encontrarMaiorInteiro(int matriz[][COLUNAS]){
    int maiorNumero = 0, linhaDoMaior, colunaDoMaior, linhas, colunas; 
    for(linhas = 0; linhas < LINHAS; linhas++){
        for(colunas = 0; colunas < COLUNAS; colunas++){
            if(matriz[linhas][colunas] > maiorNumero){
                maiorNumero = matriz[linhas][colunas];
                linhaDoMaior = linhas;
                colunaDoMaior = colunas;
            }
        }
    }
    printf("\n");
    printf("O maior numero: %d\n", maiorNumero);
    printf("O maior numero: %d\n", linhaDoMaior+1);
    printf("O maior numero: %d\n", colunaDoMaior+1);
}

int main(){
    system("cls");
    int matriz[LINHAS][COLUNAS];
    int linhas, colunas;
    srand(22);
    for(linhas = 0; linhas < LINHAS; linhas++){
        for(colunas = 0; colunas < COLUNAS; colunas++){
            matriz[linhas][colunas] = rand() % 30;
        }
    }

    for(linhas = 0; linhas < LINHAS; linhas++){
        printf("\n");
        for(colunas = 0; colunas < COLUNAS; colunas++){
            printf("%4d", matriz[linhas][colunas]);
        }
    }

    encontrarMaiorInteiro(matriz);

    return 0;
}