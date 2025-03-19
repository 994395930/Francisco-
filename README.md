#include <stdio.h>

int main() {
    char estado1, estado2;
    char codCard1[4], codCard2[4];
    char namecid1[20], namecid2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numTuriste1, numTuriste2;
    float densidPop1, densidPop2;
    float perCap1, perCap2;
    float soma1, soma2;
    int resultado;

    printf("**Olá, seja bem-vindo**\n-----------------------\n SUPER TRUNFO - CIDADES\n-----------------------\n\n");

    printf("-->CARTA N1<--\n");
    printf("Digite uma letra de A a H representando um dos estados\n");
    scanf(" %c", &estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (Ex: A01, B03)\n");
    scanf("%s", codCard1);
    printf("Informe o nome da cidade\n");
    scanf("%s", namecid1);
    printf("Informe o número de Habitantes\n");
    scanf("%lu", &populacao1);
    printf("Informe a área da Cidade (km²)\n");
    scanf("%f", &area1);
    printf("Informe o PIB da Cidade (em bilhões de reais)\n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de Pontos Turísticos:\n");
    scanf("%d", &numTuriste1);

    printf("\n\n-->CARTA N2<--\n");
    printf("Digite uma letra de A a H representando um dos estados\n");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (Ex: A01, B03)\n");
    scanf("%s", codCard2);
    printf("Informe o nome da cidade\n");
    scanf("%s", namecid2);
    printf("Informe o número de Habitantes\n");
    scanf("%lu", &populacao2);
    printf("Informe a área da Cidade (km²)\n");
    scanf("%f", &area2);
    printf("Informe o PIB da Cidade (em bilhões de reais)\n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de Pontos Turísticos:\n");
    scanf("%d", &numTuriste2);

    printf("\n\nCARTA N1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCard1);
    printf("Nome da cidade: %s\n", namecid1);
    printf("População: %lu\n", populacao1);
    printf("Área (em km²): %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numTuriste1);
    densidPop1 = (float)populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidPop1);
    perCap1 = (float)pib1 / populacao1;
    printf("PIB per Capita: %.2f reais\n", perCap1);
    soma1 = (float)populacao1 + area1 + pib1 + numTuriste1 + densidPop1 + perCap1;
    printf("Super Poder: %.2f\n", soma1);

    printf("\n\n\nCARTA N2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCard2);
    printf("Nome da cidade: %s\n", namecid2);
    printf("População: %lu\n", populacao2);
    printf("Área (em km²): %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numTuriste2);
    densidPop2 = (float)populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidPop2);
    perCap2 = (float)pib2 / populacao2;
    printf("PIB per Capita: %.2f reais\n", perCap2);
    soma2 = (float)populacao2 + area2 + pib2 + numTuriste2 + densidPop2 + perCap2;
    printf("Super Poder: %.2f\n\n", soma2);

    printf("Comparação de Cartas:\n");
    resultado = populacao1 > populacao2;
    printf("População: %s\n", resultado ? "Carta 1" : "Carta 2");
    resultado = area1 > area2;
    printf("Área: %s\n", resultado ? "Carta 1" : "Carta 2");
    resultado = pib1 > pib2;
    printf("PIB: %s\n", resultado ? "Carta 1" : "Carta 2");
    resultado = numTuriste1 > numTuriste2;
    printf("Pontos Turísticos: %s\n", resultado ? "Carta 1" : "Carta 2");
    resultado = densidPop1 < densidPop2;
    printf("Densidade Populacional: %s\n", resultado ? "Carta 1" : "Carta 2");
    resultado = perCap1 > perCap2;
    printf("PIB per Capita: %s\n", resultado ? "Carta 1" : "Carta 2");
    resultado = soma1 > soma2;
    printf("Super Poder: %s\n", resultado ? "Carta 1" : "Carta 2");

    return 0;
}