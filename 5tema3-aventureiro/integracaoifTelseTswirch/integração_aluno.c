//integração operadores ternarios if else switch
#include <stdio.h>

int main() {

    int opcao;
    float nota1, nota2, nota3, media;   
    char *status;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
switch (opcao) {
    case 1:
        printf("Digite as notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3) / 3;
        printf("Média: %.2f\n", media);
        break;
    case 2:
        printf("Digite a média do aluno: ");
        scanf("%f", &media);
        status = (media >= 7.0) ? "Aprovado" : "Reprovado";
        printf("Status: %s\n", status);
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida!\n");

}

}