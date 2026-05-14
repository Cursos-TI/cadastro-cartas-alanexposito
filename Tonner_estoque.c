#include <stdio.h> 
int main () {

unsigned int estoque_ciano;

printf("Ola, entre com a quantidade atual de tonner ciano:\n");
scanf("%u", &estoque_ciano);

if (estoque_ciano == 0)
{
    printf("ATENCAO: ESTOQUE ZERADO. COMPRA URGENTE");
}
if (estoque_ciano < 5 )
{
    printf("Estoque abaixo do minimo, recomendo comprar mais.");

}   else if (estoque_ciano >= 5 && estoque_ciano <= 10)
{
    printf("Esoque com nível OK, mas fique de olho.");

}   else if (estoque_ciano >10)
{
    printf("Quantidade boa, fique tranquilo.");
}

    
}