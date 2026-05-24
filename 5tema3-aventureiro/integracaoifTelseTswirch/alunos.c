//integração operadores ternarios if else switch
#include <stdio.h>

int main() {

    int opcao;
    float nota1, nota2, nota3, media;   
   

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
switch (opcao) {
    case 1:
        printf("Calcular a media do aluno\n");
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &nota3);
        //testar a condição se a nota é >= 0 e <= 10
        if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10) {
            media = (nota1 + nota2 + nota3) / 3;
            printf("Média: %.2f\n", media);
        } else {
            printf("Notas inválidas! As notas devem ser entre 0 e 10.\n");
        }

        break;
    case 2:
        printf("Determianr status do aluno\n");
        printf("Entra com a media do aluno: ");
        scanf("%f", &media);
        media >= 7 ? printf("Aprovado") : media >= 5 ? printf("Recuperação") : printf("Reprovado");
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida!\n");

    }

}