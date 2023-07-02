#include <stdio.h>

int main(){
    float populacaoPaisA = 5000000, populacaoPaisB = 7000000, contadorDeAnos = 0;

    while(populacaoPaisA <= populacaoPaisB){
        populacaoPaisA = populacaoPaisA + ((populacaoPaisA*3)/100);
        populacaoPaisB = populacaoPaisB + ((populacaoPaisB*2)/100);
        contadorDeAnos++;
    }

    printf("Anos necesarios: %f\n", contadorDeAnos);
    return 0;
}