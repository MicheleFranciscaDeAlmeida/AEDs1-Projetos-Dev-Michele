#include <stdio.h>

int main() {
    FILE*arquivo;
    char c;

    //abertura do arquivo
    arquivo = fopen("texto.txt", "w");

    //verifica se deu erro
    if (arquivo == NULL)
    {

        printf("Erro ao tentar abrir o arquivo: \n");

        return 1;
    }
    printf("Digite um texto (pressione enter e depois CRTL Z para finalizar):\n ");

    while((c = getchar()) != EOF) {
        fputc(c, arquivo);
    }
    fclose(arquivo);

    printf("Texto foi gravado no arquivo 'texto.txt'!\n");

    return 0;
    }
