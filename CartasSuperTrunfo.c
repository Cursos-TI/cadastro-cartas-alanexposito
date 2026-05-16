#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades


char estado1 [5], estado2[5], codigo_da_carta1 [5], codigo_da_carta2 [5];
char nome_cidade1 [20], nome_cidade2 [20];
unsigned long int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
float densidadep1, densidadep2;
int pontost1, pontost2;
float percapita1, percapita2;
//Variável para comparação da densidade (nesse caso, vence quem tem menor densidade)
float densidade_invertida1, densidade_invertida2; 
float superpoder1, superpoder2;
int opcao_comparacao1, opcao_comparacao2;
//variavel para guardar a soma dos dois atributos escolhidos.
float soma_valor1 = 0, soma_valor2 = 0;


  // Área para entrada de dados
// registro das informações da carta 1
    printf("\n\n       -------- SUPER TRUNFO --------\n"); 
    printf("-------- Registro das Informacoes da carta 1 --------\n");   
    printf("\nEstado 1 (RJ, SP...):\n");
    scanf(" %s", estado1);
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
    printf("\nEstado 2 (RJ, SP...):\n");
    scanf(" %s", estado2);
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
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f Km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %i\n", pontost1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadep1);
    printf("Pib percapita: %.2f reais\n", percapita1);
    printf("SUPER PODER: %.2f\n", superpoder1);

