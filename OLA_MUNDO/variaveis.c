#include <stdio.h>
int main (){
    int idade = 39;
    int quantidade = 10;
    float altura = 1.83;
    char letra = 'A';
    char nome[20] = "ALan";

    //printf("meu nome é: %s e minha idade é: %danos\n", nome, idade);
    printf("Meu nome é: %s, tenho %.2f de altura e tenho %d anos.\n", nome, altura, idade);
    
    return 0;
}