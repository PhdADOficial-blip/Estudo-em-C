#include <stdio.h> 


 int main () {
                                //aninhada
    int idade; 
    float renda;
    int dependentes;
                              //entrada de dados 
   printf("Digite susa idade : \n");
   scanf("%d", &idade);
   printf("Digite a sua renda mensal: \n");
   scanf("%f", &renda);
   printf("Digite o número de dependentes: \n");
   scanf("%d", &dependentes);

    // Primeria condição usuario entre 18 é 65 

if ( idade >= 18 && idade < 65){
   if (renda < 3000){
      if (dependentes > 2){
        printf("Você atende todos os criterios \n");   
      }else{
        printf("VocÊ não atende oi criterio dependentes \n");
      }  
    }else {
    printf("Você não antende o criterio renda \n");
} else {
  printf("Você não antende a condição por idade \n");
}
    //Segunda condição renda do usuario menor que 3 mil 

    //Terceira condiição numero de dependentes é maior que dois (2)


   return 0;




 }