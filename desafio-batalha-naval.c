#include <stdio.h>

// Função recursiva para o movimento da Torre
void movimentoTorre(int casas, char direcao[]) {
    if (casas == 0) return; // Caso base: nenhuma casa restante
    printf("%s\n", direcao);
    movimentoTorre(casas - 1, direcao); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void movimentoBispoRecursivo(int casas, int diagonal) {
    if (casas == 0) return; // Caso base: nenhuma casa restante
    printf("Diagonal %d\n", diagonal);
    movimentoBispoRecursivo(casas - 1, diagonal); // Chamada recursiva
}

// Função para o movimento do Bispo com loops aninhados
void movimentoBispoComLoops(int movimentosVerticais, int movimentosHorizontais) {
    printf("\nMovimento do Bispo (com loops aninhados):\n");
    for (int i = 0; i < movimentosVerticais; i++) {
        for (int j = 0; j < movimentosHorizontais; j++) {
            printf("Diagonal (Vertical: %d, Horizontal: %d)\n", i + 1, j + 1);
        }
    }
}

// Função recursiva para o movimento da Rainha
void movimentoRainha(int casas, char direcao[]) {
    if (casas == 0) return; // Caso base: nenhuma casa restante
    printf("%s\n", direcao);
    movimentoRainha(casas - 1, direcao); // Chamada recursiva
}

// Função para o movimento do Cavalo com loops complexos
void movimentoCavalo() {
    const int movimentosVerticais = 2; // Número de movimentos para cima
    const int movimentosHorizontais = 1; // Número de movimentos para a direita

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Cima\n");
        for (int j = 0; j < movimentosHorizontais; j++) {
            if (j == 0) {
                printf("Direita\n");
                break; // Sai do loop interno após o movimento
            }
        }
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    movimentoTorre(3, "Cima"); // Exemplo: Torre se move 3 casas para cima

    // Movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo (recursivo):\n");
    movimentoBispoRecursivo(3, 1); // Exemplo: Bispo se move 3 casas na diagonal 1

    // Movimento do Bispo (com loops aninhados)
    movimentoBispoComLoops(3, 3); // Exemplo: Bispo se move 3 casas em ambas as direções

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    movimentoRainha(4, "Direita"); // Exemplo: Rainha se move 4 casas para a direita

    // Movimento do Cavalo
    movimentoCavalo(); // Exemplo: Cavalo se move em "L" (2 para cima, 1 para a direita)

    return 0;
}