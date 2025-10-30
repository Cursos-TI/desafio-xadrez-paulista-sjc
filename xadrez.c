#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // =====================================================
    // Movimentação da Torre usando FOR
    // A torre se move em linha reta.
    // Aqui ela se moverá 5 casas para a direita.
    // =====================================================
    int casasTorre = 5;

    printf("Movimento da Torre (5 casas para a direita):\n");
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar as peças

    // =====================================================
    // Movimentação do Bispo usando WHILE
    // O bispo se move na diagonal.
    // Aqui ele se moverá 5 casas para cima e para a direita.
    // =====================================================
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo (5 casas para cima e direita):\n");
    while(contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n"); // Linha em branco para separar as peças

    // =====================================================
    // Movimentação da Rainha usando DO-WHILE
    // A rainha pode se mover em todas as direções.
    // Aqui ela se moverá 8 casas para a esquerda.
    // =====================================================
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= casasRainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
    

