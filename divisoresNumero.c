#include <stdio.h>

int main(){
    int numeroDigitado, contador, numeroDeDivisores = 0;
    printf("Digite um numero: ");
    scanf("%d", &numeroDigitado);

    for(contador = 1; contador<=numeroDigitado; contador++){
        if (numeroDigitado % contador == 0){
            printf("Esse numero e divisivel por: %d\n", contador);
            numeroDeDivisores++;
        }
        
    }
    if((numeroDeDivisores == 2) || (numeroDeDivisores == 1)){
        printf("Logo, esse numero e primo!");
    }
    else{
        printf("Logo, esse numero NAO e primo!");
    }

    return 0;
}