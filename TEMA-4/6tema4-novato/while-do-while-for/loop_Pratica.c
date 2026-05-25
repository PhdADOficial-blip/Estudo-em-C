#include <stdio.h>

int main() {
//----------------------------------------------------------------------------------------------------------------------------
 int i = 0;
 printf("Estudo de Estrutura de repetição While - Contagem de 0 a 10:\n");
  while (i <= 10) { //condição de parada -> i <= 10 (verdadeiro ou falso) vau contar ate 10 ou seja, o loop vai ser executado enquanto i for menor ou igual a 10. Quando i for maior que 10, a condição se torna falsa e o loop para de executar. 
    printf("Valor de i antes da verificação: %d \n", i);
    if(i % 2 == 0) //condição de paridade -> i % 2 == 0 (verdadeiro ou falso) -> verifica se o número é par. O operador % é o operador de módulo, que retorna o resto da divisão de i por 2. Se o resultado for 0, significa que i é divisível por 2 e, portanto, é um número par.
   {
        printf("Valor de i numeros pares: %d \n", i); //ação a ser executada -> printf("Valor de i numeros pares: %d \n", i); -> se a condição for verdadeira, ou seja, se i for um número par, o programa executa a ação dentro do bloco if, que é imprimir o valor de i seguido da mensagem "Valor de i numeros pares: ".
    }

  i++;

  } 
//----------------------------------------------------------------------------------------------------------------------------
  //while para mostra numeros impares 
  printf("Estudo de Estrutura de repetição While - Contagem de 0 a 10 - montrando numeros impares:\n");
   i = 0; //reiniciando a variável de controle para o próximo loop while
  while (i <= 10) { 
   
    if(i % 2 != 0) //deiferença entre par e impar -> i % 2 != 0 (verdadeiro ou falso) -> verifica se o número é ímpar. Se o resultado for diferente de 0, significa que i não é divisível por 2 e, portanto, é um número ímpar.
   {
        printf("Valor de i numeros impares: %d \n", i);
    }

  i++;

 } 
//----------------------------------------------------------------------------------------------------------------------------
 //Codigo que depende da entrada do usuario para iniciar o loop while
 printf("Estudo de Estrutura de repetição Do-While - Digite um numero par para parar o loop:\n");
 int numero ;
   
 do {
  printf("Digite um numero par para parar o loop:\n ");
  scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("Você digitou um número par: %d. O loop será encerrado.\n", numero);
    } else {
        printf("Você digitou um número ímpar: %d. Tente novamente.\n", numero);
    }
 } while (numero % 2 != 0); //condição de parada -> numero % 2 != 0 (verdadeiro ou falso) -> o loop continua a ser executado enquanto o número for ímpar. Quando o usuário digitar um número par, a condição se torna falsa e o loop para de executar.

printf("Loop encerrado. Obrigado por participar!\n");

//----------------------------------------------------------------------------------------------------------------------------

printf("Estudo de Estrutura de repetição For - Contagem de 0 a 10 - para mostrar tabuada com entrada do usuário:\n");
//loop for para criar uma tabuada de multiplicação do 1 ao 10
int numeroTabuada, iTabuada;

printf("Digite um numero para ver a tabuada de multiplicação: \n");
scanf("%d", &numeroTabuada);

for (iTabuada = 1; iTabuada <= 10; iTabuada++) { //condição de parada -> iTabuada <= 10 (verdadeiro ou falso) -> o loop continua a ser executado enquanto iTabuada for menor ou igual a 10. Quando iTabuada for maior que 10, a condição se torna falsa e o loop para de executar.
    printf("%d x %d = %d\n", numeroTabuada, iTabuada, numeroTabuada * iTabuada); //ação a ser executada -> printf("%d x %d = %d\n", numeroTabuada, iTabuada, numeroTabuada * iTabuada); -> para cada valor de iTabuada, o programa imprime a multiplicação do número da tabuada pelo valor atual de iTabuada, mostrando o resultado da multiplicação.
}

//----------------------------------------------------------------------------------------------------------------------------

 return 0;
}