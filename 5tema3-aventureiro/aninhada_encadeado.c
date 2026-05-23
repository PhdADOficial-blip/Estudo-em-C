#include <stdio.h>

int main () {
            //iremaos uinta a programação aninhada e Encadeada 
    int numero;

    printf(" Digite um numnero: ");
    scanf("%d", &numero);
    
    if (numero > 0) {
        if (numero % 2 == 0){
            printf("numero par\n");
        } else {
            printf("numero impar\n");
        }
    } else if(numero == 0) {
           printf("numero é zero");
           }
           else {
               printf("numero e positivo  \n");
           }
    




}