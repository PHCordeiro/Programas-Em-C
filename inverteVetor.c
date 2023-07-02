#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorNumerosRecebidos[20], contadorDeIndice, vetorInverso[20], contadorIndiceInverso;
    
    printf("Primeiro Vetor \n");
    srand(20);
    for(contadorDeIndice = 0; contadorDeIndice < 20; contadorDeIndice++){
        vetorNumerosRecebidos[contadorDeIndice] = random() % 30;
        printf("Elemento: %d", vetorNumerosRecebidos[contadorDeIndice]);
        printf("\n");
    }
    
    printf("Segundo Vetor \n");
    for(contadorDeIndice = 19; contadorDeIndice >= 0; contadorDeIndice--){
        for(contadorIndiceInverso = 0; contadorIndiceInverso < 1; contadorIndiceInverso++){
            vetorInverso[contadorIndiceInverso] = vetorNumerosRecebidos[contadorDeIndice];
            printf("Elemento: %d", vetorInverso[contadorIndiceInverso]);
            printf("\n");
        }
    }
    
    return 0;
}