#include <stdio.h>
    

    int main () {
        /*    4,294,967,295  (dobra os valores porque não tem o sinal -)
        char:             -  128          
        Modificardor  - Intervalos de valores (  unsigned somente verdadeiros )          
        int: -2,147,483,647 a  2,147,483,647
        unsigned int: 0  a a  127
        unsigned char:    -  0             a  255         (dobra os valores porque não tem o sinal -)
        */
        int signedNumber = 3000000000; // Este valor excede o limite de um int normal
        unsigned int unsignedNumber = 3000000000;
        printf("----int: -2,147,483,647 a  2,147,483,647\n");
        printf("----3000000000; // Este valor excede o limite de um int normal\n");
        printf("Número com sinal (-) não consegue depurar: %d\n", signedNumber);
        printf("----unsigned int: 0  a  4,294,967,295\n");
        printf("Número sem sinal: %u\n", unsignedNumber);
        printf("\n");
        printf("\n");
        //Tipo	Intervalo de valores
        /*
        int:-2,147,483,648 a 2,147,483,647
        long int: -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
        double    ±1.7E-308 a ±1.7E+308
        long double	       ±3.4E-4932 a ±1.1E+4932
        return 0;
        */
        int regularNumber = 2147483647; // Valor máximo de int
        long int bigNumber = 2147483647;
        printf("----int: -2,147,483,647 a  2,147,483,647\n");
        printf("Número regular (int): %d\n", regularNumber);
        printf("----long int: -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807\n");
        printf("Número grande( a maquina não consegue depurar mesmo \n com long, apesar das especificaçães que o long chega a 9..E) (long int): %ld\n", bigNumber);
        printf("\n");

        bigNumber = 2147483648; // Valor maior que o máximo de long int

        printf("----2147483648; // Valor maior que o máximo de long int\n");
        printf("Número grande atualizado (long int): %ld\n", bigNumber);
        printf("\n");
        
        printf("Double e para maiores casas decimais \n");
        double preciseNumber = 3.141592653589793;
        long double veryPreciseNumber = 3.14159265358979323846;
        printf("----double: ±1.7E-308 a ±1.7E+308\n");
        printf("Número preciso (double): %.15f\n", preciseNumber);
        printf("----long double:  ±3.4E-4932 a ±1.1E+4932\n");
        printf("----long double: não funciona porque depende da maquina precisamos \nanalizar o gb do computador / programa / ide ");
        printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("Ate aqui aprendemos que apesar de existe as funções - long int / long long int /  \nunsigned int: / double /  long double / long long double \n isso não define se ele vai conseguir depurar vai depender \ndo espaso do proprio sistema\n");
        printf("\n");
        printf("e não vamos usar o função sizeof(int) \npara saber quantos gigas tem em cada comando \n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("Tamanho do int %u bytes \n" ,sizeof(int));
        printf("Tamanho do long int %u bytes \n" ,sizeof(long int));
        printf("Tamanho do long long int %u bytes \n" ,sizeof(long long int));
        printf("Tamanho do double %u bytes \n" ,sizeof(double));
        printf("Tamanho do long double %u bytes \n" ,sizeof(long double));
        return 0;

}







