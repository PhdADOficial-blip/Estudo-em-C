//computador gera um numero de 1 a 100
//jogqador escolhe 3 opçoes maior ou menor ou igual
//o jogador entra com um numero
//o computador compara os numeros e diz s e o jogador ganhou ou perdeu
// mostre o numero escolhido pelo computador e o numero escolhido pelo jogador



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


    int main () {
    //gerar numero aleatorio
    srand(time(0)); // inicializa o gerador de números aleatórios com o tempo atual
    int numero_computador = rand() % 100 + 1; // números de 1 a 100
    char tipoComparacao;
    int numero_jogador;
    int resultado;
    // Inicio do jogo
    printf("Bem-vindo ao jogo de adivinhação maior menor ou igual!\n");
    printf("Escolha uma opção:\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Digite o número correspondente à sua escolha: ");
    scanf("%c", &tipoComparacao);    

    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numero_jogador);

    //Exibir o número do computador 
    printf("O número escolhido pelo computador é: %d\n", numero_computador);
    //Comparar os números
    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior!\n");
        resultado = numero_jogador > numero_computador ? printf("Parabéns! Você ganhou!\n") : printf("Que pena! Você perdeu!\n");
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor!\n");
        resultado = numero_jogador < numero_computador ? printf("Parabéns! Você ganhou!\n") : printf("Que pena! Você perdeu!\n");
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual!\n");
        resultado = numero_jogador == numero_computador ? printf("Parabéns! Você ganhou!\n") : printf("Que pena! Você perdeu!\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

}

