#include <stdio.h>
#include <stdlib.h>

int main() {
    int fita_estoque = 0;
    int escolha;

    // ------------------------------------------------------------------
    // PASSO 1: TENTAR LER O ARQUIVO ASSIM QUE O PROGRAMA ABRE
    // ------------------------------------------------------------------
    FILE *arquivo_leitura;
    arquivo_leitura = fopen("dados_grafica.txt", "r"); // "r" significa READ (Ler)

    if (arquivo_leitura != NULL) {
        // Se o arquivo existe, o C lê o número salvo e joga na nossa variável
        fscanf(arquivo_leitura, "%i", &fita_estoque);
        fclose(arquivo_leitura); // Sempre feche o arquivo após usar!
        printf("[SISTEMA]: Estoque anterior carregado com sucesso!\n");
    } else {
        printf("[SISTEMA]: Nenhum arquivo encontrado. Começando estoque do zero.\n");
    }
    // ------------------------------------------------------------------

    do {
        printf("\n--- ESTOQUE DE FITAS (TESTE) ---\n");
        printf("Quantidade atual no HD: %i rolos\n", fita_estoque);
        printf("1 - Adicionar 1 rolo\n");
        printf("2 - Salvar e Sair\n");
        printf("Escolha: ");
        scanf("%i", &escolha);

        if (escolha == 1) {
            fita_estoque++;
            system("cls");
            printf("Fita adicionada! Nova quantidade temporaria: %i\n", fita_estoque);
        }

    } while (escolha != 2);

    // ------------------------------------------------------------------
    // PASSO 2: GRAVAR NO ARQUIVO ANTES DE FECHAR O PROGRAMA
    // ------------------------------------------------------------------
    printf("\n[SISTEMA]: Gravando os dados no HD antes de fechar...\n");
    
    FILE *arquivo_escrita;
    arquivo_escrita = fopen("dados_grafica.txt", "w"); // "w" significa WRITE (Escrever/Sobrescrever)

    if (arquivo_escrita != NULL) {
        // Grava o valor atual da variável dentro do arquivo txt
        fprintf(arquivo_escrita, "%i", fita_estoque);
        fclose(arquivo_escrita);
        printf("[SISTEMA]: Dados salvos! Pode fechar o terminal em paz.\n");
    } else {
        printf("[SISTEMA]: Erro crítico ao salvar os dados!\n");
    }
    // ------------------------------------------------------------------

    return 0;
}