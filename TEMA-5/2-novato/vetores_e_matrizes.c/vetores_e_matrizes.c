
/* ----------------------- INTRODUÇÃO  ----------------------- */
// Vetores e Matrizes em C
//introdução a vetores e matrizes em C
//Estrutura de dados fundamentais 
//Organizam e manipulam conjuntos de dados 
//Funcionam muinto bem com estruturas de repetição e funções
//utilizam em:
   //analise de dados
   //processamento de imagens
   //simulações
   //inteligencia artificial

//########  arrays (vetores)  ########
//Coleção de elementos do mesmo tipo
//armazenados em posições contíguas de memória(paralela)
//acesso por índice (0-based)

//######## matrizes  ########
//generalização dos arrays para múltiplas dimensões
//pode ter duas ou mais dimensões
//acesso mpor dois indices (linha e coluna)

//importancia:
//acesso rapido aos dados 
//organização eficiente da memoria
//a memoria paralela melhora o desempenho da cpu
//facilita a implementação de algoritmos complexos
//aplixação de matrizes em:
   //processamento de imagens acesso ao pixel
   //simulações físicas e cientificas / estastiticas 
   //análise de dados
   //inteligencia artificial
   //Desenvolvimento de jogos


/* -----------------------ARRAYS EM C----------------------- */
/* CONJUNTO DE DADOS - ARMAZENAM MULTIPLOS VALORES DO MESMO TIPO(REGRA) - ACESSO DIRETO POR INDICES */

/* 
DEFINIÇÃO :
    DECLARAR TIPO E QUANTIDADE
    TIPO NUMERO [QUANTIDADE]:
    INT NUMEROS[5]; //declara um array de inteiros com 5 elementos
    
INICIALIZAÇÃO:
    INICIALIZAÇÃO COM LISTA .
    INT NUMEROS[5] = {1, 2, 3, 4, 5}; //inicializa um array de inteiros com os valores fornecidos
                      0, 1, 2, 3, 4
    INICIALIZAÇÃO PARCIAL:
ACESSO:
    ACESSO PELO ÍNDICE
    NUMEROS[0] = 10; //atribui o valor 10 ao primeiro elemento do array
    NUMEROS[2] = 30; //atribui o valor 30 ao terceiro elemento do array
    printf("%d\n", NUMEROS[0]); //imprime o valor do primeiro elemento do array


*/
/* ----------------------- CODIGO ----------------------- */
#include <stdio.h>

  int main() {
   
     float notas[5] = {1.5, 2.5, 3.5, 4.5, 5.5}; //declara um array de float com 5 elementos e inicializa com valores
     
        printf("nota do aluno 1: %.2f\n", notas[0]); //imprime a nota do primeiro aluno
        printf("nota do aluno 2: %.2f\n", notas[1]); //imprime a nota do segundo aluno
        printf("nota do aluno 3: %.2f\n", notas[2]); //imprime a nota do terceiro aluno
        printf("nota do aluno 4: %.2f\n", notas[3]); //imprime a nota do quarto aluno
        printf("nota do aluno 5: %.2f\n", notas[4]); //imprime a nota do quinto aluno
   

    char letras[3] = {'A', 'B', 'C'}; //declara um array de char com 3 elementos e inicializa com valores

        printf("primeira letra 1: %c\n", letras[0]); //imprime a primeira letra
        printf("primeira letra 2: %c\n", letras[1]); //imprime a segunda letra
        printf("primeira letra 3: %c\n", letras[2]); //imprime a terceira letra


    char *nomes[] = {"Alice", "Bob", "Charlie"}; //declara um array de ponteiros para char com 3 elementos e inicializa com valores
 
    for (int i = 0; i < 3; i++) {   
        printf("nome do aluno %d: %s\n", i + 1, nomes[i]); //imprime o nome de cada aluno


    }


        return 0;

  }
  
  /*------------------------------- Conclusão ------------------------------------------*/
  /*armazena e acessa - tamanho fixos - manipulação e eficiencia - aplicações variadas  */