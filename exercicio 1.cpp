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
    scanf(" %c", &sexo); 

    printf("Digite o valor da mensalidade: ");
    scanf("%f", &mensalidade);

    // Aplicando descontos de acordo com o sexo e idade
    if (sexo == 'F' || sexo == 'f') { 
        if (idade <= 30) {
            mensalidade *= 0.8;  
        } else if (idade >= 31 && idade <= 40) {
            mensalidade *= 0.7;  
        } else {
            mensalidade *= 0.65; 
        }
    } else if (sexo == 'M' || sexo == 'm') { 
        if (idade <= 25) {
            
        } else {
            mensalidade *= 0.75; 
        }
    }

    // Exibindo o nome, idade e mensalidade a pagar
    printf("\nNome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Mensalidade a pagar: R$ %.2f\n", mensalidade);

    return 0;
}
