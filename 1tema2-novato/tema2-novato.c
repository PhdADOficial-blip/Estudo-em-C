#include <stdio.h>
 //aprendendo entrada e saida de dados pegando dados de uma pessoa 
int main(){
    int idade,matricula;
    float altura;
    char nome[50];

    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
        
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("nome do aluno: %s \n - matricula: %d \n ", nome , matricula);
    printf("idade %d  \n- altura: %f \n", idade , altura );
    return 0;
  }