#include <stdio.h>

int main()
{
    int N;
    double E = 1;
    double fatorial = 1.0;

    scanf("%d", &N);

    if (N <= 0)
    {
        printf("O numero N deve ser inteiro e positivo.\n");
        return 1;
    }
    for (int i = 1; i <= N; i++)
    {
        fatorial *= i;
        E += 1.0 / fatorial;
    }

    printf("%.2lf\n", N, E);

    return 0;
}