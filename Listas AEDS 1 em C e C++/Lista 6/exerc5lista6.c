#include <stdio.h>

int main() {
    FILE*arquivo1, *arquivo2, *arquivo3;
    char c;

    //abertura do primeiro arquivo e escrita do conteudo do arquivo
    arquivo1= fopen("arquivo1.txt", "w");

    //verifica condicao NULL = se der erro aparece a mensagem de erro
    if(arquivo1 == NULL) {
        printf("Erro ao criar o arquivo1.txt.\n");

        return 1;
    }

    fprintf(arquivo1, "Conteudo inicial do primeiro arquivo.\n");
    fclose(arquivo1);

    arquivo2 = fopen("arquivo2.txt", "w");
    if(arquivo2 == NULL)
    {
        printf("Erro ao criar o arquivo2.txt.\n");

        return 1;
    }
    fclose(arquivo2);

    arquivo1 = fopen("arquivo1.txt", "r");
    arquivo2 = fopen("arquivo2.txt", "r");
    arquivo3 = fopen("arquivo3.txt", "w");

    if (arquivo1 == NULL || arquivo2 == NULL || arquivo3 == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");

        return 1;
    }
    while((c = fgetc(arquivo1)) != EOF) fputc(c, arquivo3);

    while((c = fgetc(arquivo2)) != EOF) fputc(c, arquivo3);

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    printf("Arquivos foram concatenados em 'arquivo3.txt'.\n");

    return 0;
    }
