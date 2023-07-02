#include <stdio.h>

int main(){
    #define TAMANHO 10
    float numeroRecebido, contador, maiorNumero, menorNumero;
    printf("Escreva um numero: ");
    scanf("%f", &numeroRecebido);
    maiorNumero = numeroRecebido;
    menorNumero = numeroRecebido;

    for(contador = 1; contador <= TAMANHO; contador++){
        printf("Escreva um numero: ");
        scanf("%f", &numeroRecebido);
        if(numeroRecebido > maiorNumero){
            maiorNumero = numeroRecebido;
        }
        if(numeroRecebido < menorNumero){
            menorNumero = numeroRecebido;
        }
    }

    printf("O maior numero e: %f\n", maiorNumero);
    printf("O menor numero e: %f\n", menorNumero);
    return 0;
}