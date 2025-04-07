/*****************************************************************************************************************************
Nome:Gabriel do nascimento Caniato
Data:06;04/2025
Objetivo:Fazer os exercicios d0 1 ao 15
*****************************************************************************************************************************/

#include <stdio.h>

int main() {
    char nome[50];
    char sexo;

    // Leitura do nome e sexo
    printf("Digite o nome da pessoa: ");
    fgets(nome, sizeof(nome), stdin); 
    
    printf("Digite o sexo da pessoa (M para Masculino, F para Feminino): ");
    scanf("%c", &sexo);  

    // Verificando o sexo e exibindo a mensagem
    if (sexo == 'M' || sexo == 'm') {
        printf("ILMO SR.\n");
    } else if (sexo == 'F' || sexo == 'f') {
        printf("ILMA SRA.\n");
    } else {
        printf("Sexo inválido!\n");
        return 1;  
    }

    // Exibindo o nome
    printf("Nome: %s", nome);

    return 0;
}
