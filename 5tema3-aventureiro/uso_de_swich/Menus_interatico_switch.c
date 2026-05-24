#include <stdio.h>
#include <stdlib.h> // Bibliotecas para numeros aleatorios 
#include <time.h>  //

int main() {                     
  int opcao;
  int numeroSecreto, palpite;

  // menu principal do jogo 
  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);
  
 switch (opcao)
  {
  case 1:
   srand(time(0));  //Quando o usuário escolhe a opção 1, a função srand(time(0)) é chamada para inicializar o gerador de números aleatórios com base no tempo atual. Isso garante que o gerador de números aleatórios produza sequências diferentes cada vez que o programa for executado.

   numeroSecreto = rand() % 10; // A variável numeroSecreto é atribuída a um número aleatório entre 1 e 10, gerado pela expressão rand() % 10 + 1. A função rand() gera um número aleatório inteiro, e o operador % 10 limita esse número ao intervalo de 0 a 9. Adicionando 1, obtemos um número entre 1 e 10.
   printf("numero secreto %d \n", numeroSecreto);
   printf("Digite um numero: \n");
   scanf("%d", &palpite);
   if (numeroSecreto == palpite)
   {
    printf("você acerto!!!! \n");
   } else 
   {
    printf("errouuuu");
   }
   break;
  case 2:
    printf("Regras do Jogo:\n");
    printf("1. Escolha uma opção no menu.\n");
    printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
    printf("3. O jogo termina quando você escolhe 'Sair'.\n");
break;
  case 3:
   printf('saindo do jogo');
  break;
  default:
    printf("Opção invalida");
   //
   break;
  }

return 0 ;



}