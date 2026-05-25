//operadores logicos em c
/*

Operador E (AND) Logico (&&)
A  B   A&&B (Dois lados verdadeiros = Verdadeiro )

Operador OU (OR) Logico (||)
A B A||B  (Se aapenas uma for verdadeiro = Verdadeiro)

Operador!  
Inverter verdadeiro = falso e falso = verdadeiro 

*/
#include <stdio.h>

   int main (){

        int a = 10,b = -5;

         if(a > 0 && b > 0)  //se 
         { 
            printf("Os dois numeros são positivos\n");
         } else {
            printf("Pelo menos um dos numeros é negativo\n");
         }
         
         if(a > 0 || b > 0)  //se 
         {
            printf("pelo menos um dos numeros é positivo \n");
         } else {
            printf("Os dois numeros são negativos\n");
         }

         int a1 = 0;

         if (!a1) {
         printf("a vareavel a é 0 \n");
         }else {
            printf("a variavel é diferente de 0. \n");
         }
         
         int a2 = -10;

         if (!(a2 >  0)) {
         printf("a vareavel é negativa \n");
         }else {
            printf("a variavel é positiva . \n");
         }
         //====== Presedencia dos operadores ================
         
         
         
         int x = 5;
         int y = 10;
         int c = 1;
         //a > 0 => Verdadeiro
         //b < 0 => Verdadeiro
         //verdadeior && verdadeiro => verdadeiro
         //verdadeiro || == 0 
         //verdadeiro || falso=> verdadeiro
         
         //a > 0 => Verdadeiro
         //b < 0 => Falso
         //verdadeior && Falso => Falso
         //Falso || == 0 
         //Falso || falso=> Falso
            
         if (x > 0 && y < 0 || c == 0) {
            printf("A condição é verdadeira\n");
         } else {
            printf("A condição é falsa\n");
         }
   }