#include <stdio.h>

// Função recursiva para somar de 1 até n
int soma(int n) {
    if (n == 1) 
    return 1;       // Caso base: soma de 1 até 1 é 1
    return n + soma(n - 1);     // Soma n com a soma dos números anteriores
}

int main() {
    int n;

    scanf("%d", &n);

    int resultado = soma(n);
    printf("%d\n", resultado);

    return 0;
}