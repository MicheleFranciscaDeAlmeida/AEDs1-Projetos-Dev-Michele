#include <stdio.h>

int main() {
    double A, B, temp;

    //Leitura dos dois números
    scanf("%lf %lf", &A, &B);

    //Uso de variavel temporaria para troca de valores
    temp = A;
    A = B;
    B = temp;

    //Imprimi valores 
    printf("%lf %lf\n", A, B);

    return 0; 
    
}