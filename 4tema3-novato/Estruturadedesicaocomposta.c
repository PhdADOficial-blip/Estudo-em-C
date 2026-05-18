#include <stdio.h>
/*
if (condicao) {
  // bloco de código a ser executado se a condição for verdadeira
} else {
  // bloco de código a ser executado se a condição for falsa
}
*/


int main() {
  int numero = 11;
  int numero1 = 20;
  int numero2 = 5;
  float temperatura = 25.0;
  int nota = 65;
  int idade = 20;
  if (numero % 2 == 0) {
    printf("O número é par\n");
  } else {
    printf("O número é ímpar\n");
  }
  

  if (numero1 > numero2) {
    printf("O número 1 é maior que n 2\n");
  } else {
    printf("O número 1 e menor \n");
  }

  if (temperatura > 30) {
    printf("calor 2\n");
  } else {
    printf("ESTA QUENTE \n");
  }

  if (nota > 60) {
    printf("Você passou\n");
  } else {
    printf("Você não pasou\n");
  }

  if (idade >= 18) {
    printf("maior de idade\n");
  } else {
    printf("menor de idade \n");
  }
  return 0;
}