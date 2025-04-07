/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    float salario_bruto, premio, base_inss, base_ir;
    float taxa_inss, taxa_ir;
    float rendimento, desconto_inss, desconto_ir, salario_liquido;

    // Leitura dos dados fornecidos
    printf("Digite o salário bruto: ");
    scanf("%f", &salario_bruto);
    
    printf("Digite o valor do prêmio: ");
    scanf("%f", &premio);
    
    printf("Digite a base do INSS: ");
    scanf("%f", &base_inss);
    
    printf("Digite a base do Imposto de Renda (IR): ");
    scanf("%f", &base_ir);
    
    // Taxas de INSS e IR
    printf("Digite a taxa do INSS (em porcentagem, ex: 10 para 10%%): ");
    scanf("%f", &taxa_inss);
    
    printf("Digite a taxa do Imposto de Renda (em porcentagem, ex: 15 para 15%%): ");
    scanf("%f", &taxa_ir);

    // Cálculo do rendimento
    rendimento = salario_bruto + premio;

    // Inicialização dos descontos
    desconto_inss = 0;
    desconto_ir = 0;

    // Cálculo do desconto de INSS
    if (rendimento > base_inss) {
        desconto_inss = rendimento * (taxa_inss / 100);
    }

    // Cálculo do desconto de IR
    if ((rendimento - desconto_inss) > base_ir) {
        desconto_ir = (rendimento - desconto_inss) * (taxa_ir / 100);
    }

    // Cálculo do salário líquido
    salario_liquido = rendimento - desconto_inss - desconto_ir;

    // Exibição do demonstrativo de pagamento
    printf("\nDemonstrativo de pagamento:\n");
    printf("Salário Bruto: R$ %.2f\n", salario_bruto);
    printf("Prêmio: R$ %.2f\n", premio);
    printf("Rendimento (Salário Bruto + Prêmio): R$ %.2f\n", rendimento);
    printf("Desconto de INSS: R$ %.2f\n", desconto_inss);
    printf("Desconto de Imposto de Renda (IR): R$ %.2f\n", desconto_ir);
    printf("Salário Líquido: R$ %.2f\n", salario_liquido);

    return 0;
}
