/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    int nota1, nota2, nota3;
    int soma = 0, contador = 0;
    float media;

    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    // Verificando as notas pares e somando
    if (nota1 % 2 == 0) {
        soma += nota1;
        contador++;
    }
    if (nota2 % 2 == 0) {
        soma += nota2;
        contador++;
    }
    if (nota3 % 2 == 0) {
        soma += nota3;
        contador++;
    }

    // Verificando se ao menos uma nota par foi encontrada
    if (contador > 0) {
        // Calculando a média das notas pares
        media = (float)soma / contador;
        printf("A média das notas pares é: %.2f\n", media);
    } else {
        printf("NENHUMA NOTA PAR\n");
    }

    return 0;
}
