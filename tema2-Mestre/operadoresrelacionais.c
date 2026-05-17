#include <stdio.h>
       
        
       int main(){
        /*
        decisao vamos usar operadores 

        a > b (maior que)
        a < b (menor que)
        a >= b (maior ou igual a)
        a <= b (menor ou igual a)
        a == b (igual a)
        a != b (diferente de)
        verdadeiro retorna 1 
        falso retorna 0 
        */ 
        int a = 20;
        int b = 20;


        printf("a > b: %d\n", a > b);
        printf("a >= b: %d\n", a >= b);
        printf("a < b: %d\n", a < b);
        printf("a <= b: %d\n", a <= b);
        printf("a == b: %d\n", a == b);
        printf("a != b: %d\n", a != b);
        
         printf("vamos comparar tipos de variaveis de tipos diferentes \n");
        
        int x = 5;
        float y = 5.0;
        char c = 'a';

        printf("x >= y: %d\n", x >= y);
        printf("x == y: %d\n", x == y);
        printf("x != y: %d\n", x != y);

        printf("x >= c: %d\n", x >= c);
        printf("O valor ASCII de %c é %d: \n", c, c);
        
        float numero1 = 10.2;
        int numero2 = 10;
        printf("coversão inplicita\n");
        printf("\n");
        printf(" float - int numero1 > numero2: %d\n", numero1 > numero2);
        printf(" float - int numero1 == numero2: %d\n", numero1 == numero2);
        
        printf("coversão explicita\n");
        printf("\n");
        printf(" float - int (int)numero1 > numero2: %d\n", (int)numero1 > numero2);
        printf(" float - int (int)numero1 == numero2: %d\n", (int)numero1 == numero2);

        return 0;


 }