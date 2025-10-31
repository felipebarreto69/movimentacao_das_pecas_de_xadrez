#include <stdio.h>

// Projeto: Movimentação de Peças de Xadrez ♟️
// Autor: Felipe Barreto Silva
// Descrição: Simulação dos movimentos da Torre, Bispo, Rainha e Cavalo
// utilizando estruturas de repetição, loops aninhados e recursividade
// (níveis Novato, Aventureiro e Mestre).

// ======================================================
// NÍVEL NOVATO
// Movimentando Torre, Bispo e Rainha com loops simples
// ======================================================

void nivelNovato() {
    // -------------------------------
    // Torre - movimento para a direita (5 casas)
    // Estrutura usada: for
    // -------------------------------
    int i;
    printf("===== NÍVEL NOVATO =====\n");
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n"); // Torre move-se horizontalmente
    }

    // -------------------------------
    // Bispo - movimento diagonal (5 casas)
    // Estrutura usada: while
    // -------------------------------
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima, Direita\n"); // Movimento diagonal
        j++;
    }

    // -------------------------------
    // Rainha - movimento para a esquerda (8 casas)
    // Estrutura usada: do-while
    // -------------------------------
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // Rainha move-se em todas as direções
        k++;
    } while (k <= 8);
}


// ======================================================
// NÍVEL AVENTUREIRO
// Movimentando o Cavalo com loops aninhados
// ======================================================

void nivelAventureiro() {
    printf("\n\n===== NÍVEL AVENTUREIRO =====\n");
    printf("Movimento do Cavalo:\n");

    // Cavalo se move 2 casas para baixo e 1 para a esquerda
    // Loop externo: for (duas casas para baixo)
    // Loop interno: while (uma casa para a esquerda)
    int i, j;
    for (i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    j = 1;
    while (j <= 1) {
        printf("Esquerda\n");
        j++;
    }
}


// ======================================================
// NÍVEL MESTRE
// Recursividade e loops complexos
// ======================================================

// -------------------------------
// Função recursiva para Torre
// -------------------------------
void moverTorre(int casas) {
    if (casas == 0) return;  // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);   // Chamada recursiva
}

// -------------------------------
// Função recursiva para Rainha
// -------------------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -------------------------------
// Função recursiva + loops aninhados para o Bispo
// -------------------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;

    // Loop externo: movimento vertical (Cima)
    for (int i = 0; i < 1; i++) {
        // Loop interno: movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispoRecursivo(casas - 1);
}

// -------------------------------
// Cavalo com loops complexos (for + while)
// Movimento: duas casas para cima, uma para a direita
// -------------------------------
void moverCavaloComplexo() {
    int i, j;
    printf("\nMovimento do Cavalo (complexo):\n");

    // Loop for: duas casas para cima
    for (i = 1; i <= 2; i++) {
        printf("Cima\n");

        // Loop interno while: controle adicional de fluxo
        j = 0;
        while (j < 1) {
            if (i == 2) {
                printf("Direita\n");
                break; // encerra o loop após o movimento final
            }
            j++;
        }
    }
}

void nivelMestre() {
    printf("\n\n===== NÍVEL MESTRE =====\n");

    // Torre recursiva
    printf("Movimento da Torre (recursiva):\n");
    moverTorre(5);

    // Bispo recursivo + loops aninhados
    printf("\nMovimento do Bispo (recursivo + loops):\n");
    moverBispoRecursivo(5);

    // Rainha recursiva
    printf("\nMovimento da Rainha (recursiva):\n");
    moverRainha(8);

    // Cavalo com loops complexos
    moverCavaloComplexo();
}


// ======================================================
// FUNÇÃO PRINCIPAL
// ======================================================
int main() {
    nivelNovato();       // Fase 1: loops simples
    nivelAventureiro();  // Fase 2: loops aninhados
    nivelMestre();       // Fase 3: recursividade e loops complexos

    return 0;
}

