//pratica 
#include <stdio.h>
     
    int main(){
        float temperatura, umidade;
        unsigned int estoque, estoqueminimo = 1000;

        printf("Entre com a temperatura: \n");
        scanf("%f", &temperatura);

        printf("entre com a humidade: \n");
        scanf("%f", &umidade);
        
        printf("Entre com o estoque: \n");
        scanf("%u", &estoque);


        if(temperatura > 30){
            printf("temperatura alta\n");
        } else {
            printf("temperatura dentro dos parametros!\n");
        }
        if(umidade > 50){
            printf("Umidade Elevada!\n");
        } else {
            printf("Umidade esta dentro do parametros!\n");
        }

        if(estoque < estoqueminimo ) {
            printf("Estoque abaixo do minimo!\n");
        } else {
            printf("estoque normal!\n");
        }
         
        return 0;
        




    }

