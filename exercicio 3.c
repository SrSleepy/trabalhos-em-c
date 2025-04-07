/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    int A, B, Y;

    // Leitura das variáveis A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Condições para calcular Y
    if (A < B) {
        Y = B - A;
    } else if (B < A) {
        Y = A - B;
    } else {
        Y = A + B;
    }

    // Imprimindo os valores de A, B e Y
    printf("\nValor de A: %d\n", A);
    printf("Valor de B: %d\n", B);
    printf("Valor de Y: %d\n", Y);

    return 0;
}
