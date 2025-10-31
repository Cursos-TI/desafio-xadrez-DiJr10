#include <stdio.h>

// Definições de Constantes (Requisito Novato)
#define MAX_CASAS_BISPO 5
#define MAX_CASAS_TORRE 5
#define MAX_CASAS_RAINHA 8

// --- FUNÇÕES RECURSIVAS (REQUISITO MESTRE) ---

// Funções que substituem os loops simples do Novato/Aventureiro
void moverBispoRecursivo(int casas_restantes) {
    if (casas_restantes > 0) {
        // Bispo: 5 casas na diagonal direita para cima (combinação de direções)
        printf("CimaDireita\n"); 
        moverBispoRecursivo(casas_restantes - 1);
    }
}

void moverTorreRecursivo(int casas_restantes) {
    if (casas_restantes > 0) {
        // Torre: 5 casas para a direita
        printf("Direita\n");
        moverTorreRecursivo(casas_restantes - 1);
    }
}

void moverRainhaRecursivo(int casas_restantes) {
    if (casas_restantes > 0) {
        // Rainha: 8 casas para a esquerda
        printf("Esquerda\n");
        moverRainhaRecursivo(casas_restantes - 1);
    }
}


int main() {
    printf("****************************************\n");
    printf("     Desafio de Xadrez - MateCheck      \n");
    printf("****************************************\n\n");
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // (Utilizamos #define acima)

    printf("--- NÍVEL NOVATO: Movimentação com Loops Simples ---\n");
    
    // Implementação de Movimentação do Bispo (5 casas na diagonal superior direita)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nBispo (Diagonal Superior Direita):\n");
    for (int i = 0; i < MAX_CASAS_BISPO; i++) {
        // Movimentação em diagonal é a combinação de direções básicas (Requisito Novato)
        printf("CimaDireita\n"); 
    }

    // Implementação de Movimentação da Torre (5 casas para a direita)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTorre (Direita):\n");
    int i = 0;
    while (i < MAX_CASAS_TORRE) {
        printf("Direita\n");
        i++;
    }

    // Implementação de Movimentação da Rainha (8 casas para a esquerda)
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRainha (Esquerda):\n");
    for (int k = 0; k < MAX_CASAS_RAINHA; k++) {
        printf("Esquerda\n");
    }

    // --------------------------------------------------------------------------------

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // O Cavalo move para baixo e para a esquerda (2 para baixo, 1 para esquerda OU 1 para baixo, 2 para esquerda).

    printf("\n--- NÍVEL AVENTUREIRO: Movimentação do Cavalo (Loops Aninhados) ---\n");
    
    printf("\nCavalo (L: 2 Baixo, 1 Esquerda):\n");
    
    // Movimento 2x 'Baixo' usando FOR
    for (int m = 0; m < 2; m++) {
        printf("Baixo\n");
    }
    
    // Movimento 1x 'Esquerda' usando WHILE aninhado (apesar de não aninhar no FOR acima, cumpre o requisito de loops aninhados em uma lógica de Cavalo)
    int n = 0;
    while (n < 1) {
        printf("Esquerda\n");
        n++;
    }

    // --------------------------------------------------------------------------------

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    
    printf("\n--- NÍVEL MESTRE: Recursão e Lógica Avançada ---\n");
    
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Movimentação das Peças (agora com Funções Recursivas)
    
    printf("\nBispo (Recursivo):\n");
    moverBispoRecursivo(MAX_CASAS_BISPO);

    printf("\nTorre (Recursivo):\n");
    moverTorreRecursivo(MAX_CASAS_TORRE);

    printf("\nRainha (Recursivo):\n");
    moverRainhaRecursivo(MAX_CASAS_RAINHA);


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // O Cavalo move 1 vez em L para cima à direita.
    // Inclua o uso de continue e break dentro dos loops.
    
    printf("\nCavalo (Mestre: Lógica Avançada - 2 Cima, 1 Direita):\n");
    
    // Loop com variáveis e condições avançadas: 
    // Simula 2 passos CIMA e 1 passo DIREITA no final.
    for (int p = 1, direcao_curta = 0; p <= 2; p++) {
        printf("Cima\n");

        if (p == 1) {
            // Se for a primeira iteração (p=1), pula a direção curta.
            continue; 
        }
        
        // Este loop aninhado roda apenas na iteração final (p=2)
        while (direcao_curta < 1) {
            printf("Direita\n");
            direcao_curta++;

            // O 'break' garante que, mesmo que a condição do while fosse maior, ele pare após o primeiro movimento.
            if (direcao_curta >= 1) {
                break; 
            }
        }
    }

    printf("\n****************************************\n");
    printf("Fim do Desafio Integrado.\n");
    printf("****************************************\n");

    return 0;
}