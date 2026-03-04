#include <stdio.h>

int main() {
    int i, num;
    int somaPositivos = 0;
    int qtdMultiplos7 = 0;
    int maiorImpar = 0;
    int encontrouImpar = 0;

    for (i = 1; i <= 200; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &num);

        if (num > 0) somaPositivos += num;              // positivos
        if (num % 7 == 0) qtdMultiplos7++;              // múltiplos de 7
        if (num % 2 != 0 && (!encontrouImpar || num > maiorImpar)) {
            maiorImpar = num;                           // maior ímpar
            encontrouImpar = 1;
        }
    }

    printf("\n=== RESULTADOS ===\n");
    printf("Soma dos positivos: %d\n", somaPositivos);
    printf("Quantidade de múltiplos de 7: %d\n", qtdMultiplos7);
    if (encontrouImpar)
        printf("Maior número ímpar: %d\n", maiorImpar);
    else
        printf("Nenhum número ímpar foi digitado.\n");

    return 0;
}
