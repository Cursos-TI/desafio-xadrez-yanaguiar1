#include <stdio.h>

int main () {
    
    // Movimentação da peça Torre;
    printf("Movimentacao da Torre:\n");
    // Loop para a movimentação da Torre ser concluída
    for (int i = 1; i <= 5; i++) 
    {
        printf("Direita, ");
    }
    // Espaço para separar as movimentações
    printf("\n");
    // Printf para deixar claro qual peça está sendo movimentada
    printf("\nMovimentacao do Bispo:\n");
    // Declaração da váriavel para a movimentação do bispo
    int b = 1; 
    // Movimentação do bispo com while
    while (b <= 5) 
    {
        printf("Cima, Direita, ");
        b++;
    }

    // Espaço para separar as movimentações
    printf("\n");

    // Declaração da váriavel para a movimentação da rainha
    int r = 1;

    // Printf para deixar claro qual peça está sendo movimentada
    printf("\nMovimentacao da Rainha:\n");

    // Movimentação da Rainha com do-while
    do {
        printf("Esquerda, ");
        r++;
    } while (r <= 8);

    // Espaço para separar as movimentações
    printf("\n");

    //Printf para deixarl claro qual peça está sendo movimentada
    printf("\nMovimentacao do Cavalo:\n");

    // Movimentação do cavalo com loops aninhados
    for (int i = 1; i < 2; i++) 
    {
        int movBaixo = 0;
        int movEsquerda = 0;

        while (movBaixo < 2) 
        {
            printf("Baixo, ");
            movBaixo++;
        }

        while (movEsquerda < 1) 
        {
            printf("Esquerda, ");
            movEsquerda++;
        }
    }

    return 0;
}