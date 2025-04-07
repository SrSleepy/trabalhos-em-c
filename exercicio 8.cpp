/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    // Leitura das quatro notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calculando a média
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Verificando a aprovação ou reprovação
    if (media >= 7) {
        printf("Aluno Aprovado! Média: %.2f\n", media);
    } else {
        printf("Aluno Reprovado! Média: %.2f\n", media);
    }

    return 0;
}
