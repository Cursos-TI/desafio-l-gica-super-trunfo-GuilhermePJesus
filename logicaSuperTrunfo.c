#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    int pontos1;
    float area1;
    float pib1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    int pontos2;
    float area2;
    float pib2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    int opcao;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (letra): ");
    scanf("%c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + densidade1;

    printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado (letra): ");
    scanf("%c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + densidade2;

    // Mostrar cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Super Poder da Carta 1: %.2f\n", superpoder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder da Carta 2: %.2f\n", superpoder2);

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

    printf("\n=== Menus interativos ===\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turísticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB per Capita.\n");
    printf("7. Super Poder.\n");
    printf("Opção inválida.\n");
    scanf("%d", &opcao);

    printf("\n=== Comparação das Cartas ===\n");
    if (populacao1 > populacao2) {
        printf("\nPopulação: Carta 1 venceu!\n");
    } else if (populacao1 < populacao2) {
        printf("\nPopulação: Carta 2 venceu!\n");
    } else {
        printf("\nPopulação: Empate!\n");
    }

    if (area1 > area2) {
        printf("\nÁrea: Carta 1 venceu!\n");
    } else if (area1 < area2) {
        printf("\nÁrea: Carta 2 venceu!\n");
    } else {
        printf("\nÁrea: Empate!\n");
    }

    if (pib1 > pib2) {
        printf("\nPIB: Carta 1 venceu!\n");
    } else if (pib1 < pib2) {
        printf("\nPIB: Carta 2 venceu!\n");
    } else {
        printf("\nPIB: Empate!\n");
    }

    if (pontos1 > pontos2) {
        printf("\nPontos Turísticos: Carta 1 venceu!\n");
    } else if (pontos1 < pontos2) {
        printf("\nPontos Turísticos: Carta 2 venceu!\n");
    } else {
        printf("\nPontos Turísticos: Empate!\n");
    }

    if (densidade1 < densidade2) {
        printf("\nDensidade Populacional: Carta 1 venceu!\n");
    } else if (densidade2 < densidade1) {
        printf("\nDensidade Populacional: Carta 2 venceu!\n");
    } else {
        printf("\nDensidade Populacional: Empate!\n");
    }

    if (pibpercapita1 > pibpercapita2) {
        printf("\nPIB per Capita: Carta 1 venceu!\n");
    } else if (pibpercapita1 < pibpercapita2) {
        printf("\nPIB per Capita: Carta 2 venceu!\n");
    } else {
        printf("\nPIB per Capita: Empate!\n");
    }

    if (superpoder1 > superpoder2) {
        printf("\nSuper Poder: Carta 1 venceu!\n");
    } else if (superpoder1 < superpoder2) {
        printf("\nSuper Poder: Carta 2 venceu!\n");
    } else {
        printf("\nSuper Poder: Empate!\n");
    }

    return 0;
}
