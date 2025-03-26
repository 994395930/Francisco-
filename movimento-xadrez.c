#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcularAtributos(Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

// Função para comparar duas cartas com base em um atributo
void compararCartas(Carta carta1, Carta carta2, char atributo[]) {
    printf("Comparação de cartas (Atributo: %s):\n\n", atributo);

    if (strcmp(atributo, "População") == 0) {
        printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);
        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (strcmp(atributo, "Área") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.area);
        if (carta1.area > carta2.area) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (strcmp(atributo, "PIB") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pib);
        if (carta1.pib > carta2.pib) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (strcmp(atributo, "Densidade Populacional") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.densidadePopulacional);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.densidadePopulacional);
        if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (strcmp(atributo, "PIB per capita") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);
        if (carta1.pibPerCapita > carta2.pibPerCapita) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else {
        printf("Atributo inválido para comparação!\n");
    }
}

// Função para simular o movimento do Cavalo
void movimentoCavalo() {
    const int movimentosBaixo = 2; // Número de movimentos para baixo
    const int movimentosEsquerda = 1; // Número de movimentos para a esquerda

    printf("\nMovimento do Cavalo:\n");

    // Loop aninhado para simular o movimento em "L"
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosEsquerda);
}

int main() {
    // Definição das duas cartas
    Carta carta1 = {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 699000000000.0, 10};
    Carta carta2 = {"Rio de Janeiro", "RJ01", "Rio de Janeiro", 6000000, 1182.30, 364000000000.0, 8};

    // Cálculo dos atributos derivados
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    // Escolha do atributo para comparação
    char atributo[] = "População"; // Altere para "Área", "PIB", "Densidade Populacional" ou "PIB per capita"

    // Comparação das cartas
    compararCartas(carta1, carta2, atributo);

    // Movimento do Cavalo
    movimentoCavalo();

    return 0;
}