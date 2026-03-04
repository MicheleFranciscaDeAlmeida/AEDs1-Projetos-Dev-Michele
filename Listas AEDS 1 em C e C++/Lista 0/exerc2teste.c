#include <stdio.h>

int main() {
    int idade;
    float peso;
    char sexo;

    int idadeMulherMaisNova = -1; // flag: nenhuma mulher cadastrada
    float pesoMulherMaisNova = 0;

    int somaIdadesHomens = 0;
    int qtdHomensMais80 = 0;

    printf("Digite idade, peso e sexo (F/M). Para encerrar, digite idade negativa.\n");

    // primeira leitura da idade
    printf("\nIdade: ");
    scanf("%d", &idade);

    while (idade >= 0) {
        printf("Peso: ");
        scanf("%f", &peso);

        printf("Sexo (F/M): ");
        scanf(" %c", &sexo); // espaço antes do %c ignora enter anterior

        // Se for mulher, verificar se é a mais nova
        if (sexo == 'F' || sexo == 'f') {
            if (idadeMulherMaisNova == -1 || idade < idadeMulherMaisNova) {
                idadeMulherMaisNova = idade;
                pesoMulherMaisNova = peso;
            }
        }

        // Se for homem com mais de 80kg
        if ((sexo == 'M' || sexo == 'm') && peso > 80) {
            somaIdadesHomens += idade;
            qtdHomensMais80++;
        }

        // lê próxima idade
        printf("\nIdade: ");
        scanf("%d", &idade);
    }

    printf("\n=== RESULTADOS ===\n");

    if (idadeMulherMaisNova == -1) {
        printf("Nao foi digitada nenhuma mulher.\n");
    } else {
        printf("Peso da mulher mais nova: %.2f kg\n", pesoMulherMaisNova);
    }

    if (qtdHomensMais80 == 0) {
        printf("Nao foi digitado nenhum homem com mais de 80kg.\n");
    } else {
        float media = (float) somaIdadesHomens / qtdHomensMais80;
        printf("Media das idades dos homens com mais de 80kg: %.2f anos\n", media);
    }

    return 0;
}
