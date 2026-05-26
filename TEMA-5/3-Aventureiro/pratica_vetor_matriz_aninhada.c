#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main () {

   int matriz [LINHAS][COLUNAS]; // Declaração de uma matriz 5x5 de inteiros
    // Inicialização da matriz usando estruturas de repetição
   int soma = 10;
   for (int i = 0; i < LINHAS; i++) { 
       for (int j = 0; j < COLUNAS; j++) {
              soma++;
              matriz[i][j] = soma; // Atribuindo valores à matriz
                printf("%d ",matriz[i][j]);
       }
       printf("\n");
   }

char matrizA[LINHAS][COLUNAS]; 
   
   int contador = 0;
   
   for (int i = 0; i < LINHAS; i++) { 
       for (int j = 0; j < COLUNAS; j++) {
              // MUDANÇA 2: O cálculo faz o contador rodar de 0 a 25 
              // e somar com 'A' (65). Assim, ele sempre gera uma letra válida.
              matrizA[i][j] = 'A' + (contador % 26); 
              
              // MUDANÇA 3: Usamos %c no printf para exibir como LETRA, não como número
              printf("%c ", matrizA[i][j]);
              
              contador++;
       }
       printf("\n");
   }

   return 0;



   }




