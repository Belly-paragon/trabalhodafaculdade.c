#include <stdio.h>

int main() {
    // ===== Declaração das variáveis da primeira carta =====
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;

    // ===== Declaração das variáveis da segunda carta =====
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

    // ===== Leitura da Carta 1 =====
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Cálculos da Carta 1 =====
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // ===== Leitura da Carta 2 =====
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculos da Carta 2 =====
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // ===== Exibição das cartas =====
    printf("\n--- CARTAS CADASTRADAS ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao1, area1, pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao2, area2, pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===== Comparação das cartas =====
    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

