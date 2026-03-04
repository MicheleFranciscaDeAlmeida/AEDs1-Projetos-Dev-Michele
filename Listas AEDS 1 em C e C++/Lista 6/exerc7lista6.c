#include <stdio.h>

int main() {
    FILE *arquivo;
    int n, i, vogais = 0;
    char letra, c;

    printf("Digite a quantidade de letras (N): ");
    scanf("%d", &n);

    arquivo = fopen("letras.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    //Gravação N letras no arquivo, uma por linha
    for (i = 0; i < n; i++) {
        printf("Digite a letra %d: ", i + 1);
        scanf(" %c", &letra);       // o espaço antes de %c ignora enter anterior
        fprintf(arquivo, "%c\n", letra); // grava letra + quebra de linha
    }

    fclose(arquivo);

    //Abertura do arquivo para leitura
    arquivo = fopen("letras.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("\nLetras gravadas no arquivo:\n");

    //Faz a leitura de caractere por caractere e conta vogais
    while ((c = fgetc(arquivo)) != EOF) {
        if (c != '\n')
            printf("%c\n", c);

        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            vogais++;
        }
    }

    fclose(arquivo);

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}
