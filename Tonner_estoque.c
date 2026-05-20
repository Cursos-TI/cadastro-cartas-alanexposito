#include <stdio.h> 
#include <stdlib.h> //Inclui essa biblioteca para fazer funcionar o system ("cls"); Com ele consigo apagar os rastros de informações que o programa vai deixando.
int main () {
//Usei a variavel unsigned int porque as informações que ela vai recebr sempre serão positivas.
unsigned int estoque_ciano = 0, estoque_magenta = 0, estoque_amarelo = 0, estoque_preto =0;
int menu1, menu2, menu3;
int addTonner,addCiano, addMagenta, addAmarelo, addPreto;
int subTonner, subCiano, subMagenta, subAmarelo, subPreto;

//Esse processo é para salvar as informações do estoque em um arquivo txt.
FILE *arquivo_leitura;
arquivo_leitura = fopen("estoque_rdr.txt", "r");
if (arquivo_leitura != NULL)
{
    fscanf(arquivo_leitura, "%u %u %u %u", &estoque_ciano, &estoque_magenta, &estoque_amarelo, &estoque_preto);
    fclose(arquivo_leitura);
    printf("[SISTEMA] Arquivo carregado com sucesso.\n");
    system("pause");
} else {
    printf("[SISTEMA] Nenhum registro encontrado, iniciando estoque do zero.\n");
    system("pause");
    }



//Usei um loop Do-While para o menu ficar interativo. Assim consigo adicionar as opções de voltar e sair. 
do {
    //system("cls"); apaga todo o rastro que o programa vai deixando conforme vai escolhendo as opções.
    
    system("cls");
    
    printf("\nEscolha uma das opcoes:\n");
    printf("1 - Consultar Estoque.\n");
    printf("2 - Adicionar ao Estoque.\n");
    printf("3 - Retirar do estoque.\n");
    printf("4 - Sair.\n");
    scanf("%i", &menu1);

    //Usei um switch para que o usuario possa escolher as opções do primeiro menu.
    switch (menu1)
    {
        //Case 1 serve para consultar o estoque de toner. No final dele, antes do break adicionei um system("pause"); para que o usuario possa ver a quantidade antes do programa apagar a tela.
        case 1:
        system ("cls");
        printf("\nTonner Ciano: %u\n", estoque_ciano);
            if (estoque_ciano < 5)
            {
                printf("*CUIDADO, ESTOQUE DE CIANO ESTA ABAIXO DA MARGEM DE SEGURANCA*\n");
            } else if (estoque_ciano >=5 && estoque_ciano <= 10)
            {
                printf("QUANTIDADE DE TONER CIANO ESTA OK\n");
            } else 
                printf("QUANTIDADE DE TONER CIANO ESTA BOA.\n");
                   
        printf("Tonner Magenta: %u\n", estoque_magenta);
            if (estoque_magenta < 5)
            {
                printf("*CUIDADO, ESTOQUE DE MAGENTA ESTA ABAIXO DA MARGEM DE SEGURANCA*\n");
            } else if (estoque_magenta >=5 && estoque_magenta <= 10)
            {
                printf("QUANTIDADE DE TONER MAGENTA ESTA OK\n");
            } else 
                printf("QUANTIDADE DE TONER MAGENTA ESTA BOA.\n");
        printf("Tonner Amarelo: %u\n", estoque_amarelo);
            if (estoque_amarelo < 5)
            {
                printf("*CUIDADO, ESTOQUE DE AMARELO ESTA ABAIXO DA MARGEM DE SEGURANCA*\n");
            } else if (estoque_amarelo >=5 && estoque_amarelo <= 10)
            {
                printf("QUANTIDADE DE TONER AMARELO ESTA OK\n");
            } else 
                printf("QUANTIDADE DE TONER AMARELO ESTA BOA.\n");
        printf("Tonner Preto: %u\n", estoque_preto);
            if (estoque_preto < 5)
            {
                printf("*CUIDADO, ESTOQUE DE PRETO ESTA ABAIXO DA MARGEM DE SEGURANCA*\n");
            } else if (estoque_preto >=5 && estoque_preto <= 10)
            {
                printf("QUANTIDADE DE TONER PRETO ESTA OK\n");
            } else 
                printf("QUANTIDADE DE TONER PRETO ESTA BOA.\n");
            //Como eu iniciei com cls, tive que colocar um pause para que o usuario possa ver a informação antes do programa apagar.
            system("pause");
        break;

        case 2:
        
            do  {
                system("cls");
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
                        printf("Adicionado %i unidades com sucesso.\n", addCiano);
                        break;
                    case 2:
                        printf("Qual a quantidade que deseja adicionar em Magenta?\n");
                        scanf("%i", &addMagenta);
                        estoque_magenta += addMagenta;
                        printf("Adicionado %i unidades com sucesso.\n", addMagenta);
                        break;
                    case 3:
                        printf("Qual a quantidade que deseja adicionar em Amarelo?\n");
                        scanf("%i", &addAmarelo);
                        estoque_amarelo += addAmarelo;
                        printf("Adicionado %i unidades com sucesso.\n", addAmarelo);
                        break;
                    case 4:
                        printf("Qual a quantidade que deseja adicionar em Preto?\n");
                        scanf("%i", &addPreto);
                        estoque_preto += addPreto;
                        printf("Adicionado %i unidades com sucesso.\n", addPreto);
                        break;
                    
                //Como eu iniciei com cls, tive que colocar um pause para que o usuario possa ver a informação antes do programa apagar.
                system("pause");    
                    
                    case 5:
                        printf("Voltando...\n");
                        break;
                    default:
                        printf("Opcao invalida");
                        break;
                }
                
            } while (menu2 != 5 );
            break;
        case 3:
            do  {
                system("cls");
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
                    
                    //Como eu iniciei com cls, tive que colocar um pause para que o usuario possa ver a informação antes do programa apagar.
                    system("pause");                          

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
                
                system("cls");
                printf("Gravando dados no estoque RDR Digital...\n");
        
        //Aqui é continuação do processo para guardar as informações de estoque no arquivo txt. Nessa parte ele salva as quantidades e fecha o programa.
        //se for a primeira vez que iniciar o programa, ele cria um arquivo txt para salvar os dados.
        FILE *arquivo_escrita;
        arquivo_escrita = fopen("estoque_rdr.txt", "w");
            
        if (arquivo_escrita != NULL)
        {
            fprintf(arquivo_escrita, "%d %d %d %d", estoque_ciano, estoque_magenta, estoque_amarelo, estoque_preto);
            fclose(arquivo_escrita);
            printf("\n[SISTEMA] Arquivo salvo com sucesso. Saindo...");
        }
        else{
            printf("[SISTEMA] Erro critico ao salvar o estoque.");
        }
                break;
        default: //menu principal, caso o usuario digite alguma opção que não tenha no menu, aparece essa mensagem
            printf("\nOpcao invalida no menu principal!\n");
            break;
    }
    //While do menu principal: a quarta opção é sair. 
    } while (menu1 != 4);
    
return 0;

}