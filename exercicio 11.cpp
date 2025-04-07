/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    char nome[50];
    float horas_trabalhadas, salario_hora, salario_total;
    float horas_extras;

    // Leitura do nome, horas trabalhadas e salário por hora
    printf("Digite o nome do funcionario: ");
    fgets(nome, sizeof(nome), stdin);  // Usando fgets para permitir espaços no nome

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o salario por hora: ");
    scanf("%f", &salario_hora);

    // Se o funcionário trabalhou mais de 40 horas, calcula as horas extras
    if (horas_trabalhadas > 40) {
        horas_extras = horas_trabalhadas - 40;
        salario_total = (40 * salario_hora) + (horas_extras * salario_hora * 1.5);
    } else {
        salario_total = horas_trabalhadas * salario_hora;
    }

    // Exibe o nome do funcionário e o salário total
    printf("\nFuncionario: %s", nome);
    printf("Salario total: R$ %.2f\n", salario_total);

    return 0;
}
