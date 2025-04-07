/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>
#include <math.h>  

int main() {
    char opcao;
    float area, raio, lado, altura, base_maior, base_menor, base_tri, altura_tri;

    // Exibe o menu de opções
    printf("Escolha uma opção:\n");
    printf("A - Cálculo da área do círculo\n");
    printf("B - Cálculo da área do retângulo\n");
    printf("C - Cálculo da área do trapézio\n");
    printf("D - Cálculo da área do triângulo\n");
    printf("Digite sua opção: ");
    scanf(" %c", &opcao);

    // Switch para calcular a área com base na opção escolhida
    switch(opcao) {
        case 'A':  // Cálculo da área do círculo
            printf("Digite o raio do círculo: ");
            scanf("%f", &raio);
            area = M_PI * pow(raio, 2); 
            printf("A área do círculo de raio %.2f é igual a %.2f m²\n", raio, area);
            break;

        case 'B':  // Cálculo da área do retângulo
            printf("Digite o lado do retângulo: ");
            scanf("%f", &lado);
            printf("Digite a altura do retângulo: ");
            scanf("%f", &altura);
            area = lado * altura;  
            printf("A área do retângulo de lado %.2f e altura %.2f é igual a %.2f m²\n", lado, altura, area);
            break;

        case 'C':  // Cálculo da área do trapézio
            printf("Digite a base maior do trapézio: ");
            scanf("%f", &base_maior);
            printf("Digite a base menor do trapézio: ");
            scanf("%f", &base_menor);
            printf("Digite a altura do trapézio: ");
            scanf("%f", &altura);
            area = ((base_maior + base_menor) * altura) / 2; 
            printf("A área do trapézio de base maior %.2f, base menor %.2f e altura %.2f é igual a %.2f m²\n", base_maior, base_menor, altura, area);
            break;

        case 'D':  // Cálculo da área do triângulo
            printf("Digite a base do triângulo: ");
            scanf("%f", &base_tri);
            printf("Digite a altura do triângulo: ");
            scanf("%f", &altura_tri);
            area = (base_tri * altura_tri) / 2;  
            printf("A área do triângulo de base %.2f e altura %.2f é igual a %.2f m²\n", base_tri, altura_tri, area);
            break;

        default:  // Caso o usuário insira uma opção inválida
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
