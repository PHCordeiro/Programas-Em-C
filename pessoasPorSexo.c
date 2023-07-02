#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct informacoesPessoas{
    char sexoDaPessoa[200][10], nomeDaPessoa[200][30];
};

int main(){
    struct informacoesPessoas pessoa;
    int linhas, colunas;
    for(linhas = 0; linhas < 200; linhas++){
        for(colunas = 0; colunas < 1; colunas++){
            printf("Entre com o nome:");
            scanf(" %[^\n]s\n", pessoa.nomeDaPessoa[linhas]);
            printf("Entre com o sexo:");
            scanf(" %[^\n]s\n", pessoa.sexoDaPessoa[linhas]);
        }
    }
    printf("\n");
    printf("Todas as mulheres: \n");
    for(linhas = 0; linhas < 200; linhas++){
        for(colunas = 0; colunas < 1; colunas++){
            if((strcmp(pessoa.sexoDaPessoa[linhas], "Feminino") == 0) || (strcmp(pessoa.sexoDaPessoa[linhas], "feminino") == 0)){
                printf("%s \n", pessoa.nomeDaPessoa[linhas]);
            }
        }
    }
    printf("\n");
    printf("Todas os homens: \n");
    for(linhas = 0; linhas < 200; linhas++){
        for(colunas = 0; colunas < 1; colunas++){
            if((strcmp(pessoa.sexoDaPessoa[linhas], "Masculino") == 0) || (strcmp(pessoa.sexoDaPessoa[linhas], "masculino") == 0)){
                printf("%s \n", pessoa.nomeDaPessoa[linhas]);
            }
        }
    }

    return 0;
}