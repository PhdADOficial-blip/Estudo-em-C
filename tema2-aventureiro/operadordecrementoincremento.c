#include <stdio.h>

int main() {
   /*
    //Operador incremento (++)
    int i =1;
    i++;        // i terá o valor 2
   
    //Pré-incremento (++a)
    int a = 5;
    int b = ++a;      // a será 6, b será 6

    //ou

    int a = 5;
    int b;
    a++;             // a incrementa o valor e vale 6
    b = a;           // b recebe o valor de a e assume o valor 6
     
    
    //Pós-incremento (a++)
    int a = 5;
    int b = a++;      // a será 6, b será 5
    
    //ou

    int a = 5;
    int b;
    b = a;            // b recebe o valor de a e assume o valor 5
    a++;              // a incrementa o valor e vale 6

    //Operador decremento (a--):
    int i =10;
    i--;              // i terá o valor 9

    //Pré-decremento   (--a)

    int a = 5;
    int b = --a;       // a será 4, b será 4

    //Pós-decremento

    int a = 5;
    int b = a--;        // a será 4, b será 5
    */

     int a, b;

     a= 10;
     b= 10;
     //decremento 
     a--;  //soma diminui -1 = 9
     printf("%d , %d",a, b);
     //incremetno 
     b++;  //soma soma +1 = 11
     printf("%d , %d",a, b);
     //Pré-incremento (++a)
     a = ++b; // a recebe o valor de b +1 = 11 (a e b vale = 11)
     printf("%d , %d",a, b);
     //Pós-incremento (a++)
     b= a++;  // (b=a 10) e (a++ = 11)
     printf("%d , %d",a, b); 
     //Pré-decremento
     a = --b;  // (a=b-1 9) e (b-- = 9)
     printf("%d , %d",a, b);  
     //Pós-decremento
     a = b--;  // (a=b 10) e (b = 9)
     printf("%d , %d",a, b) ;
     
    return 0;

}