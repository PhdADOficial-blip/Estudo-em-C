#include <stdio.h>
                           //Estudo de condiç~]ao  aninhado 
int main() {
  int idade;
  float renda;

  printf("Digite a sua idade: "); 
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);
// 19 < 18 => falso
// 19 > 60 => falso 
  if (idade < 18 || idade > 60) {            //dentro do if    (   1     ou ||  2   é verdadeiro  )
    if (renda < 2000.0) {                    // segundo if      (aninhada)     
                                                                                                                                               
      printf("Você está qualificado para o desconto especial\n");
    } else {
      printf("Você não está qualificado para o desconto devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para o desconto devido à idade\n");
  }

  return 0;
}