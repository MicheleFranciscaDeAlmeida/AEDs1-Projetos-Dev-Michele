#include <stdio.h>

int contardigitos(int n) {
    if (n == 0) return 0;
    return 1 + contardigitos(n / 10);
}

int main() {
    int numero;

    // Leitura do número
    scanf("%ld\n", &numero);

    // Caso o número seja 0, ele tem 1 dígito
    if (numero == 0) {
        printf("O numero tem 1 digito %ld: \n");
    } else {
        int resultado = contardigitos(numero);

        printf("%ld\n", resultado);
    }

    return 0;
}
