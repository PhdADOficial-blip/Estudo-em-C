#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     // Carta 1
    char estado1; 
    char codigo1[10] = "i";
    char cidade1[50] = "i";
    unsigned long int populacao1 = 1;
    float area1 = 2;
    float pib1= 2;
    int pontosTuristicos1 = 2;
    unsigned long int densidadepopu1;
    float pibpercapita1;
    float superpoder1;
    

    // Carta 2
    char estado2 ;
    char codigo2[10] = "r";
    char cidade2[50] = "e";
    unsigned long int populacao2 = 3 ;
    float area2 = 3 ;
    float pib2 = 4;
    int pontosTuristicos2 = 5;
    unsigned long int densidadepopu2;
    float pibpercapita2;
    float superpoder2;

    //=====VARIAVEL DE COMPARAÇÃO DE CARTAS==== 
    int resultpopu12,resultarea12, resultpib12, resultponttu12, resultdenspopu12, resultpibper12;
   

     // Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    
    

    /*1- calculo da densidade populacional: população / area = densidade (kmquadrado)
    
      2 pib per capita PIB / população = PIB per capita (float)*/
    

    //calculo pib percapita cidade 1
    pibpercapita1 = pib1 / populacao1;
    //calculo pib percapita cidade 2
    pibpercapita2 = pib2 / populacao2;
 
    //Densidade Populacional: 8102.47 hab/km²

    densidadepopu1 = populacao1 / area1;
    densidadepopu2 = populacao2 / area2;
    
    //==================SUPER PODER CALCULOS======================//
    
    /*calculo -> SOMA ( população + PIB + PIB percapita + densidade populacional (invertida) + umero de pontos turistico )  */
    unsigned int superpoder12;
    superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadepopu1 + pibpercapita1; 
    superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadepopu2 + pibpercapita2; 
    superpoder12 = superpoder1 > superpoder2;

    //===============coparação de cartas===================//
    resultpopu12 = populacao1 > populacao2;
    resultarea12 = area1 > area2;
    resultpib12 = pib1 > pib2;
    resultponttu12 = pontosTuristicos1 > pontosTuristicos2 ;
    resultdenspopu12 = densidadepopu1 > densidadepopu2;
    resultpibper12 = pibpercapita1 > pibpercapita2;


     // Exibição Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("O PIB per Capita é: %.2f Reais\n", pibpercapita1);
    printf("A densidade populacional é: %.2f km.\n", densidadepopu1);
    //super poder 

    // Exibição Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("O PIB per Capita é: %.2f Reais\n" ,pibpercapita2);
    printf("A densidade populacional é: %.2f km.\n", densidadepopu2);
    //super poder 
    
    //====COMPARAÇÃO DE CARTAS======
    
    
      printf("====Comparação de Cartas====\n");
      printf("\n");
      printf("População: (%d)\n",resultpopu12 );
      printf("Área: (%d)\n",resultarea12 );
      printf("PIB: (%d)\n",resultpib12 );
      printf("Pontos Turisticos: (%d)\n",resultponttu12 );
      printf("Densidade Populacional: (%d)\n",resultdenspopu12 );
      printf("PIB Per Capita: (%d)\n",resultpibper12 );
      printf("Super Poder: (%d)\n", superpoder12  );


    return 0;
}
