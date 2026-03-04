#include <stdio.h>

int main() {
    FILE*arquivo;
    char c;
    int linhas = 0;

    arquivo = fopen("texto.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo:\n");

        return 1;
    }
    printf("Conteudo do arquivo:\n");

    while((c = fgetc(arquivo)) != EOF)
    {
        putchar(c);

        if(c == '\n'){
            linhas++;

        }

        }
        fclose(arquivo);

        if(linhas > 0 || c != EOF) {
            linhas++;

        }

        printf("\nO numero de linhas eh: %d\n", linhas);

        return 0;

    }
