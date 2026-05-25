//operadoresn ternarios
#include <stdio.h>  

int main() {
    int temperatura = 28, resultado;
    resultado = (temperatura > 30) ? 1: 0; // operador ternário

    if (resultado == 1) {
        printf("Temperatura alta\n");
    } else {
        printf("Temperatura baixa\n");
    }
    return 0;
}