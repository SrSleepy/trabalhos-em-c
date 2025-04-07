/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    int a, b, c;

    // Leitura dos três valores inteiros
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    // Determinando o menor valor
    if (a <= b && a <= c) {
        printf("O menor valor é: %d\n", a);
    } else if (b <= a && b <= c) {
        printf("O menor valor é: %d\n", b);
    } else {
        printf("O menor valor é: %d\n", c);
    }

    return 0;
}
