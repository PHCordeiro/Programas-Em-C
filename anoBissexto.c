#include <stdio.h>
#include <math.h>

int main(){
    int anoEscolhido;
    printf("Escolha um ano de até quatro dígitos: ");
    scanf("%d", &anoEscolhido);

    if((anoEscolhido % 4 == 0) && (anoEscolhido % 100 != 0)){
        printf("Esse ano é bissexto.");
    }
    else{
        if((anoEscolhido % 4 == 0) && (anoEscolhido % 400 == 0)){
            printf("Esse ano é bissexto.");
        }
        else{
            printf("Esse ano não é bissexto...");
        }
    }

    return 0;
}