// apresentação da carta 2.   
    printf("\n----- Carta 2 -----\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f Km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %i\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadep2);
    printf("Pib percapita: %.2f reais\n", percapita2);
    printf("SUPER PODER: %.2f\n", superpoder2);


// Menu para escolha do primeiro atributo para comparação.
    printf("\nEscolha dois atributos que deseja comparar entre as cartas cadastradas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha a primeira opcao:");
    scanf("%i", &opcao_comparacao1);
    printf("Escolha a segunda opcao:");
    scanf("%i", &opcao_comparacao2);
  
    if (opcao_comparacao2 == opcao_comparacao1)
    {
        printf("Essa opcao já foi escolhida.\n Finalizando jogo...\n");
        return 0;
    } else {
        printf("\n-----------------------\n");

    }    

    switch (opcao_comparacao1)
    {
    case 1:
        soma_valor1 += (float) populacao1;
        soma_valor2 += (float) populacao2;
        printf("\n---> Comparacao das Cartas (Atributo: POPULACAO) <---\n");
        printf("\nCarta 1: %s %s:%lu\n", nome_cidade1, estado1, populacao1);
        printf("Carta 2: %s %s:%lu\n", nome_cidade2, estado2, populacao2);
         if (populacao1 > populacao2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (populacao1 == populacao2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

    case 2:
        soma_valor1 += area1;
        soma_valor2 += area2;
        printf("\n---> Comparacao das Cartas (Atributo: AREA) <---\n");
        printf("\nCarta 1: %s %s:%.2f\n", nome_cidade1, estado1, area1);
        printf("Carta 2: %s %s:%.2f\n", nome_cidade2, estado2, area2);
         if (area1 > area2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (area1 == area2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

     case 3:
        soma_valor1 += pib1;
        soma_valor2 += pib2;
        printf("\n---> Comparacao das Cartas (Atributo: PIB) <---\n");
        printf("\nCarta 1: %s %s:%.2f\n", nome_cidade1, estado1, pib1);
        printf("Carta 2: %s %s:%.2f\n", nome_cidade2, estado2, pib2);
         if (pib1 > pib2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (pib1 == pib2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

     case 4:
        soma_valor1 += (float) pontost1;
        soma_valor2 += (float) pontost2;
        printf("\n---> Comparacao das Cartas (Atributo: PONTOS TURISTICOS) <---\n");
        printf("\nCarta 1: %s %s:%i\n", nome_cidade1, estado1, pontost1);
        printf("Carta 2: %s %s:%i\n", nome_cidade2, estado2, pontost2);
         if (pontost1 > pontost2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (pontost1 == pontost2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

     case 5:
        soma_valor1 += densidade_invertida1;
        soma_valor2 += densidade_invertida2;
        printf("\n---> Comparacao das Cartas (Atributo: DENSIDADE POPULACIONAL) <---\n");
        printf("\nCarta 1: %s %s:%.2f\n", nome_cidade1, estado1, densidadep1);
        printf("Carta 2: %s %s:%.2f\n", nome_cidade2, estado2, densidadep2);
         if (densidadep1 < densidadep2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (densidadep1 == densidadep2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

     case 6:
        soma_valor1 += percapita1;
        soma_valor2 += percapita2;
        printf("\n---> Comparacao das Cartas (Atributo: PIB PER CAPITA) <---\n");
        printf("\nCarta 1: %s %s:%.2f\n", nome_cidade1, estado1, percapita1);
        printf("Carta 2: %s %s:%.2f\n", nome_cidade2, estado2, percapita2);
         if (percapita1 > percapita2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (percapita1 == percapita2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

    case 7:
        soma_valor1 += superpoder1;
        soma_valor2 += superpoder2;
        printf("\n---> Comparacao das Cartas (Atributo: SUPER PODER) <---\n");
        printf("\nCarta 1: %s %s:%.5f\n", nome_cidade1, estado1, superpoder1);
        printf("Carta 2: %s %s:%.5f\n", nome_cidade2, estado2, superpoder2);
         if (superpoder1 > superpoder2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (superpoder1 == superpoder2)
    {
        printf("\n Ouve um empate!\n");
    }
    
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;
    
    default:
    printf("\nOpcao invalida\n");
        break;
    }

switch (opcao_comparacao2)

    {
    case 1:
        soma_valor1 += (float) populacao1;
        soma_valor2 += (float) populacao2;
        printf("\n---> Comparacao das Cartas (Atributo: POPULACAO) <---\n");
        printf("\nCarta 1: %s %s:%lu\n", nome_cidade1, estado1, populacao1);
        printf("Carta 2: %s %s:%lu\n", nome_cidade2, estado2, populacao2);
         if (populacao1 > populacao2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (populacao1 == populacao2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

    case 2:
        soma_valor1 += area1;
        soma_valor2 += area2;
        printf("\n---> Comparacao das Cartas (Atributo: AREA) <---\n");
        printf("\nCarta 1: %s %s:%.2f\n", nome_cidade1, estado1, area1);
        printf("Carta 2: %s %s:%.2f\n", nome_cidade2, estado2, area2);
         if (area1 > area2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (area1 == area2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

     case 3:
        soma_valor1 += pib1;
        soma_valor2 += pib2;
        printf("\n---> Comparacao das Cartas (Atributo: PIB) <---\n");
        printf("\nCarta 1: %s %s:%.2f\n", nome_cidade1, estado1, pib1);
        printf("Carta 2: %s %s:%.2f\n", nome_cidade2, estado2, pib2);
         if (pib1 > pib2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (pib1 == pib2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

     case 4:
        soma_valor1 += (float) pontost1;
        soma_valor2 += (float) pontost2;
        printf("\n---> Comparacao das Cartas (Atributo: PONTOS TURISTICOS) <---\n");
        printf("\nCarta 1: %s %s:%i\n", nome_cidade1, estado1, pontost1);
        printf("Carta 2: %s %s:%i\n", nome_cidade2, estado2, pontost2);
         if (pontost1 > pontost2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (pontost1 == pontost2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

     case 5:
        soma_valor1 += densidade_invertida1;
        soma_valor2 += densidade_invertida2;
        printf("\n---> Comparacao das Cartas (Atributo: DENSIDADE POPULACIONAL) <---\n");
        printf("\nCarta 1: %s %s:%.2f\n", nome_cidade1, estado1, densidadep1);
        printf("Carta 2: %s %s:%.2f\n", nome_cidade2, estado2, densidadep2);
         if (densidadep1 < densidadep2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (densidadep1 == densidadep2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

     case 6:
        soma_valor1 += percapita1;
        soma_valor2 += percapita2;
        printf("\n---> Comparacao das Cartas (Atributo: PIB PER CAPITA) <---\n");
        printf("\nCarta 1: %s %s:%.2f\n", nome_cidade1, estado1, percapita1);
        printf("Carta 2: %s %s:%.2f\n", nome_cidade2, estado2, percapita2);
         if (percapita1 > percapita2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (percapita1 == percapita2)
    {
        printf("\n Ouve um empate!\n");
    }
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;

    case 7:
        soma_valor1 += superpoder1;
        soma_valor2 += superpoder2;
        printf("\n---> Comparacao das Cartas (Atributo: SUPER PODER) <---\n");
        printf("\nCarta 1: %s %s:%.5f\n", nome_cidade1, estado1, superpoder1);
        printf("Carta 2: %s %s:%.5f\n", nome_cidade2, estado2, superpoder2);
         if (superpoder1 > superpoder2){
        printf ("\nResultado: Carta 1 (%s) venceu\n", nome_cidade1);
    } else if (superpoder1 == superpoder2)
    {
        printf("\n Ouve um empate!\n");
    }
    
    else{
        printf("\nResultado: Carta 2 (%s) venceu\n", nome_cidade2);
    }
        break;
    
    default:
    printf("\nOpcao invalida\n");
        break;
    }
// Espaço para impressão dos resultados e vencedor.
    printf("\n ---------------- SOMA DOS DOIS ATRIBUTOS ----------------\n"); 
    printf("A soma dos atributos de %s e: %.2f\n", nome_cidade1, soma_valor1);   
    printf("A soma dos atributos de %s e: %.2f\n", nome_cidade2, soma_valor2);

    if (soma_valor1 > soma_valor2)
    {
        printf("A carta 1 (%s) Venceu.\n", nome_cidade1);
    } else if (soma_valor1 < soma_valor2)
    {
        printf("A carta 2 (%s) Venceu.\n", nome_cidade2);
    } else{
        printf("EMPATOU\n");
    }
    
    


    printf("\n");  


return 0;
} 