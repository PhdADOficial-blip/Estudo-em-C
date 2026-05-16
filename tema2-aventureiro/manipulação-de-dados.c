#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro
 
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
    printf("-----------------------------------------\n");
    printf("----------------Float--------------------\n");
    printf("-----------------------------------------\n");
    //float numeros decimais pequenos . flutuante 

    
    float x = 5.5;
    float y = 2.2;
    float soma1 = x + y;
    float diferenca1 = x - y;
    float produto1 = x * y;
    float quociente1 = x / y; // Divisão de ponto flutuante

    printf("para numeros decimais menores usamos o float \n");
    printf("usamos tbm porcentagem mais (.2f para deixar duas casa decimais ) \n");
    printf("Soma: %.2f\n", soma1);
    printf("Diferença: %.2f\n", diferenca1);
    printf("Produto: %.2f\n", produto1);
    printf("Quociente: %.2f\n", quociente1);
    
    //vamos ter que fazer trasnformação de ponto flutuante para inteiro ou char vice-versa

    //converção implicita - int float ordem define 
    printf("-----------------------------------------\n");
    printf("-----------------------------------------\n");
    printf("-----------------------------------------\n");
    printf("Conversao implicita (int) para (float)  (10 + 3.5)\n");
    printf("a Risco nessa conversao \n ");
    int a1 = 10;
    float b1 = 3.5;
    float resultado = a1 + b1; // 'a' é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);
 
    printf("-----------------------------------------\n");
    printf("-----------------------------------------\n");
    printf("-----------------------------------------\n");
    //converção explicita usando cashtin
    int a2 = 10;
    int b2 = 3;
    float quociente2 = (float) a2 / b2; // 'a' é explicitamente convertido para float
 
    
    printf("Quociente: %.2f\n", quociente2);
 
    return 0;
}