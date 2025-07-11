#include <stdio.h>

int main () {
    
    // Movimentação da peça Torre;
    printf("Movimentacao da Torre:\n");
    // Loop para a movimentação da Torre ser concluída
    for (int i = 1; i <= 5; i++) 
    {
        printf("Direita\n");
    }
    // Espaço para separar as movimentações
    printf("\n");
    // Printf para deixar claro qual peça está sendo movimentada
    printf("Movimentacao do Bispo:\n");
    // Declaração da váriavel para a movimentação do bispo
    int b = 1; 
    // Movimentação do bispo com while
    while (b <= 5) 
    {
        printf("Cima, Direita\n");
        b++;
    }

    // Espaço para separar as movimentações
    printf("\n");

    // Declaração da váriavel para a movimentação da rainha
    int r = 1;

    // Printf para deixar claro qual peça está sendo movimentada
    printf("Movimentação da Rainha:\n");

    // Movimentação da Rainha com do-while
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

    return 0;
}