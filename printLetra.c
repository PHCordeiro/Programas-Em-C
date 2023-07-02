#include <stdio.h>
#include <string.h>

int main(){
    int tamanhoDoNome, contador = 0;
    char nomeDaPessoa[100];
    printf("Digite o seu nome! ");
    scanf("%[^\n]s", nomeDaPessoa);
    tamanhoDoNome = strlen(nomeDaPessoa);

    while(contador < tamanhoDoNome){
        printf("%c\n", nomeDaPessoa[contador]);
        contador++;
    }

    return 0;
}