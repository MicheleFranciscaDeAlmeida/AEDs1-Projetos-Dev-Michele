#include <stdio.h>

int main() {
    FILE *arquivo;
    float numero;
    float soma = 0.0;
    float maximo, minimo;
    int contador = 0;

    arquivo = fopen("entrada.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo 'entrada.txt'!\n");
        return 1;
    }

    //Faz a leitura do primeiro número fora do loop para inicializar min e max
    if (fscanf(arquivo, "%f", &numero) != 1) {
        printf("Arquivo vazio ou formato inválido.\n");
        fclose(arquivo);
        return 1;
    }

    maximo = minimo = numero;
    soma += numero;
    contador = 1;

    //Faz leitura dos demais números
    while (fscanf(arquivo, "%f", &numero) == 1) {
        if (numero > maximo)
            maximo = numero;
        if (numero < minimo)
            minimo = numero;
        soma += numero;
        contador++;
    }

    fclose(arquivo);

    //Calcula média
    float media = soma / contador;

    //Imprime os resultados
    printf("%.2f\n%.2f\n%.2f\n%d\n", maximo, minimo, media, contador);

    return 0;
}
