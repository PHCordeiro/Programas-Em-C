#include <stdio.h>

int main(){
    float numeroDigitado, fatorialDoNumeroDigitado = 1, contador = 1;
    printf("Digite um numero: ");
    scanf("%f", &numeroDigitado);

    while(contador <= numeroDigitado){
        fatorialDoNumeroDigitado = fatorialDoNumeroDigitado * contador;
        contador++;
    }

    printf("Esse e o fatorial do numero: %f\n", fatorialDoNumeroDigitado);
    return 0;
}