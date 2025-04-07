/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    int numero;

    // Leitura do número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verificando se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }

    // Verificando se o número é múltiplo de 3, 5 ou 7
    if (numero % 3 == 0) {
        printf("O número %d é múltiplo de 3.\n", numero);
    }
    if (numero % 5 == 0) {
        printf("O número %d é múltiplo de 5.\n", numero);
    }
    if (numero % 7 == 0) {
        printf("O número %d é múltiplo de 7.\n", numero);
    }

    return 0;
}
