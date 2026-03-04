#include <stdio.h>

int main()
{
    int N;
    double soma = 0;

    scanf("%d", &N);

    if (N <= 0)
    {
        printf("O numero N deve ser inteiro e positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++)
    {
        soma += 1.0 / i; // uso de 1.0 para evitar uma divisão inteira
    }

    printf("%.2lf\n", soma);

    return 0;
}