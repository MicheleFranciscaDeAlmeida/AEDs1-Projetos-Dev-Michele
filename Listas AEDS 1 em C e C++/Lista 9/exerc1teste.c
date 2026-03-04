#include <stdio.h>

int main() {
    int num;
    int somaPositivos = 0;
    int qtdMultiplos7 = 0;
    int maiorImpar = 0;
    int achouImpar = 0; // flag para verificar se apareceu algum ímpar

    printf("Digite numeros (digite 0 para encerrar):\n");

    do {
        printf("Numero: ");
        scanf("%d", &num);

        if (num != 0) {
            // soma dos positivos
            if (num > 0) {
                somaPositivos += num;
            }

            // verifica múltiplos de 7
            if (num % 7 == 0) {
                qtdMultiplos7++;
            }

            // verifica maior ímpar
            if (num % 2 != 0) {
                if (!achouImpar || num > maiorImpar) {
                    maiorImpar = num;
                    achouImpar = 1;
                }
            }
        }

    } while (num != 0);

    printf("\n=== RESULTADOS ===\n");
    printf("Soma dos numeros positivos: %d\n", somaPositivos);
    printf("Quantidade de multiplos de 7: %d\n", qtdMultiplos7);

    if (!achouImpar) {
        printf("Nao foi digitado nenhum numero impar.\n");
    } else {
        printf("Maior numero impar: %d\n", maiorImpar);
    }

    return 0;
}
