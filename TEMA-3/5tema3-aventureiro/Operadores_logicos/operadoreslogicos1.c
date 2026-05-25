#include <stdio.h>

int main() {
  int idade = 17;
  float altura = 1.75;
  
  //idade >= 18 => verdadeiro
  //idade <= 30 => verdadeiro
  //verdadeira && verdadeira 
  //verdadeira && altura > 1,70
  //verdadeira && verdadeira => vedadeira

  //idade >= 18 => falso
  //idade <= 30 => verdadeiro
  //falso && verdadeira 
  //falso && altura > 1,70
  //falso && verdadeira => falso
  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");
  }

  return 0;
}