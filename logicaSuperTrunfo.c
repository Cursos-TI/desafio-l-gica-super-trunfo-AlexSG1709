#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado_A[30], Estado_B[30], Estado_C[30];
    char cidade_A1[30], cidade_A2[30], cidade_A3[30], cidade_B1[30], cidade_B2[30], cidade_B3[30], cidade_C1[30], cidade_C2[30], cidade_C3[30];
    unsigned int populacao_A1, populacao_A2, populacao_A3, populacao_B1, populacao_b2, populacao_B3, populacao_C1, populacao_C2, populacao_C3;
    unsigned int pontos_turisticos_A1, pontos_turisticos_A2, pontos_turisticos_A3, pontos_turisticos_B1, pontos_turisticos_B2, pontos_turisticos_B3, pontos_turisticos_C1, pontos_turisticos_C2, pontos_turisticos_C3;
    float pib_A1, pib_A2, pib_A3, pib_B1, pib_B2, pib_B3, pib_C1, pib_C2, pib_C3;
    float area_A1, area_A2, area_A3, area_B1, area_B2, area_B3, area_C1, area_C2, area_C3;
    float densidade_populacional_A1, densidade_populacional_A2, densidade_populacional_A3, densidade_populacional_B1, densidade_populacional_B2, densidade_populacional_B3, densidade_populacional_C1, densidade_populacional_C2, densidade_populacional_C3;
    float pib_per_capita_A1, pib_per_capita_A2, pib_per_capita_A3, pib_per_capita_B1, pib_per_capita_B2, pib_per_capita_B3, pib_per_capita_C1, pib_per_capita_C2, pib_per_capita_C3;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Insira os dados da carta 1\n\n");

    printf("Digite o nome do primeiro estado\n");
    scanf("%s", Estado_A);

    printf("Digite o nome da primeira cidade do %s\n", Estado_A);
    scanf("%s", cidade_A1);

    printf("Digite a população da cidade de %s\n", cidade_A1);
    scanf("%u", &populacao_A1);

    printf("Digite o PIB da cidade de %s\n", cidade_A1);
    scanf("%f", &pib_A1);

    printf("Área da cidade de %s\n", cidade_A1);
    scanf("%f", &area_A1);

    printf("Digite a quantidade de pontos turísticos de %s\n", cidade_A1);
    scanf("%u", &pontos_turisticos_A1);

    densidade_populacional_A1 = populacao_A1 / area_A1;
    pib_per_capita_A1 = pib_A1 / populacao_A1;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
