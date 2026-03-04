#include <stdio.h>

int main()
{
    FILE *arquivo;
    int i;

    // Abertura ou criação do arquivo para escrita
    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Laço de repetição de 1 até 10, um número por linha
    for (i = 1; i <= 10; i++)
    {
        fprintf(arquivo, "%d\n", i);
    }

    fclose(arquivo);
    printf("Numeros gravados no arquivo 'numeros.txt'!\n");

    return 0;
}