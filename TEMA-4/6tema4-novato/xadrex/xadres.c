//  programa de xadres torre bispo e rainha 
//torre -> move-se em linha reta, tanto na horizontal quanto na vertical, quantas casas quiser, mas não pode pular outras peças.
//bispo -> move-se em diagonal, quantas casas quiser, mas não pode pular outras peças.
//rainha -> move-se em linha reta, tanto na horizontal quanto na vertical, quantas casas quiser, e também pode se mover em diagonal, quantas casas quiser, mas não pode pular outras peças.
//tenho que usar for while do-while para movimentos da torre, bispo e rainha
#include <stdio.h>
    int main() {
        int bispo = 0;
        
    
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