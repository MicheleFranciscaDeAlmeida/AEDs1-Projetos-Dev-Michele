#include <stdio.h>

int ordenaValores(int *a, int *b, int *c) {

    if (*a == *b && *b == *c) {
        return 1;
    }

    int troca;


    if (*a > *b) {
        troca = *a;
        *a = *b;
        *b = troca;
    }
    if (*a > *c) {
        troca = *a;
        *a = *c;
        *c = troca;
    }

    if (*b > *c) {
        troca = *b;
        *b = *c;
        *c = troca;
    }

    return 0;
}

int main() {
    int n1, n2, n3;
    int resultado;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("\nValores originais: %d, %d, %d\n", n1, n2, n3);

    resultado = ordenaValores(&n1, &n2, &n3);

    if (resultado == 1) {
        printf("Todos os valores sao iguais: %d, %d, %d\n", n1, n2, n3);
    } else {
        printf("Valores ordenados: %d, %d, %d\n", n1, n2, n3);
    }

    return 0;
}
