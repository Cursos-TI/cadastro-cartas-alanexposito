#include <stdio.h>

/*
int main (){ 
    

unsigned int idade;

printf("Digite a sua idade:\n");
scanf("%u", &idade);

if (idade >= 60) {
    printf("Voce é um idoso");
} else if (idade < 60 && idade >= 18) {
    printf("Voce é um adulto");
} else if (idade <18 && idade >= 12) {
    printf("Voce é um adolescente");
} else {
    printf("voce é uma crianca");
}

   return 0;

}
*/


int main() {

    int opcao;
    unsigned int magenta = 5;
    unsigned int ciano = 6;
    unsigned int amarelo = 8;
    unsigned int preto = 6;
    
printf("Estoque de Tonner. Qual cor deseja saber a quantidade?\n");
printf("\n1 - Ciano\n");
printf("2 - Magenta\n");
printf("3 - Amarelo\n");
printf("4 - Preto\n");
scanf("%i", &opcao);


switch (opcao)
{
case 1:
    printf("O estoque de tonner CIANO e: %u\n", ciano);
    if (ciano == 0)
    {
        printf("ATENCAO: ESTOQUE ZERADO");
    }   else if (ciano <= 5) {
        printf("Estoque abaixo do aceitavel.");
    }   else {
        printf("Estoque acima do limite de seguranca");
    }
    
    break;
case 2:
    printf("O estoque de tonner MAGENTA e: %u\n", magenta);
    if (magenta == 0)
    {
        printf("ATENCAO: ESTOQUE ZERADO");
    }   else if (magenta <= 5) {
        printf("Estoque abaixo do aceitavel.");
    }   else {
        printf("Estoque acima do limite de seguranca");
    }
    break;
case 3:
    printf("O estoque de tonner AMARELO e: %u\n", amarelo);
    if (amarelo == 0)
    {
        printf("ATENCAO: ESTOQUE ZERADO");
    }   else if (amarelo <= 5) {
        printf("Estoque abaixo do aceitavel.");
    }   else {
        printf("Estoque acima do limite de seguranca");
    }
    break;
case 4:
    printf("O estoque de tonner PRETO e: %u\n", preto);
    if (preto == 0)
    {
        printf("ATENCAO: ESTOQUE ZERADO");
    }   else if (preto <= 5) {
        printf("Estoque abaixo do aceitavel.");
    }   else {
        printf("Estoque acima do limite de seguranca");
    }
    break;        
default:
    printf("Opcao invalida.");
    break;
}

}
