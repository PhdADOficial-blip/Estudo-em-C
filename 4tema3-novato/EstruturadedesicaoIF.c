#include <stdio.h>
    //se a condição for verdadeiro ele execulta a função 
     
     /*if (condução){
             //bloco executado
              execulta dentro da chave 
          
             }
     */
int main() {
  int numero1 = 2;
  int numero2 = 5;
  int idade = 18;  
  printf("=========USO DO IF==========\n");
  printf("\n");
  printf("\n");
  printf("=========Maior numero==========\n");
  if (numero1 > numero2) {
           printf("numero 1 é maior que numero 2 \n");
  }

  printf("Forado if\n");

  printf("\n");
  printf("=========Maior de Idade==========\n");
  if(idade >=18) {
     printf("Você e maior de idade\n");

  }  
  printf("fora do if \n");

  printf("\n");
  printf("=========Nota==========\n");
  int nota = 50;
  if(nota >=60) {
        printf("parabens você passou\n");
  
  }
  printf("\n");
  printf("=========Comparação de idade ==========\n");
  int idade1 = 35;
  int idade2 =30;

  if(idade1 > idade2) {
        printf("Pessoa 1 é mais velha que pessoa 2\n");



  }
  printf("\n");
  printf("========= %% NUMERO PAR==========\n");

  int numero = 4, resultado;
  resultado = numero % 2;
  printf("A variavel resultado é; %d\n",resultado);
  if(numero % 2 == 0){
        printf("O numero é par\n");

  }
  printf("\n");
  printf("=========Estoque==========\n");
  
  int estoque = 4;

  if(estoque <= 5){ 
        printf("Estoque Baixo");

  }
    return 0;
}