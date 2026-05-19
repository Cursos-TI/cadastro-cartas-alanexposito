#include <stdio.h> 
int main () {

unsigned int estoque_ciano = 0, estoque_magenta = 0, estoque_amarelo = 0, estoque_preto =0;
int menu1, menu2, menu3;
int addTonner,addCiano, addMagenta, addAmarelo, addPreto;
int subTonner, subCiano, subMagenta, subAmarelo, subPreto;
do {
    printf("\nEscolha uma das opcoes:\n");
    printf("1 - Consultar Estoque.\n");
    printf("2 - Adicionar ao Estoque.\n");
    printf("3 - Retirar do estoque.\n");
    printf("4 - Sair.\n");
    scanf("%i", &menu1);

    switch (menu1)
    {
        case 1:
        printf("Tonner Ciano: %u\n", estoque_ciano);
        printf("Tonner Magenta: %u\n", estoque_magenta);
        printf("Tonner Amarelo: %u\n", estoque_amarelo);
        printf("Tonner Preto: %u\n", estoque_preto);
        break;
        case 2:
            do  {
                printf("\nQual a cor que deseja adiconar?\n");
                printf("1 - Ciano\n");
                printf("2 - Magenta\n");
                printf("3 - Amarelo\n");
                printf("4 - Preto\n");
                printf("5 - Voltar\n");
                scanf("%i", &menu2);

                switch (menu2){
                    case 1:
                        printf("\nQual a quantidade que deseja adicionar em Ciano?\n");
                        scanf("%i", &addCiano);
                        estoque_ciano += addCiano;
                        break;
                    case 2:
                        printf("Qual a quantidade que deseja adicionar em Magenta?\n");
                        scanf("%i", &addMagenta);
                        estoque_magenta += addMagenta;
                        break;
                    case 3:
                        printf("Qual a quantidade que deseja adicionar em Amarelo?\n");
                        scanf("%i", &addAmarelo);
                        estoque_amarelo += addAmarelo;
                        break;
                    case 4:
                        printf("Qual a quantidade que deseja adicionar em Preto?\n");
                        scanf("%i", &addPreto);
                        estoque_preto += addPreto;
                        break;
                    case 5:
                        printf("Voltando...\n");
                        break;
                    default:
                        printf("Opcao");
                        break;
                }

            } while (menu2 != 5 );
            break;
        case 3:
            do  {
                printf("\nQual a cor que deseja retirar?\n");
                printf("1 - Ciano\n");
                printf("2 - Magenta\n");
                printf("3 - Amarelo\n");
                printf("4 - Preto\n");
                printf("5 - Voltar\n");
                scanf("%i", &menu3);
                switch (menu3){
                    case 1:
                        printf("\nQual a quantidade que deseja retirar em Ciano?\n");
                        scanf("%i", &subCiano);
                        if (subCiano > estoque_ciano)
                            {
                            printf("Operacao negada, seu estoque está abaixo. Verifique a quantidade.\n");
                            }else{
                            estoque_ciano -= subCiano;
                            printf("%i unidades retiradas com sucesso\n", subCiano);
                            }
                            break;
                    case 2:
                        printf("Qual a quantidade que deseja retiar em Magenta?\n");
                        scanf("%i", &subMagenta);
                         if (subMagenta > estoque_magenta)
                            {
                            printf("Operacao negada, seu estoque está abaixo. Verifique a quantidade.\n");
                            }else{
                            estoque_magenta -= subMagenta;
                            printf("%i unidades retiradas com sucesso\n", subMagenta);}
                            break;
                    case 3:
                        printf("Qual a quantidade que deseja retirar em Amarelo?\n");
                        scanf("%i", &subAmarelo);
                         if (subAmarelo > estoque_amarelo)
                            {
                            printf("Operacao negada, seu estoque está abaixo. Verifique a quantidade.\n");
                            }else{
                            estoque_amarelo -= subAmarelo;
                            printf("%i unidades retiradas com sucesso\n", subAmarelo);}
                            break;
                    case 4:
                        printf("Qual a quantidade que deseja retirar em Preto?\n");
                        scanf("%i", &subPreto);
                        if (subPreto > estoque_preto)
                            {
                            printf("Operacao negada, seu estoque está abaixo. Verifique a quantidade.\n");
                            }else{
                            estoque_preto -= subPreto;
                            printf("%i unidades retiradas com sucesso\n", subPreto);}
                            break;
                    case 5:
                        printf("Voltando...\n");
                        break;
                    default:
                        printf("Opcao");
                        break;
                }

            } while (menu3 != 5 );
            break;    
        case 4:
                printf("Saindo...");
                break;
        default:
            printf("\nOpcao invalida no menu principal!\n");
            break;
    }

    } while (menu1 != 4);
    
return 0;

}