#include <stdio.h>


int main (){

//Comparasão de dados 
/*cadastro de dados inventario de um estoque */

char produtoA [30] = "Produto A";
char produtoB [30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA =  10.50;
float valorB =  20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

double valorTotalA;
double valorTotalB;

int resultadoA, resultadoB;

//Exinir as informações do produto 
printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f \n", produtoA, estoqueA, valorA);
printf("Produto %s tem estique %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB );

// Comparação com o valor Minimo de estoque 
resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

//Comparações entre os valores totair dos produtos 

printf("Valor total de A (R$ %.2f )é maior que o valor total de B(R$%.f): %d\n", estoqueA* valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

return 0;
}


