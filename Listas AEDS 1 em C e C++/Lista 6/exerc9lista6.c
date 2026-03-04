#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *entrada, *saida;
    int opcao;
    int matricula;
    long long telefone;

    printf("Escolha a forma de entrada de dados:\n");
    printf("1 - Pelo teclado\n");
    printf("2 - Por arquivo (entrada.txt)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Cria/abre o arquivo de saída
    saida = fopen("saida.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída!\n");
        return 1;
    }

    if (opcao == 1) {
        int continuar;
        do {
            printf("\nDigite a matricula: ");
            scanf("%d", &matricula);
            printf("Digite o telefone: ");
            scanf("%lld", &telefone);

            fprintf(saida, "%d %lld\n", matricula, telefone);

            printf("Deseja inserir outro aluno? (1-Sim / 0-Nao): ");
            scanf("%d", &continuar);
        } while (continuar == 1);

    } else if (opcao == 2) {
        // Tenta abrir o arquivo de entrada
        entrada = fopen("entrada.txt", "r");

        if (entrada == NULL) {
            printf("Erro: não foi possível abrir o arquivo 'entrada.txt'.\n");
            fclose(saida);
            return 1;
        }

        printf("Leitura de dados do arquivo entrada.txt...\n");

        // Lê até o final do arquivo
        while (fscanf(entrada, "%d %lld", &matricula, &telefone) == 2) {
            fprintf(saida, "%d %lld\n", matricula, telefone);
        }

        fclose(entrada);
        printf("Leitura concluída e dados gravados no arquivo 'saida.txt'.\n");
    } else {
        printf("Opção inválida!\n");
        fclose(saida);
        return 1;
    }

    fclose(saida);
    printf("Dados gravados no arquivo 'saida.txt'.\n");

    return 0;
}
