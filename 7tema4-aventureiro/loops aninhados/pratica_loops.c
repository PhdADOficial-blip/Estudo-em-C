#include <stdio.h>

int main() {
    
    int i, j;

    char letra;

    for (i =1 ; i<= 26; i++){
        letra = 'A'; // Inicializa a letra com 'A' no início de cada iteração do loop externo;     
        
        for(j = 1; j <= i; j++)
        {
            letra = 'A' + (j - 1); // Calcula a letra correspondente com base no valor de j
        
        }
        printf("%c ", letra);
        letra++; // Incrementa a letra para a próxima iteração do loop interno
    }


    return 0;
}