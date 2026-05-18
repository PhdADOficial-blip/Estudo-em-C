#include  <stdio.h>
  

        int main () {
              
             int  nota1, nota2, nota3 ;
             float media;

            printf("---------------------\n");
            printf("---------------------\n");
            printf("----------media de alunos modelo 1-----------\n");
            
            printf("nota1: \n");
            scanf("%d", &nota1);

            printf("nota2: \n");
            scanf("%d", &nota2);

            printf("nota3:\n");
            scanf("%d", &nota3);
            
            media = (float) (nota1 + nota2 + nota3) / 3;

            printf("media das notas e: %.1f \n" , media);
             

            float  nota11, nota22, nota33 ;
            float media1;

            printf("---------------------\n");
            printf("----------media de alunos modelo 2-----------\n");
            printf("---------------------\n");
            printf("nota1: \n");
            scanf("%f", &nota11);

            printf("nota2: \n");
            scanf("%f", &nota22);

            printf("nota3:\n");
            scanf("%f", &nota33);
            
            media1 = (float) (nota11 + nota22 + nota33) / 3;

            printf("media das notas e: %.1f" , media1);






      return 0;
}