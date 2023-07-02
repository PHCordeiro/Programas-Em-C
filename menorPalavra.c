#include <stdio.h>
#include <string.h>

int main(){
    char primeiraPalavraRecebida[1000], segundaPalavraRecebida[1000];
    
    printf("Digite uma palavra!");
    scanf(" %[^\n]s", primeiraPalavraRecebida);
    printf("Digite outra palavra!");
    scanf(" %[^\n]s", segundaPalavraRecebida);

    if(strcmp(primeiraPalavraRecebida, segundaPalavraRecebida) > 0){
        printf("O menor foi: %s", segundaPalavraRecebida);
    }
    else{
        if(strcmp(segundaPalavraRecebida, primeiraPalavraRecebida) > 0){
            printf("O menor foi: %s", primeiraPalavraRecebida);
        }
        else{
            if(strcmp(primeiraPalavraRecebida, segundaPalavraRecebida) == 0){
                printf("As duas palavras sao iguais!");
            }
        }
    }

    return 0;
}

