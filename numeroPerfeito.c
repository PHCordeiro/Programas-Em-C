#include <stdio.h>

int verificadorNumeroPerfeito(int numero){
    int contador, somaDosValores = 0;
    for(contador = 1; contador < numero; contador++){
        if((numero % contador) == 0){
            somaDosValores = somaDosValores + contador;
        }
    }
    if(somaDosValores == numero){
        printf("Esse numero e perfeito!");
    }
    else{
        printf("Esse numero nao e perfeito!");
    }

}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    verificadorNumeroPerfeito(numero);

    return 0;
}