//operadoresn ternarios
#include <stdio.h>  

int main() {
    int num1 = 28, num2 = 30, maior;
      (num1 > num2) ? (maior = num1) : (maior = num2); // operador ternário

    printf("O maior número é: %d\n", maior);
    return 0;
}