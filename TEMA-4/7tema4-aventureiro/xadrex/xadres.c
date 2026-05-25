#include <stdio.h>
    int main() {
        int bispo = 0;
        int movimentoCompleto = 1; // Variável para controlar o número de movimentos completos
        while (movimentoCompleto--)
        {
            for (int i = 0; i < 2; i++) {
                printf("Cima\n"); // Imprime "Cima" duas vezes
            }
        }
        printf("Direita\n");  // Imprime "Direita" uma vez
    
        for (int i = 0; i < 5; i++) { // Loop para simular a movimentação da Torre
            printf(" torre direita casa: %d\n", i );
        }

       while (bispo < 5) { // Loop para simular a movimentação do Bispo em diagonal
            printf(" bispo diagonal cima/Direita casa: %d\n", bispo);
            bispo++;
        }

        int rainha = 0;
        do { // Loop para simular a movimentação da Rainha para a esquerda
            printf(" rainha esquerda casa: %d\n", rainha);
            rainha++;
        } while (rainha < 8); // A Rainha pode se mover até 8 casas para a esquerda

        return 0;

    }
