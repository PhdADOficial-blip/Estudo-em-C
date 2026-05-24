#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Carta 2
    char estado1; 
    char codigo1[10] = "i";
    char cidade1[50] = "i";
    unsigned long int populacao1 = 1;
    float area1 = 2;
    float pib1= 2;
    int pontosTuristicos1 = 2;
    float densidadepopu1;
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
    float densidadepopu2;
    float pibpercapita2;
    float superpoder2;
    // Valores de batalha
    int batalha;
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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

    densidadepopu1 = (float)populacao1 / area1;
    densidadepopu2 = (float)populacao2 / area2;
    
    //==================SUPER PODER CALCULOS======================//
    
    /*calculo -> SOMA ( população + PIB + PIB percapita + densidade populacional (invertida) + umero de pontos turistico )  */
    int superpoder12;
    superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadepopu1 + pibpercapita1; 
    superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadepopu2 + pibpercapita2; 
    superpoder12 = superpoder1 > superpoder2;

    //===============coparação dos cartas===================//
    resultpopu12 = populacao1 > populacao2;
    resultarea12 = area1 > area2;
    resultpib12 = pib1 > pib2;
    resultponttu12 = pontosTuristicos1 > pontosTuristicos2 ;
    resultdenspopu12 = densidadepopu1 < densidadepopu2;
    resultpibper12 = pibpercapita1 > pibpercapita2;

    
     
   

     // Exibição Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("O PIB per Capita é: %.2f Reais\n", pibpercapita1);
    printf("A densidade populacional é: %.2f hab/km.\n", densidadepopu1);
    //super poder 

    // Exibição Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("O PIB per Capita é: %.2f Reais\n" ,pibpercapita2);
    printf("A densidade populacional é: %.2f hab/km.\n", densidadepopu2);
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

      //================escolher atrinuto para carta vencedora ==================//

          //Tratamento de esseção 
    
    printf("### Escolha o primeiro atributo para Batalhar ###");
    printf("1 = População: \n" );
    printf("2 = Área: \n" );
    printf("3 = PIB: \n");
    printf("4 = Pontos Turisticos: \n" );
    printf("5 = Densidade Populacional: \n");
    printf("6 = PIB Per Capita: \n");
    printf("7 = Super Poder: \n");
    scanf("%d", &batalha);


    switch (batalha)
    {
    case 1:
       if(populacao1 > populacao2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("A população da carta 1 %s é: %lu\n",cidade1, populacao1);
            printf("A população da carta 2 %s é: %lu\n",cidade2, populacao2);
        
            } else if (populacao1 < populacao2 ){
                printf("carta 1 %s venceu!\n",cidade2);
                printf("A população da carta 1 %s é: %lu\n",cidade1, populacao1);
                printf("A população da carta 2 %s é: %lu\n",cidade2, populacao2);
            } else{
                printf("Houve empate ");
                printf("A população da carta 1 %s é: %lu\n",cidade1, populacao1);
                printf("A população da carta 2 %s é: %lu\n",cidade2, populacao2);
            }
            break;
    case 2:
       if(area1 > area2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("A AREA da carta 1 %s é: %.2f\n",cidade1, area1);
            printf("A AREA da carta 2 %s é: %.2f\n",cidade2, area2);
        
            } else if (area1 < area2 ){
                printf("carta 1 %s venceu!\n",cidade2);
                printf("A AREA da carta 1 %s é: %.2f\n",cidade1, area1);
                printf("A AREA da carta 2 %s é: %.2f\n",cidade2, area2);
            } else{
                printf("Houve empate ");
                printf("A AREA da carta 1 %s é: %.2f\n",cidade1, area1);
                printf("A AREA da carta 2 %s é: %.2f\n",cidade2, area2);
                
            }
            break;
    case 3:
       if(pib1 > pib2 ) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("O PIB da carta 1 %s é: %.2f\n",cidade1, pib1);
            printf("O PIB da carta 2 é%s é: %.2f\n",cidade2, pib2);
            } else if (pib1 < pib2 ){
                    printf("carta 1 %s venceu!\n",cidade2);
                    printf("O PIB da carta 1 %s é: %.2f\n",cidade1, pib1);
                    printf("O PIB da carta 2 %s é: %.2f\n",cidade2, pib2);
            } else{
                    printf("Houve empate ");
                    printf("O PIB da carta 1 %s é: %.2f\n",cidade1, pib1);
                    printf("O PIB da carta 2 %s é: %.2f\n",cidade2, pib2);
            }
            break;
    case 4:
       if(pontosTuristicos1 > pontosTuristicos2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("Os pontos turísticos da carta 1 %s é: %.2f\n",cidade1, pontosTuristicos1);
            printf("Os pontos turísticos da carta 2 %s é: %.2f\n",cidade2, pontosTuristicos2);
            } else if (pontosTuristicos1 < pontosTuristicos2 ){
                    printf("carta 2 %s venceu!\n",cidade2);
                    printf("Os pontos turísticos da carta 1 %s é: %.2f\n",cidade1, pontosTuristicos1);
                    printf("Os pontos turísticos da carta 2 %s é: %.2f\n",cidade2, pontosTuristicos2);
            } else{
                    printf("Houve empate ");
                    printf("Os pontos turísticos da carta 1 %s é: %.2f\n",cidade1, pontosTuristicos1);
                    printf("Os pontos turísticos da carta 2 %s é: %.2f\n",cidade2, pontosTuristicos2);
            }
            break;
    case 5:
       if(densidadepopu1 < densidadepopu2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("A densidade populacional da carta 1 %s é: %.2f\n",cidade1, densidadepopu1);
            printf("A densidade populacional da carta 2 %s é: %.2f\n",cidade2, densidadepopu2);
            } else if (densidadepopu1 > densidadepopu2){
                    printf("carta 2 %s venceu!\n",cidade2);
                    printf("A densidade populacional da carta 1 %s é: %.2f\n",cidade1, densidadepopu1);
                    printf("A densidade populacional da carta 2 %s é: %.2f\n",cidade2, densidadepopu2);
            } else{
                    printf("Houve empate ");
                    printf("A densidade populacional da carta 1 %s é: %.2f\n",cidade1, densidadepopu1);
                    printf("A densidade populacional da carta 2 %s é: %.2f\n",cidade2, densidadepopu2);
            }
            break;
    case 6:
       if(pibpercapita1 > pibpercapita2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("O PIB percapita da carta 1 %s é: %.2f\n",cidade1, pibpercapita1);
            printf("O PIB percapita da carta 2 %s é: %.2f\n",cidade2, pibpercapita2);
            } else if (pibpercapita1 < pibpercapita2){
                    printf("carta 2 %s venceu!\n",cidade2);
                    printf("O PIB percapita da carta 1 %s é: %.2f\n",cidade1, pibpercapita1);
                    printf("O PIB percapita da carta 2 %s é: %.2f\n",cidade2, pibpercapita2);
            } else{
                    printf("Houve empate ");
                    printf("O PIB percapita da carta 1 %s é: %.2f\n",cidade1, pibpercapita1);
                    printf("O PIB percapita da carta 2 %s é: %.2f\n",cidade2, pibpercapita2);
            }
            break;
    case 7:
       if(superpoder1 > superpoder2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("O Super Poder da carta 1 %s é: %.2f\n",cidade1, superpoder1);
            printf("O Super poder da carta 2 %s é: %.2f\n",cidade2, superpoder2);
            } else if (superpoder1 < superpoder2){
                    printf("carta 2 %s venceu!\n",cidade2);
                    printf("O Super Poder da carta 1 %s é: %.2f\n",cidade1, superpoder1);
                    printf("O Super poder da carta 2 %s é: %.2f\n",cidade2, superpoder2);
            } else{
                    printf("Houve empate ");
                    printf("O Super Poder da carta 1 %s é: %.2f\n",cidade1, superpoder1);
                    printf("O Super poder da carta 2 %s é: %.2f\n",cidade2, superpoder2);
            }
            break;
    default:
        printf("Numero invalido");
        break;

    }
     
    printf("### Escolha o Segundo atributo para Batalhar ###");
    printf("1 = População: \n" );
    printf("2 = Área: \n" );
    printf("3 = PIB: \n");
    printf("4 = Pontos Turisticos: \n" );
    printf("5 = Densidade Populacional: \n");
    printf("6 = PIB Per Capita: \n"); 
    printf("7 = Super Poder: \n");
    scanf("%d", &batalha);


  
    switch (batalha)
    {
    case 1:
       if(populacao1 > populacao2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("A população da carta 1 %s é: %lu\n",cidade1, populacao1);
            printf("A população da carta 2 %s é: %lu\n",cidade2, populacao2);
        
            } else if (populacao1 < populacao2 ){
                printf("carta 1 %s venceu!\n",cidade2);
                printf("A população da carta 1 %s é: %lu\n",cidade1, populacao1);
                printf("A população da carta 2 %s é: %lu\n",cidade2, populacao2);
            } else{
                printf("Houve empate ");
                printf("A população da carta 1 %s é: %lu\n",cidade1, populacao1);
                printf("A população da carta 2 %s é: %lu\n",cidade2, populacao2);
            }
            break;
    case 2:
       if(area1 > area2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("A AREA da carta 1 %s é: %.2f\n",cidade1, area1);
            printf("A AREA da carta 2 %s é: %.2f\n",cidade2, area2);
        
            } else if (area1 < area2 ){
                printf("carta 1 %s venceu!\n",cidade2);
                printf("A AREA da carta 1 %s é: %.2f\n",cidade1, area1);
                printf("A AREA da carta 2 %s é: %.2f\n",cidade2, area2);
            } else{
                printf("Houve empate ");
                printf("A AREA da carta 1 %s é: %.2f\n",cidade1, area1);
                printf("A AREA da carta 2 %s é: %.2f\n",cidade2, area2);
                
            }
            break;
    case 3:
       if(pib1 > pib2 ) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("O PIB da carta 1 %s é: %.2f\n",cidade1, pib1);
            printf("O PIB da carta 2 é%s é: %.2f\n",cidade2, pib2);
            } else if (pib1 < pib2 ){
                    printf("carta 1 %s venceu!\n",cidade2);
                    printf("O PIB da carta 1 %s é: %.2f\n",cidade1, pib1);
                    printf("O PIB da carta 2 %s é: %.2f\n",cidade2, pib2);
            } else{
                    printf("Houve empate ");
                    printf("O PIB da carta 1 %s é: %.2f\n",cidade1, pib1);
                    printf("O PIB da carta 2 %s é: %.2f\n",cidade2, pib2);
            }
            break;
    case 4:
       if(pontosTuristicos1 > pontosTuristicos2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("Os pontos turísticos da carta 1 %s é: %.2f\n",cidade1, pontosTuristicos1);
            printf("Os pontos turísticos da carta 2 %s é: %.2f\n",cidade2, pontosTuristicos2);
            } else if (pontosTuristicos1 < pontosTuristicos2 ){
                    printf("carta 2 %s venceu!\n",cidade2);
                    printf("Os pontos turísticos da carta 1 %s é: %.2f\n",cidade1, pontosTuristicos1);
                    printf("Os pontos turísticos da carta 2 %s é: %.2f\n",cidade2, pontosTuristicos2);
            } else{
                    printf("Houve empate ");
                    printf("Os pontos turísticos da carta 1 %s é: %.2f\n",cidade1, pontosTuristicos1);
                    printf("Os pontos turísticos da carta 2 %s é: %.2f\n",cidade2, pontosTuristicos2);
            }
            break;
    case 5:
       if(densidadepopu1 < densidadepopu2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("A densidade populacional da carta 1 %s é: %.2f\n",cidade1, densidadepopu1);
            printf("A densidade populacional da carta 2 %s é: %.2f\n",cidade2, densidadepopu2);
            } else if (densidadepopu1 > densidadepopu2){
                    printf("carta 2 %s venceu!\n",cidade2);
                    printf("A densidade populacional da carta 1 %s é: %.2f\n",cidade1, densidadepopu1);
                    printf("A densidade populacional da carta 2 %s é: %.2f\n",cidade2, densidadepopu2);
            } else{
                    printf("Houve empate ");
                    printf("A densidade populacional da carta 1 %s é: %.2f\n",cidade1, densidadepopu1);
                    printf("A densidade populacional da carta 2 %s é: %.2f\n",cidade2, densidadepopu2);
            }
            break;
    case 6:
       if(pibpercapita1 > pibpercapita2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("O PIB percapita da carta 1 %s é: %.2f\n",cidade1, pibpercapita1);
            printf("O PIB percapita da carta 2 %s é: %.2f\n",cidade2, pibpercapita2);
            } else if (pibpercapita1 < pibpercapita2){
                    printf("carta 2 %s venceu!\n",cidade2);
                    printf("O PIB percapita da carta 1 %s é: %.2f\n",cidade1, pibpercapita1);
                    printf("O PIB percapita da carta 2 %s é: %.2f\n",cidade2, pibpercapita2);
            } else{
                    printf("Houve empate ");
                    printf("O PIB percapita da carta 1 %s é: %.2f\n",cidade1, pibpercapita1);
                    printf("O PIB percapita da carta 2 %s é: %.2f\n",cidade2, pibpercapita2);
            }
            break;
    case 7:
       if(superpoder1 > superpoder2) {
            printf("carta 1 %s venceu!\n",cidade1);
            printf("O Super Poder da carta 1 %s é: %.2f\n",cidade1, superpoder1);
            printf("O Super poder da carta 2 %s é: %.2f\n",cidade2, superpoder2);
            } else if (superpoder1 < superpoder2){
                    printf("carta 2 %s venceu!\n",cidade2);
                    printf("O Super Poder da carta 1 %s é: %.2f\n",cidade1, superpoder1);
                    printf("O Super poder da carta 2 %s é: %.2f\n",cidade2, superpoder2);
            } else{
                    printf("Houve empate ");
                    printf("O Super Poder da carta 1 %s é: %.2f\n",cidade1, superpoder1);
                    printf("O Super poder da carta 2 %s é: %.2f\n",cidade2, superpoder2);
            }
            break;
    default:
        printf("Numero invalido");
        break;
 return 0;

}