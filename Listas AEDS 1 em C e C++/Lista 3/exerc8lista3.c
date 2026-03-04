#include <stdio.h>

// Função que calcula a série
double calculaSerie(int N)
{
    double S = 0.0;
    for (int i = 1; i <= N; i++)
    {
        S += (double)(i * i + 1) / (i + 3);
    }
    return S;
}

int main()
{
    int N;
    scanf("%d", &N);

    double resultado = calculaSerie(N);
    printf("%.6lf\n", resultado); // 6 casas decimais

    return 0;
}