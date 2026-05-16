#include <stdio.h>

int main() {

    /*
    Atribuição simples  (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuiçõa com multiplicação (*=)
    Atribuição com divisão   (/=)
    */
    int numero1 = 10, numnero2, resultado;

    
    resultado = 10;
    printf("resultado: %d \n", resultado);

    resultado += 20;
    printf("resultado: %d \n", resultado);
    
    resultado -= numero1;
    printf("resultado: %d \n", resultado);
  
    resultado *= 5;
    printf("resultado: %d \n", resultado);

    resultado /= 2;
    printf("resultado: %d \n", resultado);
    return 0;
}