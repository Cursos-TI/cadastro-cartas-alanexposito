#include <stdio.h>

int main (){
// variavéis carta 1
char estado1;
char codigo_da_carta1 [5];
char nome_cidade1 [20];
int população1;
float area1;
float pib1;
int pontost1 = 1;
// variavéis carta 2
char estado2;
char codigo_da_carta2 [5];
char nome_cidade2 [20];
int população2;
float area2;
float pib2;
int pontost2 = 1;

// registro das informações da carta 1
    printf("-------- Registro das Informacoes da carta 1 --------\n");
    printf("\nEstado 1 (A a H):\n");
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A01, B02...)\n");
    scanf("%s", codigo_da_carta1);
    printf("Nome da cidade (sem espacos)\n");
    scanf("%s", nome_cidade1);
    printf("Populacao (ex: 200000)\n");
    scanf("%d", &população1);
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
    printf("Populacao (ex: 200000)\n");
    scanf("%d", &população2);
    printf("Area em Km2 (ex: 200.50)\n");
    scanf("%f", &area2);
    printf("PIB (em bilhoes, ex: 300.50)\n");
    scanf("%.f", &pib2);
    printf("Numero de pontos turisticos?\n");
    scanf("%i", &pontost2);
// Finalização da carta 2
    printf("\nCadastro da segunda carta concluido.\n"); 
// apresentação da carta 1.
    printf("\n----- Carta 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %i\n", população1);
    printf("Area: %fKm\n", area1);
    printf("PIB: %fbilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %i\n", pontost1);
// apresentação da carta 2.   
    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %i\n", população2);
    printf("Area: %fKm\n", area2);
    printf("PIB: %fbilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %i\n", pontost2);
    printf("\n");
    return 0;
    
}

