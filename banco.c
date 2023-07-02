#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    system("clear");
    int escolhaDoUsuario, condicaoDeParada = 0;
    float valorNaContaDoCliente = 0, valorDepositado, valorASerRetirado;

    printf("Escolha uma opcao \n");
    printf("(1) - Deposito \n");
    printf("(2) - Retirada \n");
    printf("(3) - Saldo \n");
    printf("(4) - Sair do programa \n");
    scanf("%d", &escolhaDoUsuario);

    while(condicaoDeParada != 1){
        switch(escolhaDoUsuario){
            case 1: printf("Digite o valor do deposito: ");
                    scanf("%f", &valorDepositado);
                    valorNaContaDoCliente = valorNaContaDoCliente + valorDepositado;
                    printf("Atual valor em conta! %f", valorNaContaDoCliente);
                    printf("\n");
                    break;
            case 2: printf("Digite o valor a ser retirado: ");
                    scanf("%f", &valorASerRetirado);
                    valorNaContaDoCliente = valorNaContaDoCliente - valorASerRetirado;
                    printf("Atual saldo em conta! %f", valorNaContaDoCliente);;
                    printf("\n");
                    break;
            case 3: printf("Atual saldo em conta! %f", valorNaContaDoCliente);
                    printf("\n");
                    break;
            case 4: condicaoDeParada = 1;
                    printf("Operacoes finalizadas, muito obrigado!");
                    printf("\n");
                    break;
            default: printf("Numero digitado invalido! \n");
        }
        
        if(condicaoDeParada != 1){
                printf("Escolha uma opcao \n");
                printf("(1) - Deposito \n");
                printf("(2) - Retirada \n");
                printf("(3) - Saldo \n");
                printf("(4) - Sair do programa \n");
                scanf("%d", &escolhaDoUsuario);
        }

    }

    return 0;
}