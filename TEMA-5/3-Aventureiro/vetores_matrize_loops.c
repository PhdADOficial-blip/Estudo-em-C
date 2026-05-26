//usar um tipo de dado int ou float 
//vetores, matrizes e loops
//usaremos for na grande maioria dos casos, mas tem o while e do while
#include <stdio.h>

int main() {
    
    int vetor[5]; // Declaração de um vetor de 5 inteiros
    // Inicialização do vetor usando o loop 'for'
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; // Atribuindo valores ao vetor
        
    }
    
    // Exibindo vetor usando o loop 'for'
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
     /*---------------------------------------------------------------------------------------------------*/
    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros

    // Inicialização da matriz usando estruturas de repetição
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j; // Atribuindo valores à matriz
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    /*---------------------------------------------------------------------------------------------------*/
    int vetor1[5] = {1, 2, 3, 4, 5};
    int soma = 0;

    // Calculando a soma dos elementos do vetor
    for (int i = 0; i < 5; i++) {
        soma += vetor1[i];
    }

    printf("A soma dos elementos do vetor é: %d\n", soma);



    /*---------------------------------------------------------------------------------------------------*/

    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int matrizSoma[2][2];

    // Somando as duas matrizes
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("matrizSoma[%d][%d] = %d\n", i, j, 
    matrizSoma[i][j]);
        }
    }
/*seria assim matriz soma é um parametro em branco para atribuir os valores 

 então matriz1 mira seu geolocalizador e pega o valor 1
depois a matriz2 mira seu geolocalizador e pega o valor 5 soma 
e quarda na matriz soma no seu proprio geolocalizador que seria a variavel com com sua propria lista e colunas so que para armazanar os valores da soma  e depois imprimi*/

/*1. O "parâmetro em branco" $\rightarrow$ Matriz Declarada (ou não inicializada)Quando você escreveu int matrizSoma[2][2];, você criou exatamente esse espaço em branco. Na programação, dizemos que você declarou a matriz. Ela é como um armário cheio de gavetas vazias, apenas esperando os valores chegarem.

2. O "mira o geolocalizador e pega o valor" $\rightarrow$ Acesso à MemóriaEsse ato de ir até a matriz1[i][j] e "mirar" para pegar o valor é o que chamamos de acessar o índice ou ler a memória. O computador vai direto no endereço correto graças às coordenadas do for.

3. O "guarda no seu próprio geolocalizador" $\rightarrow$ AtribuiçãoComo as três matrizes têm o mesmo tamanho, o "mapa" delas é idêntico. Então, quando o GPS diz [0][0], as três olham para a mesma gaveta (a primeira). A matrizSoma abre a gaveta [0][0] dela e guarda o resultado da soma ali dentro.*/

//-----------------------------------------------------------------------------------
/*[Loop 'for' define a coordenada: Linha i, Coluna j]
                      |
                      v
1. Olhar na matriz1[i][j] -------> (Pega o valor X)
2. Olhar na matriz2[i][j] -------> (Pega o valor Y)
                      |
                      v
3. Somar os dois: (X + Y)
                      |
                      v
4. Guardar o resultado na matrizSoma[i][j]
                      |
                      v
5. O printf() olha para a matrizSoma[i][j] e mostra na tela!

*/

    return 0;
}