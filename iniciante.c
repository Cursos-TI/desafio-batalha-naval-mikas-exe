#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros

    // Adiciona barcos representados por 3
    tabuleiro[5][3] = 3; // Barco horizontal
    tabuleiro[5][4] = 3;
    tabuleiro[5][5] = 3;

    tabuleiro[2][8] = 3; // Barco vertical
    tabuleiro[3][8] = 3;
    tabuleiro[4][8] = 3;

    printf("TABULEIRO DE BATALHA NAVAL\n");

    // Imprime o cabeçalho das colunas
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    // Imprime o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%d ", i); // Imprime o índice da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime cada célula do tabuleiro
        }
        printf("\n");
    }

    return 0;
}