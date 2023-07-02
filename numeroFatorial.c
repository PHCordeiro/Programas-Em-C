#include <stdio.h>

int fatorialDoNumero(int numero){
    int contador, numeroFinal = numero;
    if(numero < 0){
        printf("-1");
    }
    else{
        if(numero == 0){
            printf("1");
        }
        else{
            for(contador = 1; contador < numero; contador++){
                numeroFinal = numeroFinal * contador;
            }
            printf("Fatorial: %d", numeroFinal);
        }
    }

}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    fatorialDoNumero(numero);
    
    return 0;
}