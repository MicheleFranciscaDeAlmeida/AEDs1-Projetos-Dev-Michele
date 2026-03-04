#include <stdio.h>

int main() {
    FILE*arquivo;
    char c;
    int contador = 0;

    //abertura do arquivo
    arquivo = fopen("texto.txt", "r");

    //verifica se deu erro
    if (arquivo == NULL)
    {

        printf("Erro ao tentar abrir o arquivo: \n");

        return 1;
    }

    while((c = fgetc(arquivo)) != EOF) {
        if (c == 'a' || c == 'A') {
            contador++;
    }
}
    fclose(arquivo);

    printf("%d CARACTERES\n", contador);

    return 0;
    }
