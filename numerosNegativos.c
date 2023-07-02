#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int contadorNumerosNegativos(int *vetorNumeros){
    int contador, contadorNegativos = 0;
    for(contador = 0; contador < TAMANHO; contador++){
        if(vetorNumeros[contador] < 0){
            contadorNegativos++;
        }
    }
    return printf("Quantidade de numeros negativos: %d", contadorNegativos);
}

int main(){
    system("cls");
    int contador, vetorNumeros[TAMANHO];
    srand(21);
    for(contador = 0; contador < TAMANHO; contador++){
        printf("Digite um numero: ");
        scanf("%d", &vetorNumeros[contador]);
    }
    for(contador = 0; contador < TAMANHO; contador++){
        printf("%4d", vetorNumeros[contador]);
    }
    printf("\n");
    contadorNumerosNegativos(vetorNumeros);

    return 0;
}