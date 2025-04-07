/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    int horas_extras, horas_faltas, H;
    float premio;

    // Leitura das horas extras e horas faltas
    printf("Digite o número de horas extras: ");
    scanf("%d", &horas_extras);
    
    printf("Digite o número de horas faltas: ");
    scanf("%d", &horas_faltas);

    // Cálculo da diferença H
    H = horas_extras - horas_faltas;

    // Determinação do prêmio com base na tabela
    if (H >= 0 && H <= 10) {
        premio = 20.00;
    } else if (H > 10 && H <= 20) {
        premio = 40.00;
    } else if (H > 20 && H <= 30) {
        premio = 60.00;
    } else if (H > 30 && H <= 40) {
        premio = 80.00;
    } else if (H > 40 && H <= 100) {
        premio = 100.00;
    } else {
        premio = 0.00; 
        printf("Valor de H invalido. O valor de H deve estar entre 0 e 100.\n");
    }

    // Exibição do prêmio
    printf("O prêmio do funcionário é R$ %.2f\n", premio);

    return 0;
}
