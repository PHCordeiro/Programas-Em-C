#include <stdio.h>
#include <string.h>

int main(){
    int contadorDePessoas, numeroDeHomens = 0, numeroDeMulheres = 0;
    char nomeDaPessoa [100];
    char sexoDaPessoa [10];
    printf("Qual o seu nome?? ");
    scanf(" %[^\n]s", nomeDaPessoa);
    printf("Entre com o seu sexo! ");
    scanf(" %[^\n]s", sexoDaPessoa);
    
    for(contadorDePessoas = 1; contadorDePessoas <= 10; contadorDePessoas++){
        if(strcmp (sexoDaPessoa, "Masculino") == 0){
            numeroDeHomens++;
        }
        else{
            if(strcmp (sexoDaPessoa, "Feminino") == 0){
                numeroDeMulheres++;
            }
            else{
                printf("Sexo INVALIDO!");
            }
        } 
        
        printf("Qual o seu nome?? ");
        scanf(" %[^\n]s", nomeDaPessoa);
        printf("Entre com o seu sexo! ");
        scanf(" %[^\n]s", sexoDaPessoa);
    }
    
    printf("O numero de homens foi: %d\n", numeroDeHomens);
    printf("O numero de mulheres foi: %d\n", numeroDeMulheres);
    return 0;
}
