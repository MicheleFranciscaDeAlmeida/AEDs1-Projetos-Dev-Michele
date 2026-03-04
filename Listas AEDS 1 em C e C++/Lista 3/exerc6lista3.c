#include <stdio.h>

// função para calcular fatorial

long long fatorial(int num)
{
    long long fat = 1;
    for (int i = 1; i <= num; i++)
    {
        fat *= i;
    }
    return fat;
}
// função que calcula e retorna valor da serie

double calculaserie(int N)
{
    double s = 1.0; // começa com termo inicial "1"

    for (int i = 1; i <= N; i++)
    {
        s += 1.0 / fatorial(i);
    }
    return s;
}

int main()
{
    int N;
    double resultado;

    scanf("%d", &N);

    resultado = calculaserie(N);

    // imprimir com 6 casas decimais
    printf("%.6lf\n", resultado);

    return 0;
}