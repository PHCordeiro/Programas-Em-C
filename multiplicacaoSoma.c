#include <stdio.h>
#include <math.h>

int main(){
    float primeiroNumero, segundoNumero, contador, multiplicacaoPorSoma = 0;
    printf("Digite o primeiro número: ");
    scanf("%f", &primeiroNumero);
    printf("Digite o segundo número: ");
    scanf("%f", &segundoNumero);

    for(contador = 1; contador <= segundoNumero; contador++){
        multiplicacaoPorSoma = multiplicacaoPorSoma + primeiroNumero;
    }
    printf("%f", multiplicacaoPorSoma);
    return 0;
}