#include <stdio.h>

int main() {
    // ==========================
    // Definição das variáveis
    // ==========================
    int casasTorre = 5;   // Quantidade de casas para mover a Torre
    int casasBispo = 5;   // Quantidade de casas para mover o Bispo
    int casasRainha = 8;  // Quantidade de casas para mover a Rainha
    int i;                // Contador para estruturas de repetição

    // ==========================
    // Movimento da Torre (FOR)
    // ==========================
    // A Torre move-se em linha reta horizontalmente ou verticalmente.
    // Neste caso, ela irá se mover cinco casas para a direita.
    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }

    // ==========================
    // Movimento do Bispo (WHILE)
    // ==========================
    // O Bispo move-se na diagonal. Aqui, ele irá se mover cinco casas
    // na diagonal para cima e à direita.
    printf("\n=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (casa %d)\n", i);
        i++;
    }

    // ==========================
    // Movimento da Rainha (DO-WHILE)
    // ==========================
    // A Rainha pode mover-se em todas as direções. Aqui, ela irá se mover
    // oito casas para a esquerda.
    printf("\n=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda (casa %d)\n", i);
        i++;
    } while (i <= casasRainha);

    return 0;
}
