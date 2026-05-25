//WHILE Executa repetidamente um bloco de código enquanto uma condição for verdadeira ate que se torne falsa. A condição é verificada antes da execução do bloco de código, o que significa que o bloco pode não ser executado nenhuma vez se a condição for falsa desde o início.
#include <stdio.h>

int main() {
    int i = 10; //variável de controle
    int doI = 5;
  
    while (i >= 5) {   //bolenoo -> verdadeiro ou falso (define uma condição de parada)
        printf("Valor de i: %d\n", i);
        i--; //incremento ou decremento (modifica a variável de controle)
    }
    
    //DO-While Executa um bloco de código pelo menos uma vez e depois continua a executá-lo enquanto uma condição for verdadeira. A condição é verificada após a execução do bloco de código, o que garante que o bloco seja executado pelo menos uma vez, mesmo que a condição seja falsa desde o início.
    do {
        printf("Valor de doI: %d\n", doI);
        doI--;
    } while (doI >= 1);
    
    //for -> é uma estrutura de repetição que permite executar um bloco de código um número específico de vezes. Ele é composto por três partes: a inicialização, a condição e a atualização. A inicialização é executada apenas uma vez no início do loop, a condição é verificada antes de cada iteração e o bloco de código é executado enquanto a condição for verdadeira. Após cada iteração, a atualização é executada para modificar a variável de controle. 
    
    for (int j1f = 5; j1f >= 1; j1f--) {
        printf("Valor de j1: %d\n", j1f);
    }
    
    for (int i2f = 1; i2f <= 20; i2f++) {
        if (i2f % 2 == 0) {
            printf("valor de i2 numeros pares: %d\n", i2f);
        }
    }
    
    for (int i3f = 0; i3f <= 100; i3f += 10) {
        printf("valor de i3: %d\n", i3f);
    }
     
    for (int i4f = 100; i4f >= 0; i4f -= 10) {
        printf("valor de i4: %d\n", i4f);
    }
    return 0;

}