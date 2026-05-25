#include <stdio.h>

int main() {
    
    int i, j;

    char letra;

    for (i =1 ; i<= 5; i++){
        letra = 'A'; // Inicializa a letra com 'A' no início de cada iteração do loop externo;     
        
        for(j = 1; j <= i; j++)
        {
            printf("%c ", letra);
        letra++; // Calcula a letra correspondente com base no valor de j
        
        }
        printf("\n"); // Incrementa a letra para a próxima iteração do loop interno
    }


    return 0;
}