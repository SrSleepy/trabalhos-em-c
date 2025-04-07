/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;

    // Leitura das horas
    printf("Digite a hora de início do jogo: ");
    scanf("%d", &hora_inicio);
    
    printf("Digite a hora de término do jogo: ");
    scanf("%d", &hora_fim);

    // Cálculo da duração
    if (hora_inicio < hora_fim) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = (24 - hora_inicio) + hora_fim;
    }

    // Exibição do resultado
    printf("A duração do jogo foi de %d horas.\n", duracao);

    return 0;
}
