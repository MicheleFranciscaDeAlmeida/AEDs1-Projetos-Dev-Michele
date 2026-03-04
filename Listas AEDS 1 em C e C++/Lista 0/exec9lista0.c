#include <stdio.h>

int main() {
    int numerador, denominador;
    double resultado;

    scanf("%d %d", &numerador, &denominador);

    if(denominador == 0) {
        printf("Houve um erro: denominador não pode ser um zero.\n" );
    return 1;
    }

    resultado = (double) numerador / denominador;

    printf("%lf\n", resultado); 

    return 0;
}