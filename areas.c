#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int escolhaDoUsuario, condicaoDeParada = 0;
    float ladoDoQuadrado, baseDoRetangulo, alturaDoRetangulo, baseDoTriangulo, alturaDoTriangulo, raioDoCirculo, numeroDePi;
    float areaDoQuadrado, areaDoRetangulo, areaDoTriangulo, areaDoCirculo;

    printf("Escolha uma opcao \n");
    printf("(1) - Area do quadrado \n");
    printf("(2) - Area do retangulo \n");
    printf("(3) - Area do triangulo \n");
    printf("(4) - Area do circulo \n");
    printf("(5) - Sair do programa \n");
    scanf("%d", &escolhaDoUsuario);

    while(condicaoDeParada != 1){
        switch(escolhaDoUsuario){
        case 1: printf("Informe o lado do quadrado: \n");
                scanf("%f", &ladoDoQuadrado);
                areaDoQuadrado = ladoDoQuadrado * ladoDoQuadrado;
                printf("Essa e a area do quadrado: %f", areaDoQuadrado);
                printf("\n");
            break;
        case 2: printf("Informe a base do retangulo: \n");
                scanf("%f", &baseDoRetangulo);
                printf("Informe a altura do retangulo: \n");
                scanf("%f", &alturaDoRetangulo);
                areaDoRetangulo = baseDoRetangulo * alturaDoRetangulo;
                printf("Essa e a area do retangulo: %f", areaDoRetangulo);
                printf("\n");
            break;
        case 3: printf("Informe a base do triangulo: \n");
                scanf("%f", &baseDoTriangulo);
                printf("Informe a altura do triangulo: \n");
                scanf("%f", &alturaDoTriangulo);
                areaDoTriangulo = (baseDoTriangulo * alturaDoTriangulo)/2;
                printf("Essa e a area do triangulo: %f", areaDoTriangulo);
                printf("\n");
            break;
        case 4: printf("Aproximando pi como 3.14, informe o raio do circulo: \n");
                scanf("%f", &raioDoCirculo);
                areaDoCirculo = 3.14*(raioDoCirculo * raioDoCirculo);
                printf("Essa e a area do circulo: %f", areaDoCirculo);
                printf("\n");
            break;
        case 5: condicaoDeParada = 1;
                printf("Programa encerrado!");
                printf("\n");
            break;
        default: printf("Desculpa, mas a operacao e invalida!");
                 printf("\n");
            break;
        }

        if(condicaoDeParada != 1){
            printf("Escolha uma opcao \n");
            printf("(1) - Area do quadrado \n");
            printf("(2) - Area do retangulo \n");
            printf("(3) - Area do triangulo \n");
            printf("(4) - Area do circulo \n");
            printf("(5) - Sair do programa \n");
            scanf("%d", &escolhaDoUsuario);
        }

    }

    return 0;
}