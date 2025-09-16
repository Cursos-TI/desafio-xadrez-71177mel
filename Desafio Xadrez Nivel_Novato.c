#include <stdio.h>

int main() {
    // ==========================
    // Definição das variáveis
    // ==========================
    int casasTorre = 5;    // Movimentos da Torre
    int casasBispo = 5;    // Movimentos do Bispo
    int casasRainha = 8;   // Movimentos da Rainha
    int passosVerticaisCavalo = 2; // Duas casas para baixo
    int passosHorizontaisCavalo = 1; // Uma casa para a esquerda
    int i, j;              // Contadores para loops

    // ==========================
    // Movimento da Torre (FOR)
    // ==========================
    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }

    // ==========================
    // Movimento do Bispo (WHILE)
    // ==========================
    printf("\n=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (casa %d)\n", i);
        i++;
    }

    // ==========================
    // Movimento da Rainha (DO-WHILE)
    // ==========================
    printf("\n=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda (casa %d)\n", i);
        i++;
    } while (i <= casasRainha);

    // ==========================
    // Movimento do Cavalo (FOR + WHILE ANINHADOS)
    // ==========================
    // O Cavalo se move duas casas para baixo e uma para a esquerda.
    // O loop externo (FOR) controla o movimento para baixo.
    // O loop interno (WHILE) controla o movimento para a esquerda.
    printf("\n=== Movimento do Cavalo ===\n");

    // Loop externo: duas casas para baixo
    for (i = 1; i <= passosVerticaisCavalo; i++) {
        printf("Baixo (passo %d)\n", i);
    }

    // Loop interno: uma casa para a esquerda (usando while)
    j = 1;
    while (j <= passosHorizontaisCavalo) {
        printf("Esquerda (passo %d)\n", j);
        j++;
    }

    return 0;
}
