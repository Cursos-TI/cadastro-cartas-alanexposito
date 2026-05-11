#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1, estado2;
char codigo_da_carta1 [5], codigo_da_carta2 [5];
char nome_cidade1 [20], nome_cidade2 [20];
unsigned long int populacao1, populacao2;
float area1 = 1, area2 = 2;
float pib1, pib2;
float densidadep1, densidadep2;
int pontost1, pontost2;
float percapita1, percapita2;
//Variável para comparação da densidade (nesse caso, vence quem tem menor densidade)
float densidade_invertida1, densidade_invertida2; 
float superpoder1, superpoder2;

  // Área para entrada de dados
// registro das informações da carta 1
    printf("-------- Registro das Informacoes da carta 1 --------\n");
    printf("\nEstado 1 (A a H):\n");
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A01, B02...)\n");
    scanf("%s", codigo_da_carta1);
    printf("Nome da cidade (sem espacos)\n");
    scanf("%s", nome_cidade1);
    printf("Populacao (ex: 230000)\n");
    scanf("%lu", &populacao1);
    printf("Area em Km2 (ex: 200.50)\n");
    scanf("%f", &area1);
    printf("PIB (em bilhoes, ex: 300.50)\n");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos?\n");
    scanf("%i", &pontost1);
// Finalização da carta 1
    printf("\nCadastro da primeira carta concluido.\n"); 
// registro das informações da carta 2    
    printf("\n-------- Registro das Informacoes da carta 2 --------\n");
    printf("\nEstado 2 (A a H):\n");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: A01, B02...)\n");
    scanf("%s", codigo_da_carta2); 
    printf("Nome da cidade (sem espacos)\n");
    scanf("%s", nome_cidade2);
    printf("Populacao (ex: 335000)\n");
    scanf("%lu", &populacao2);
    printf("Area em Km2 (ex: 200.50)\n");
    scanf("%f", &area2);
    printf("PIB (em bilhoes, ex: 300.50)\n");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos?\n");
    scanf("%i", &pontost2);
// Finalização da carta 2
    printf("\nCadastro da segunda carta concluido.\n"); 

//Calculo densidade populacional carta 1
    densidadep1 = (float) populacao1 / area1; 
//Calculo densidade populacional carta 2
    densidadep2 = (float) populacao2 / area2; 

//Calculo Pib percapita carta 1
    percapita1 = (float) (pib1 * 1000000000) / populacao1;   
//Calculo Pib percapita carta 2
    percapita2 = (float) (pib2 * 1000000000) / populacao2;  

//Calculo de Densidade Inevrtida 1 (Nesse caso o menor vence.)
    densidade_invertida1 = 1.0 / densidadep1;    
//Calculo de Densidade Inevrtida 2 (Nesse caso o menor vence.)
    densidade_invertida2 = 1.0 / densidadep2;



//Calculo SUPERPODER carta1
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontost1 + percapita1 + densidade_invertida1 ;
//Calculo SUPERPODER carta2
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontost2 + percapita2 + densidade_invertida2 ;

// Área para exibição dos dados da cidade
// apresentação da carta 1.
    printf("\n----- Carta 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f Km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %i\n", pontost1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadep1);
    printf("Pib percapita: %.2f reais\n", percapita1);
    printf("SUPER PODER: %.5f\n", superpoder1);

// apresentação da carta 2.   
    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f Km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %i\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadep2);
    printf("Pib percapita: %.2f reais\n", percapita2);
    printf("SUPER PODER: %.5f\n", superpoder2);


    //Comparações das cartas (Quem venceu?)
    printf("\n------COMPARACAO DAS CARTAS------\n");
    printf("Se der 1, carta 1 venceu. Se der 0, carta 2 venceu.\n");

    printf("\nPopulacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d \n", pontost1 > pontost2);
    printf("Densidade Populacional: %d\n", densidade_invertida1 > densidade_invertida2);
    printf("PIB per capita: %d\n", percapita1 > percapita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2 );
    printf("\n");  


return 0;
} 

