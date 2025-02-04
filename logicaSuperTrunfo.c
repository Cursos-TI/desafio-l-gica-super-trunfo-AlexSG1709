#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado1[30], Estado2[30], cidade1[30], cidade2[30];
    unsigned int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float pib1, pib2, area1, area2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    //carta 1

    printf("Insira os dados da carta 1\n\n");

    printf("Digite o nome do estado\n");
    scanf("%s", Estado1);

    printf("Digite o nome da cidade do %s\n", Estado1);
    scanf("%s", cidade1);

    printf("Digite a população da cidade de %s\n", cidade1);
    scanf("%u", &populacao1);

    printf("Digite o PIB da cidade de %s\n", cidade1);
    scanf("%f", &pib1);

    printf("Área da cidade de %s\n", cidade1);
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos de %s\n", cidade1);
    scanf("%u", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    //carta 2

     printf("Insira os dados da carta 2\n\n");

    printf("Digite o nome do estado\n");
    scanf("%s", Estado2);

    printf("Digite o nome da cidade do %s\n", Estado2);
    scanf("%s", cidade2);

    printf("Digite a população da cidade de %s\n", cidade2);
    scanf("%u", &populacao2);

    printf("Digite o PIB da cidade de %s\n", cidade2);
    scanf("%f", &pib2);

    printf("Área da cidade de %s\n", cidade2);
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos de %s\n", cidade2);
    scanf("%u", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    //comparando as cartas

    if (populacao1 > populacao2) {
        printf("A cidade %s tem a população maior.\n", cidade1);
    } else {
        printf("A cidade %s tem a população maior.\n", cidade2);
    }

    if (pib1 > pib2) {
        printf("A cidade %s tem PIB maior.\n", cidade1);
    } else {
        printf("A cidade %s tem PIB maior.\n", cidade2);
    }

    if (area1 > area2) {
        printf("A cidade %s tem uma área maior.\n", cidade1);
    } else {
        printf("A cidade %s tem uma área maior.\n", cidade2);
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("A cidade %s tem mais pontos turísticos.\n", cidade1);
    } else {
        printf("A cidade %s tem mais pontos turísticos.\n", cidade2);
    }

    if (densidade_populacional1 < densidade_populacional2) {
        printf("A cidade %s vence por ter a menor densidade populacional.\n", cidade1);
    } else {
        printf("A cidade %s vence por ter a menor densidade populacional.\n", cidade2);
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("A cidade %s tem o maior PIB per capita.\n", cidade1);
    } else {
        printf("A cidade %s tem o maior PIB per capita.\n", cidade2);
    }

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
