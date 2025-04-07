/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    char nome[50], sexo;
    int idade;
    float mensalidade;

    // Leitura dos dados do associado
    printf("Digite o nome do associado: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo); // O espaço antes de %c é necessário para consumir qualquer caractere de nova linha.

    printf("Digite o valor da mensalidade: ");
    scanf("%f", &mensalidade);

    // Aplicando descontos de acordo com o sexo e idade
    if (sexo == 'F' || sexo == 'f') { // Sexo feminino
        if (idade <= 30) {
            mensalidade *= 0.8;  // 20% de desconto
        } else if (idade >= 31 && idade <= 40) {
            mensalidade *= 0.7;  // 30% de desconto
        } else {
            mensalidade *= 0.65; // 35% de desconto
        }
    } else if (sexo == 'M' || sexo == 'm') { // Sexo masculino
        if (idade <= 25) {
            // Sem desconto
        } else {
            mensalidade *= 0.75; // 25% de desconto
        }
    }

    // Exibindo o nome, idade e mensalidade a pagar
    printf("\nNome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Mensalidade a pagar: R$ %.2f\n", mensalidade);

    return 0;
}
