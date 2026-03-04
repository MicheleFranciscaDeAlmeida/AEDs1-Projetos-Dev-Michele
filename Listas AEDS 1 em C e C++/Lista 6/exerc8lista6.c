#include <stdio.h>

int main() {
    FILE *arquivo;
    int qtdveiculos;
    float valoraluguel;
    float faturamentoanual, valormultas, valormanutencao;

    // Entrada de dados
    printf("Digite a quantidade de veiculos: ");
    scanf("%d", &qtdveiculos);

    printf("Digite o valor do aluguel de cada veiculo: ");
    scanf("%f", &valoraluguel);

    // a) 1/3 dos veículos alugados por mês → faturamento anual
    faturamentoanual = (qtdveiculos / 3.0) * valoraluguel * 12;

    // b) 1/10 dos veículos alugados no mês devolvidos com atraso → multa de 20%
    valormultas = (qtdveiculos / 3.0) * (1.0 / 10.0) * (valoraluguel * 0.20);

    // c) 2% dos veículos precisam de manutenção anual → R$600,00 cada
    valormanutencao = (qtdveiculos * 0.02) * 600.0;

    // Exibir resultados na tela
    printf("\n%.2f\n%.2f\n%.2f\n", faturamentoanual, valormultas, valormanutencao);

    // Gravar resultados no arquivo
    arquivo = fopen("resultado.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "%.2f\n%.2f\n%.2f\n", faturamentoanual, valormultas, valormanutencao);
    fclose(arquivo);

    printf("\nOs resultados foram salvos em 'resultado.txt'.\n");

    return 0;
}
