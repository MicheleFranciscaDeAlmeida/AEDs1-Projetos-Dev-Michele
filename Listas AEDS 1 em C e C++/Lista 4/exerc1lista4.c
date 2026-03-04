#include <stdio.h>

// Função recursiva para calcular fatorial
int fatorial(int n) {
    if (n == 0 || n == 1)  // caso base
        return 1;
    else
        return n * fatorial(n - 1);  // chamada recursiva
}

int main() {
    int numero;

    // Leitura do número
    scanf("%d", &numero);

    // Impressão do resultado
    printf("%d\n", fatorial(numero));

    return 0;
}
