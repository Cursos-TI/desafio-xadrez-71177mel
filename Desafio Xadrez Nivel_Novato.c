#include <stdio.h>

// ==========================
// Função recursiva para a Torre
// ==========================
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // Caso base
    printf("Direita (casa %d)\n", atual);
    moverTorre(casas, atual + 1); // Chamada recursiva para a próxima casa
}

// ==========================
// Função recursiva para o Bispo
// ==========================
// Além da recursão, usaremos loops aninhados para simular vertical e horizontal.
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0) return; // Caso base da recursão

    for (int i = 1; i <= horizontal; i++) {
        printf("Cima, Direita (movimento vertical %d, horizontal %d)\n", vertical, i);
    }

    moverBispo(vertical - 1, horizontal); // Chamada recursiva para o próximo nível vertical
}

// ==========================
// Função recursiva para a Rainha
// ==========================
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // Caso base
    printf("Esquerda (casa %d)\n", atual);
    moverRainha(casas, atual + 1); // Chamada recursiva
}

int main() {
    // ==========================
    // Definição das variáveis
    // ==========================
    int casasTorre = 5;    // Movimentos da Torre
    int casasBispo = 5;    // Movimentos do Bispo
    int casasRainha = 8;   // Movimentos da Rainha
    int passosVerticaisCavalo = 2; // Duas casas para cima
    int passosHorizontaisCavalo = 1; // Uma casa para a direita

    // ==========================
    // Movimento da Torre (Recursividade)
    // ==========================
    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre, 1);

    // ==========================
    // Movimento do Bispo (Recursividade + Loops Aninhados)
    // ==========================
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo, 1); // horizontal = 1 apenas para exemplo simples

    // ==========================
    // Movimento da Rainha (Recursividade)
    // ==========================
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha, 1);

    // ==========================
    // Movimento do Cavalo (Loops Aninhados Complexos)
    // ============================
    printf("\n=== Movimento do Cavalo ===\n");
    // O Cavalo move-se duas casas para cima e uma para a direita.
    // Usaremos loops aninhados com múltiplas variáveis e condições,
    // controlando o fluxo com continue e break.
    for (int vertical = 1; vertical <= passosVerticaisCavalo; vertical++) {
        for (int horizontal = 1; horizontal <= passosHorizontaisCavalo + 1; horizontal++) {
            if (horizontal > passosHorizontaisCavalo && vertical < passosVerticaisCavalo) {
                // Não é hora de mover horizontalmente ainda
                continue; 
            }
            if (vertical > passosVerticaisCavalo) {
                break; // Movimento vertical completo
            }
            if (vertical <= passosVerticaisCavalo && horizontal <= passosHorizontaisCavalo) {
                // Movimento vertical
                printf("Cima (passo vertical %d)\n", vertical);
            }
            if (vertical == passosVerticaisCavalo && horizontal > passosHorizontaisCavalo) {
                // Movimento horizontal após terminar o vertical
                printf("Direita (passo horizontal %d)\n", horizontal - 1);
            }
        }
    }

    return 0;
}
