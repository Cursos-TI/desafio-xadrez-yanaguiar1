#include <stdio.h>

// Função recursiva da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva do Bispo
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

// Função recursiva da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

int main() {
    // Movimento da Torre
    printf("Movimentacao da Torre:\n");
    moverTorre(5); // 5 casas para direita
    printf("\n");

    // Movimento do Bispo
    printf("Movimentacao do Bispo:\n");

    // Loops aninhados
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 1; coluna++) {
            printf("Cima Direita\n"); // Combinação diagonal
        }
    }

    // E também a recursividade
    moverBispoRecursivo(5);
    printf("\n");

    // Movimento da Rainha
    printf("Movimentacao da Rainha:\n");
    moverRainha(8); // 8 casas para esquerda
    printf("\n");

    // Movimento do Cavalo
    printf("Movimentacao do Cavalo:\n");

    // Loop externo
    for (int cima = 0; cima < 3; cima++) {
        if (cima >= 2) {
            break;
        }

        if (cima == 0) {
            cima++;
        }

        printf("Cima\n");
    }

    // Loop interno
    for (int direita = 0; direita < 2; direita++) {
        if (direita == 1) {
            printf("Direita\n");
            break;
        }
    }

    return 0;
}
