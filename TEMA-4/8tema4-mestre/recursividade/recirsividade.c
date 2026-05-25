#include <stdio.h>

//procedimento recursivo para imprimir uma mensagem

void imprimirmensagen() {
    printf("Olá, esta é uma mensagem recursiva!\n");
}

//FUNÇÃO RECURSIVA PARA IMPRIMIR NUMEROS DE N A 1
void recursiviloop(int n){
    if (n > 0) {
        printf("%d\n", n);
        recursiviloop(n - 1); // Chama a função novamente com n-1
    }

}

//void na pratica 
void recursivo(int numero1) //o int numero1 é o parametro da função recursiva
{
    if (numero1 > 0) { //a variavel é local 
        printf("%d\n", numero1);

        recursivo(numero1 - 1); //chama a função novamente com numero1-1
    }
}
//void na pratica 2 
void recursivo2(int numero1) //o int numero1 é o parametro da função recursiva
{
    if (numero1 > 0) { //a variavel é local 
        recursivo2(numero1 - 1); //chama a função novamente com numero1-1
        printf("%d\n", numero1); //a diferença é que a impressão acontece depois da chamada recursiva, o que resulta em uma contagem crescente de 1 a numero1, em vez de decrescente.
    }

}


        int main() {
            int numero = 5; // Número para a função recursiva
            int quantidade = 10;
            int quantidade2 = 10;
            imprimirmensagen(); // Inicia a recursão
            recursiviloop(numero);
            printf("Recursão com função recursivo, contagem %d:\n", quantidade);
            recursivo(quantidade); // Chama a função recursiva com o valor 10
            printf("Recursão com função recursivo2, contagem %d:\n", quantidade2);
            recursivo2(quantidade2); // Chama a função recursiva com o valor 10
            



            return 0;
}