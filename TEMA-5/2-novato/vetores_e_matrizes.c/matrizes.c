#include <stdio.h>
 
/* Matrizes em C são arrays de arrays. Elas permitem armazenar dados em uma estrutura bidimensional, onde cada elemento é acessado por meio de dois índices: um para a linha e outro para a coluna. A sintaxe para declarar uma matriz é: tipo nome[linhas][colunas]; */

/* ------------------ inicialização Simplificada ----------------*/

int main() {
    int matriz[3][3] = {
    //  0   1   2 y j
        {1, 2, 3}, // Linha 0
        {4, 5, 6}, // Linha 1 x i
        {7, 8, 9}  // Linha 2
    
    };
    
    // Acesso a elementos da matriz
    printf("Elemento na posição (0, 0): %d\n", matriz[0][0]); // Saída: 1
    printf("Elemento na posição (1, 2): %d\n", matriz[1][2]); // Saída: 6
    printf("Elemento na posição (2, 1): %d\n", matriz[2][1]); // Saída: 8
    

//--------------matriz bidimensional sem inicialização-----------------
/* Declaração ----- inicialização ------- Acesso ------*/
    int matriz[3][3];  // Declaração de uma matriz 3x3 de inteiros
 
    // Inicializando os elementos da matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
 
    // Acessando elementos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][1]);
 

    return 0;
}