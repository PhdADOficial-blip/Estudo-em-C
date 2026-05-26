#include <stdio.h>

 int main()  {
    int index;
    
    char * nomesAlunos [3][3]= {
        {"Aluno 0","Pt: 30","Mat: 90"}, 
        {"Aluno 1","Pt: 40","Mat: 80"},
        {"Aluno 2","Pt: 50","Mat: 70"}
    };
        
    printf("Digite o numero do aluno que queira ver as notas... \n");
    printf("Para aluno 0, digite 0 \n");
    printf("Para aluno 1, digite 1 \n");
    printf("Para aluno 2, digite 2 \n");

    scanf("%d", &index);
// a logica e puxar os valores da linha 
    printf("A notas do %s são: %s e %s \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    return 0;
}