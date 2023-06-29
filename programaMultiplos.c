#include <stdio.h>
#include <math.h>

int main(){
    int contador, somaMultiplosDeTres = 0, somaMultiplosDeCinco = 0;
    contador = 1;
    while(contador <= 1000){
        if(contador % 3 == 0){
            somaMultiplosDeTres = somaMultiplosDeTres + contador;
        }
        if(contador % 5 == 0){
            somaMultiplosDeCinco = somaMultiplosDeCinco + contador;
        }
        contador = contador + 1;
    }
    printf("Essa é a soma dos multiplos de 3: %d", somaMultiplosDeTres );
    printf("Essa é a soma dos multiplos de 5: %d", somaMultiplosDeCinco );
    return 0;
}